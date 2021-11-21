//wap to reverse string

#include <stdio.h>

void Reverse(char*start)
{
	char*end = start;			// Suppose start is at 50 address
	char temp;

	while(*end != '\0')
	{
		end++;		// 55
	}
	end--;

	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}

}


int main()
{
	char str[200];

	printf("Enter the string :\t");
	scanf("%[^'\n']s",&str);

	Reverse(str);

	printf("Reversed string is:\t %s",str);

	return 0;
}