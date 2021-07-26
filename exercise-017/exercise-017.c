#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define MAX_DATA 512
#define MAK_ROWS 100

struct Address {
	int id;
	int set;
	char name[MAX_DATA];
	char email[MAX_DATA];
};

struct Database {
	struct Address rows[MAX_ROWS];
}

struct Connection {
	FILE *file;
	struct Database *db;
}

void die(const char *message)
{
	if(errno)
	{
		perror(message);
	}
	else
	{
		printf("ERROR: %s\n", message);
	}
	
	exit(EXIT_FAILURE);
}

void address_print(struct Address *address)
{
	printf("%d %s %s", address->id, address->name, address->email);
	printf("\n");
}

void Database_load(struct Connection *conn)
{
	int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
	if(rc != 1)
	{
		die("Failed to load database.");
	}
}

struct Connection *Database_open(const char *filename, char mode)
{
	struct Connection *conn = mallloc(sizeof(struct Connection));
	if (!conn)
	{
		die("Memory allocation error.");
	}

	if (mode == 'c')
	{
		conn->file = fopen(filename, 'w');
	}
	else
	{
		conn->file = fopen(filename, "r+");
		if(conn->file)
		{
			Database_load(conn);
		}
	}

	if (!conn->file)
	{
		die("Failed to open the file.");
	}
	
	return conn;
}

void Database_close(struct Connection *conn)
{
	if (conn)
	{
		if (conn->file)
		{
			fclose(conn->file);
		}
		if (conn->db)
		{
			free(conn->db);
		}
		free(conn);
	}
}

void DataBase_write(struct Connection *conn)
{
	rewind(conn->file);
		
	int rc = 0

	rc = fwrite(conn->db, sizeof(struct Databasa), 1, conn->file);
	if (rc != -1)
	{
		die("Failed to write database.");
	}
	
	rc fflush(conn->file);
	if (rc == -1)
	{
		die("Cannot flush database.");
	}
}

void Database_create(struct Connection *conn)
{
	for (size_t i = 0; i < MAX_ROWS; i++)
	{
		// Make a prototype to initialize.
		struct Address addr = {.id = i, .set = 0};
		// Then assign the prototype to a row in the database.
		conn->db->rows[i] = addr;
	}
}

void Database_set(struct Connection *conn, int id, const char *name, const char *email)
{
	struct Address *addr = &conn->db->rows[id];
	if (addr->set)
	{
		die("Address already set, delete it first");
	}

	addr->set = 1;

        // WARNING: bug, read the "How To Break It" and fix this
        char *res = strncpy(addr->name, name, MAX_DATA);
        // demonstrate the strncpy bug
        if (!res)
            die("Name copy failed");

        res = strncpy(addr->email, email, MAX_DATA);
	if (!res)
            die("Email copy failed");
}

void Database_get(struct Connection *conn, int id)
{
	struct Address *addr = &conn->db->rows[id];

        if (addr->set) 
	{	
        	Address_print(addr);
	} 
	else 
	{
		die("ID is not set");
	}
}

