#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * |: acts as a bitwise operation
 * pointer_f, t and len: decleared variable
 * Return: If the function fails - -1.
 *      Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int pointer_f, t, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	pointer_f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	t = write(pointer_f, text_content, len);
	if (pointer_f == -1 || t == -1)
		return (-1);
	close(pointer_f);
	return (1);
}
