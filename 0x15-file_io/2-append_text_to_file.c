#include "main.h"

/**
 * append_text_to_file - Append txt at the end
 * @filename: points to file
 * @text_content: string to add to the end of the file.
 * Return: --1 for NULL ,fail, and no permission  otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int o, w;
int length;
if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (length = 0; text_content[length]; )
length++;
}
o = open(filename, O_WRONLY | O_APPEND);
w = write(o, text_content, length);

if (w == -1 || o == -1)
return (-1);

close(o);

return (1);
}

