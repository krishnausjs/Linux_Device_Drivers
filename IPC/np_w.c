#include <stdio.h>
#include <fcntl.h>

#define MSG_SIZE 63
int main()
{
    int fd,nwrite;
    char msgbuf[MSG_SIZE+1]="Lungi dance";
    if((fd=open("npipe",O_RDWR)<0))
    {
        printf("\nCannont open npipe \n");
        return 0;
    }
    if((nwrite=write(fd,msgbuf,MSG_SIZE))<=0)
    {
        printf("\n Cannot write the message\n");
    }
    return 0;
}

