#include "main.h"
/**
 * read_textfile - Function prototype
 * Description: reads a text file and prints it to the POSIX standard output.
 * @filename: input string pointer
 * @letters: input int
 * Return: actual number of letters otherwise 0 (Failure)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fR;
char *buffer;
ssize_t num, written;
if (filename == NULL)
{
return (0);
}
fR = fopen(filename, "r");
if (fR == NULL)
{
return (0);
}
buffer = (char *) malloc(letters * sizeof(char));
if (buffer == NULL)
{
fclose(fR);
return (0);
}
num = fread(buffer, sizeof(char), letters, fR);
if (num == -1)
{
free(buffer);
fclose(fR);
return (0);
}
written = write(STDOUT_FILENO, buffer, num);
if (written == -1 || written != num)
{
free(buffer);
fclose(fR);
return (0);
}
free(buffer);
fclose(fR);
return (num);
}

int main(int ac, char **av)
{
    ssize_t n;

    if (ac != 2)
    {
        dprintf(2, "Usage: %s filename\n", av[0]);
        exit(1);
    }
    n = read_textfile(av[1], 114);
    printf("\n(printed chars: %li)\n", n);
    n = read_textfile(av[1], 1024);
    printf("\n(printed chars: %li)\n", n);
    return (0);
}