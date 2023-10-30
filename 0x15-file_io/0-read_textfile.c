#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If it fails, it returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fn;
ssize_t rd, wr;
char *buff;
if (!filename)
{
return (0);
}
fn = open(filename, O_RDONLY);
if (fn == -1)
{
return (0);
}
buff = malloc(sizeof(char) * (letters));
if (!buff)
{
return (0);
}
rd = read(fn, buff, letters);
wr = write(STDOUT_FILENO, buff, rd);
close(fn);
free(buff);
return (wr);
}
