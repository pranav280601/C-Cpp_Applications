
// WAP IN C TO CREATE NEW FILE

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <unistd.h>
#include <fcntl.h>
int main()
{
	int fd = 0;
	char Name[30];

	printf("Enter the name of the file :\t");
	scanf("%s",&Name);

	fd = open(Name,O_RDWR);		//(7(4(read)+2(write)+1(execute)) //(0(octal)7(owner)7(group)7(others))

	if(fd == -1)
	{
		printf("Unable to open the file\n");
	}

	else
	{
		printf("File Successfully Opened\n");
	}

	return 0;
}