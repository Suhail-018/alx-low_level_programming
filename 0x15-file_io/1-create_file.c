#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * create_file - Creates a file and writes text content into it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int file_dest;
int no_to_wrtn = strlen(text_content);
ssize_t bytesWritten;
if (filename == NULL)
return (-1);
file_dest = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (file_dest == -1)
return (-1);
if (text_content != NULL)
{
bytesWritten = write(file_dest, text_content, no_to_wrtn);
if (bytesWritten == -1)
{
close(file_dest);
return (-1);
}
}
close(file_dest);
return (1);
}
