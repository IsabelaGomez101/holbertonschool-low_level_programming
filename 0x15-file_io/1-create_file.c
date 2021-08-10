#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
*/

int create_file(const char *filename, char *text_content)
{
ssize_t rs_write;
int fd;
int len = 0;

if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
while (*(text_content + len) != '\0')
len++;
rs_write = write(fd, text_content, len);
if (rs_write == -1)
{
write(1, "fails", 6);
return (-1);
}
}
close(fd);
return (1);
}
