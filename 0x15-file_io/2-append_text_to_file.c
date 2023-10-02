#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 * h, j, the_length: locally decleared variables
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write  permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int h, j, the_length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (the_length = 0; text_content[the_length];)
		the_length++;
	}
	h = open(filename, O_WRONLY | O_APPEND);
	j = write(h, text_content, the_length);
	if (h == -1 || j == -1)
		return (-1);
	close(h);
	return (1);
}
