#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output.
 * @filename: text file
 * @letters: number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, nr_bytes, nr_write;
char *buf;

if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
if (buf == NULL)
return (0);
nr_bytes = read(fd, buf, letters);
if (nr_bytes == -1)
{
free(buf);
return (0);
}
nr_write = write(STDOUT_FILENO, buf, nr_bytes);
if (nr_write == -1)
{
free(buf);
return (0);
}
free(buf);
close(fd);
return (nr_write);
}
