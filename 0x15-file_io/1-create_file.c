#include "main.h"

/**
 * create_file - creates a file
 * @filename:  is the name of the file to create.
 * @text_content:  is a NULL terminated string to write to the file.
 *
 * Return: 1 if it success and return -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
int fn;
int letters;
int wr;

if (!filename)
{
return (-1);
}
fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (!text_content)
{
text_content = "";
}
for (letters = 0; text_content[letters]; letters++)
;

wr = write(fn, text_content, letters);
if (wr == -1)
{
return (-1);
}
close(fn);
return (1);
}
