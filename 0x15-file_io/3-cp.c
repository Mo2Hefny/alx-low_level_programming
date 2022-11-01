#include "main.h"

#include <stdlib.h>



/**

 * create_buffer - Allocates 1024 bytes for file 2

 * @file_name: Pointer to file.

 * Return: Pointer to allocated bytes for buffer

 */
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file_name)
{
char *buffer;
buffer = malloc(1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
exit(99);
}
return (buffer);
}
/**
 * close_file - closes file
 * @file_name: pointer to file
 */

void close_file(char *file_name)
{
if (close(file_name) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
FILE *file_from;
FILE *file_to;
int r, w;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
file_from = open(argv[1], O_RDONLY);
r = read(file_from, buffer, 1024);
file_to = open(argv[2], O_CREAT |  O_WRONLY | O_TRUNC, 664);
do
{
if (file_from == -1 || r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(file_to, buffer, r);
if (file_to == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(file_from, buffer, 1024);
file_to = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);

free(buffer);
close_file(file_from);
close_file(file_to);
return (0);
}
