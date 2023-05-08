#include "main.h"
/**
 * append_text_to_file - Function prototype
 * Description: appends text at the end of a file.
 * @filename: input string pointer
 * @text_content: input string pointer
 * Return: 1 (Success) or -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *fapp;
size_t num;
size_t len;
if (filename == NULL)
{
return (-1);
}
if (access(filename, W_OK) != 0)
{
return (-1);
}
if (text_content == NULL)
{
return (1);
}
len = strlen(text_content);
while (len > 0 && (text_content[len - 1] == '\"' ||
text_content[len - 1] == '\r'))
{
text_content[len - 1] = '\0';
len--;
}
fapp = fopen(filename, "a");
if (fapp == NULL)
{
return (-1);
}
num = fwrite(text_content, sizeof(char), len, fapp);
if (num != len)
{
fclose(fapp);
return (-1);
}
fclose(fapp);
return (1);
}
