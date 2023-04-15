#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: points to file created
 * @text_content: string to write file
 * Return: -1 fail
 */
int create_file(const char *filename, char *text_content)
{
int fd, w;
int length;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length]; )
length++;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, text_content, length);

if (w == -1 || fd == -1)
return (-1);

close(fd);

return (1);
}


