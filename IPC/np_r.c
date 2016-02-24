#include <stdio.h>
#include <fcntl.h>

#define MSG_SIZE 63
int main()
{
    int fd,nwrite;
    char msgbuf[MSG_SIZE+1];
    if((fd=open("npipe",O_RDWR)<0))
    {
        printf("\nCannont open npipe \n");
        return 0;
    }
    for(;;) {
        if(read(fd,msgbuf,MSG_SIZE+1)>0)
            printf("Message : %s\n",msgbuf);
    }
    return 0;
}

