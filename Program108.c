//wap which accepts file name from user and reads whole file  and display contents of the file from it.
#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>
#include <fcntl.h>

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Buffer[10];
	printf("Enter file name\n");
	scanf("%s",Fname);
	fd=open(Fname,O_RDONLY);
	if(fd== -1)
	{
		printf("Unable to open the file\n");
	    return-1; 
	}
	else
	{
		printf("File successfully opened with FD:%d\n",fd);
	}
    printf("Data from file is:\n");
    while((iRet= read(fd,Buffer,sizeof(Buffer)) )!=0)//read(fd,Buffer,sizeof(Buffer)) ,read function call
    {
       write(1,Buffer,iRet);
    }
    close(fd);
	return 0;
}