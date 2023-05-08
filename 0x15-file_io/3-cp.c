#include "main.h"

#define BUFSIZE 1024

/**
 * main - Entry point
 * @argc: count of arguments passed
 * @argv: array of argument strings
 * Return: 0 (Success) 0r 97, 98, 99 and 100 (Failure)
 */
int main(int argc, char **argv)
{
int ff, ft, r, w;
char buffer[BUFSIZE];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
return (97);
}
ff = open(argv[1], O_RDONLY);
if (ff == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
ft = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (ft == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(ff);
return (99);
}
do {
r = read(ff, buffer, BUFSIZE);
if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
close(ff);
close(ft);
return (98);
}
w = write(ft, buffer, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
close(ff);
close(ft);
return (99);
}
} while (r > 0);
if (close(ff) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
return (100);
}
if (close(ft) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
return (100);
}
return (0);
}
