#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file.
 * @filename: A pointer to the name of the file.
 * @text_content: Text to add to file.
 * Return: If the function fails - -1.
 *         On success - 1.
 */

int create_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (!filename)
return (-1);
if (text_content != NULL)
while (text_content[len])
len++;
o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(o, text_content, len);
if (o == -1 || w == -1)
return (-1);
close(o);
return (1);
}
