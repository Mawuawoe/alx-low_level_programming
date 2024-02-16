#include "main.h"
/**
 * create_file - a function that creates and write into a file
 * @filename: filename to be created
 * @text_content: text content to write into file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
    int fd;
    int numletters;
    int numwr;

    if (filename == NULL)
    {
        return(-1);/*if there is no filename given to our program*/
    }
    else
    {
        /*open/create a file, we can write to, if the file already exit trancate 
        meaining we delete its content,permision rw- --- --- ie 600 */
        fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
        if(fd == -1)/*system call to open returns -1 if it fails to open and 1 on success*/
        {
            return(-1);
        }
        else
        {
            if(text_content == NULL)
            {
                text_content = "";
            }
            numletters = strlen(text_content);
            numwr = write(fd, text_content, numletters);
            if (numwr == -1)
            {
                return(-1);
            }
        }
        close(fd);
        return(1);
    }
}