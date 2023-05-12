#include "main.h"
/**
 * append_text_to_file -apend text at end of file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, count;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (count = 0 ; text_content[count] ;)
			count++;
	}
	fp = open(filename, O_WRONLY | O_APPEND, 664);
	w = write(fp, text_content, count);
	if (fp == -1 || w == -1)
		return (-1);
	close(fp);
	return (1);
}
