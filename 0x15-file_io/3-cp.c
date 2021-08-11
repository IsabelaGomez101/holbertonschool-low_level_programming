#include "main.h"


/**
 * fail_error - function that check error.
 * @fd: file descriptor.
 * @e: integer.
 * @file: file.
 * Return: void.
*/

void fail_error(int fd, int e, char *file)
{
if (fd == -1)
{
if (e == 98)
{
exit(98);
dprintf(2, "Error: Can't read from file %s\n", file);
}
if (e == 99)
{
exit(99);
dprintf(2, "Error: Can't write to %s\n", file);
}
}
}



/**
 * cp - function that copies the content of a file to another file.
 * @file_from: file source
 * @file_to: fdestination file.
 * Return: void.
*/

void cp(char *file_from, char *file_to)
{
int fd, fd2, re_read, re_write, close1, close2;
int e1 = 98;
int e2 = 99;
char *buf[1024];

/*open source file*/
fd = open(file_from, O_RDONLY);
fail_error(fd, e1, file_from);
/*create destination file*/
fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
fail_error(fd2, e2, file_to);
do {
/**read the file*/
re_read = read(fd, buf, 1024);
fail_error(re_read, e1, file_from);
/**write and save to destination file*/
re_write = write(fd2, buf, re_read);
fail_error(re_write, e2, file_to);
} while (re_write == 1024);
close1 = close(fd);
if (close1 == -1)
{
exit(100);
dprintf(2, "Error: Can't close fd %i\n", close1);
}
close2 = close(fd2);
if (close2 == -1)
{
exit(100);
dprintf(2, "Error: Can't close fd %i\n", close2);
}
}


/**
 * main - program.
 * @ac: count arguments.
 * @av: arguments.
 * Return: 0.
 */

int main(int ac, char **av)
{
if (ac != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}
cp(av[1], av[2]);
return (0);
}
