#include "main.h"
#include <stdlib.h>
/**
* read_textfile- Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return:wrtn actual number of bytes read and printed. 
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buff;
ssize_t fd;
ssize_t wrtn;
ssize_t redt;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * letters);
redt = read(fd, buff, letters);
wrtn = write(STDOUT_FILENO, buff, redt);
free(buff);
close(fd);
return (wrtn);
}

