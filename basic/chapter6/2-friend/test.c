#include <fcntl.h>
#include <stdio.h>
int main()
{
    int fd;

    while (1)
    {
        fd = open("test", O_CREAT|O_RDONLY, 0644);
        if (fd == -1)  
            break;
        printf("fd[%d]\n", fd);
    }
    
}