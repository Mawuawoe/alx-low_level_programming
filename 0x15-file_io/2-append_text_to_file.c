#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the fileame given that we will append to
 * @text_content: text to be appended
 * Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
    int fd;
    int numletters;
    int numwr;

    if(filename == NULL)
    {
        return(-1);
    }
    else
    {
        fd = open(filename, O_WRONLY | O_APPEND);
        if (fd == -1)
        {
            return(-1);
        }
        else
        {
            if(text_content != NULL)
            numletters = strlen(text_content);
            numwr = write(fd, text_content, numletters);
            if (numwr == -1)
            {
                return(-1);
            } 
        }
        close(fd);
    }
    return(1);
}