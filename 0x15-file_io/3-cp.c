#include "main.h"
/**
 * error - chech if a file is open and handle errors
 * @file_from: the file we are copying from
 * @file_to: the file we are copyng to
 * @argv: argument vector
 * Return: nothing
*/

void error (int file_to, int file_from, char *argv[])
{
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
        exit(99);
    }
}

/**
 * main - program to copy content of one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return:  0 on success;
*/
int main(int argc, char *argv[])
{
    int file_from;
    int file_to;
    int err_close;

    ssize_t numread;
    ssize_t numwr;
    char *buf[1024];

    if(argc != 3)
    {
        dprintf(STDERR_FILENO,"%s\n", "Usage: cp file_from file_to");
        exit(97);
    }
    file_from = open(argv[1], O_RDONLY);
    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
    error(file_from, file_to, argv);
    /*if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
        exit(98);
    }
     if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
        exit(99);
    }*/
    numread = 1024;
    while(numread == 1024)
    {
        numread = read(file_from, buf, 1024);
        if(numread == -1)
        {
            /*error_file(-1,0,argv);*/
            {
                dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
                exit(98);
            }
        }
        numwr = write(file_to, buf, numread);
        if(numwr == -1)
        {
            /*error_file(0,-1,argv);*/
            {
                dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
                exit(99);
            }
        }
    }
    err_close = close(file_from);
    if(err_close == -1)
    {
        dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", file_from);
        exit(100);
    }
    err_close = close(file_to);
    if(err_close == -1)
    {
        dprintf(STDERR_FILENO,"Error: Can't close fd %d\n", file_to);
        exit(100);
    }
    return(0);
}