#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, nu_read;
char buffer[1024];
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
nu_read = read(fd, buffer, letters);
if (nu_read == -1)
{
close(fd);
return (0);
}
if (write(STDOUT_FILENO, buffer, nu_read) != nu_read)
{
close(fd);
return (0);
}
close(fd);
return (nu_read);
}
