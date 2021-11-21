// Find the size of file
// lseek count each character , space, digit.
// Strong code than previous code program15

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h> 

int main()
{
	int fd = 0, iRet = 0;
	char Fname[20];
	

	printf("Enter file name\n");
	scanf("%s",Fname);

	fd = open(Fname,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;
	} 

	iRet = lseek(fd,0,2); // File starts from ending(2)

	printf("File Size is : %d\n",iRet);
    
    close(fd);

	return 0;
}      