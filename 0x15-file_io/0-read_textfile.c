#include"main.h"
/**
 * read_textfile - function that reads a text file and prints it to the POSIX standard output
 * @filename: a pointer to the file 
 * @letter: number of letters it should read and print
 * Return: the actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t numrd;
    ssize_t numwr;
    char *buf;

    if(!filename)
    {
        return(0);
    }
    else
    {
        fd = open(filename, O_RDONLY);
        if (fd == -1)
        {
            return(0);
        }
        else
        {
            buf = malloc(sizeof(char) * letters);
            if(buf == NULL)
            {
                return(0);
            }
            numrd = read(fd, buf, letters);
            numwr = write(STDOUT_FILENO, buf, numrd);
        }
    close(fd);
    free(buf);
    }
    return(numwr);
}