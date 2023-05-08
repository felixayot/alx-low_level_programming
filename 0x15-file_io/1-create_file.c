#include "main.h"
/**
 * create_file - Function prototype
 * Description: creates a file.
 * @filename: input string pointer
 * @text_content: input string pointer
 * Return: 1 (Success) otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
int fC;
ssize_t num;
if (filename == NULL)
{
return (-1);
}
fC = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (fC == -1)
{
return (-1);
}
if (text_content != NULL)
{
num = write(fC, text_content, strlen(text_content));
if (num == -1)
{
close(fC);
return (-1);
}
}
close(fC);
return (1);
}
