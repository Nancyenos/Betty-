#include "main.h"
/**
 * create_file -function to create a file with rw permisions
 * @filename: name of file
 * @text_content: text to be written on file
 * Return: 1 on success,-1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int count;

	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 600);
	for (count = 0 ; *text_content != '\0' ; count++)
	{
		write(fp, text_content, count);
	}
	close(fp);
	return (fp);
}
