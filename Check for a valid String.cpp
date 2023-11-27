#include<stdio.h>
#include<stdlib.h>
int validstring(char *B)
{
	int i;
	for(i=0;B[i] !='\0';i++)
	{
		if( !(B[i]>=65&&B[i<=90 ]) && !(B[i]>=97&&B[i]<=122) && !(B[i]>=48&&B[i]<=57) )
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char *B="komal";
	int j;
	printf("String : %s\n",B);
	if(validstring(B))
	{
		printf("Valid string");
	}
	else
	{
		printf("Invalid string");
	}
return 0;	
}
