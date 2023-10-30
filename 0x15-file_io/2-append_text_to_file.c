#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 if success and -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fn;
int letters;
int wr;

if (!filename)
{
return (-1);
}
fn = open(filename, O_WRONLY | O_APPEND);
if (fn == -1)
{
return (-1);
}
if (text_content)
{
for (letters = 0; text_content[letters]; letters++)
;
wr = write(fn, text_content, letters);
if (wr == -1)
{
return (-1);
}
}
close(fn);
return (1);
}
