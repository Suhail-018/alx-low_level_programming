#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>
#define BUFSIZE 1024
/**
 * error_exit - prints an error message and exits with the specified code
 * @exit_code: the exit code
 * @format: the format string for the error message
 */
void error_exit(int exit_code, const char *format, ...)
{
va_list args;
va_start(args, format);
dprintf(STDERR_FILENO, "Error: ");
vdprintf(STDERR_FILENO, format, args);
va_end(args);
exit(exit_code);
}
/**
 * main - copies the content of a file to another file
 * @argc: the argument count * @argv: the argument vector
 * Return: 0 if successful, a non-zero value otherwise
 */
int main(int argc, char **argv)
{
int fd_from, fd_to, nread, nwritten;
char buf[BUFSIZE];
if (argc != 3)
error_exit(97, "Usage: cp file_from file_to\n");
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
error_exit(98, "Can't read from file %s\n", argv[1]);
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
error_exit(99, "Can't write to file %s\n", argv[2]);
while ((nread = read(fd_from, buf, BUFSIZE)) > 0)
{
nwritten = write(fd_to, buf, nread);
if (nwritten == -1)
error_exit(99, "Can't write to file %s\n", argv[2]);
if (nwritten != nread)
error_exit(99, "Short write to file %s\n", argv[2]);
}
if (nread == -1)
error_exit(98, "Can't read from file %s\n", argv[1]);
if (close(fd_from) == -1)
error_exit(100, "Can't close fd %d\n", fd_from);
if (close(fd_to) == -1)
error_exit(100, "Can't close fd %d\n", fd_to);
return (0);
}
