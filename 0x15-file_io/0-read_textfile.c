#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads txt file
 * @filename:txt file
 * @letters: letters to be read
 * Return: w-  number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd, r, w;
char *buffer;

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buffer = malloc(sizeof(char) * letters);
r = read(fd, buffer, letters);
w = write(STDOUT_FILENO, buf, t);

free(buffer);
close(fd);
return (w);
}


