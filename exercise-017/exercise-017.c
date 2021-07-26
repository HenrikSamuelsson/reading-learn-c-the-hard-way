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

