
// WAP IN C TO CREATE NEW FILE

#include <stdio.h>
#include <stdlib.h>
#include <io.h>
#include <unistd.h>

int main()
{
	int fd = 0;

	fd = creat("pranav.txt",0777);

	if(fd == -1)
	{
		printf("Unable to create file\n");
	}

	else
	{
		printf("File Successfully created\n");
	}

}