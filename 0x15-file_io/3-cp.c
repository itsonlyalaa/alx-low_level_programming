#include "main.h"

/**
 * file_err - checks if files are opened
 * @file_from: file from
 * @file_to: file to
 * @argv: argument vector
 * Return: mo return since void
*/

void file_err(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - check the code
 * @argc: number of arguments.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int file_from, file_to, close_error;
ssize_t chars, wr;
char buff[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_err(file_from, file_to, argv);
chars = 1024;
while (chars == 1024)
{
chars = read(file_from, buff, 1024);
if (chars == -1)
{
file_err(-1, 0, argv);
}
wr = write(file_to, buff, chars);
if (wr == -1)
{
file_err(0, -1, argv);
}
close_error = close(file_from);
if (close_error == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
close_error = close(file_to);
if (close_error == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
}
return (0);
}
