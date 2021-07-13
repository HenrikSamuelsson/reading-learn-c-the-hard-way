# Reading Learn C the Hard Way

Material related to reading the book Learn C the Hard Way: Practical Exercises on the Computational Subjects You Keep Avoiding (Like C), written by Zed A. Shaw, published Aug 2015
by Addison-Wesley Professional.

## Book Buying Options

Some notes on buying the book.

I personally bought the book from Google Play because the price there was lower than in many other places. An issue with buying from Google Play is that there are videos that complement the book that are not directly included in the Google Play edition. So what I did was to register the book at [informit.com](https://www.informit.com/) and then it was possible to download a file with all the videos from there.

Otherwise the book is also available in paper version from most book stores.

You can also get an course from [learncodthehardway.org](https://learncodethehardway.org/) and then an e-book, videos and other content will be available for you there, I assume.

## Development Environment

### Operating System

Plan to try doing the exercises using a Windows 10 machine but running Ubuntu 20.04 Linux on Windows Subsystem for Linux 2 (WSL).

I basiccally just followed the guide [Windows Subsystem for Linux Installation Guide for Windows 10](https://docs.microsoft.com/en-gb/windows/wsl/install-win10) to get Ubuntu on my Windows machine.

### Build Tools

When having Ubuntu running I installed the gcc compiler and other build tools using the following command.

```
sudo apt-get install build-essential
```

Checked the installed GCC version using the following command.

```
gcc --version
```

Which returned.

```
gcc (Ubuntu 9.3.0-17ubuntu1~20.04) 9.3.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

So I am currently at version 9.3.0.
