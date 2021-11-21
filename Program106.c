
//WAP IN C TO CLOSE FILE BY TAKING FILE NAME FROM USER

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
	int fd = 0,iRet = 0;
	char Name[30];
	char Data[255] = {"Marvellous Infosystems"};

	printf("Enter the name of the file :\t");
	scanf("%s",&Name);

	fd = open(Name,O_RDWR);		//(7(4(read)+2(write)+1(execute)) //(0(octal)7(owner)7(group)7(others))

	if(fd == -1)
	{
		printf("Unable to open the file\n");
		return -1;			// return to OS
	}

	else
	{
		printf("File Successfully Opened with FD :%d\n",fd);
	}

	iRet = write(fd,Data,10);
	printf("%d Bytes is Successfully written inside file\n",iRet);

	printf("Data from the file is:\n");
	write(1,Data,iRet);

	close(fd);

	return 0;

}