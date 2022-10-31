#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: Text to add to file.
 * Return: If the function fails - -1.
 *         On success - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int o, w, len = 0;

if (!filename)
return (-1);
while (text_content[len++])
;
o = open(filename, O_WRONLY | O_APPEND)
w = write(o, text_content, len - 1);
if (o == -1 || w == -1)
return (-1);
close (o);
return (1);
}
