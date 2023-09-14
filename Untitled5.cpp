#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n,k,p=0;
	char pt[100];
	printf("Enter the plaintext: ");
	scanf("%s",pt);
	printf("Enter the depth: ");
	scanf("%d",&n);
	if(n==2)
	{
		printf("Cypher text= ");
	for(i=0;i<strlen(pt);i+=2)
	
	{
		printf("%c",pt[i]);
	}
	for(i=1;i<strlen(pt);i+=2)
	
	{
		printf("%c",pt[i]);
	}
}
else if(n==3)
{
	if(n<3)
	{
		for(int i=n;i<strlen(pt);i++)
		{
		if (i== p-1)
		{
			printf("%c",pt[i]);
			p+=4;
			;
			}	
		}
	}
}
	
}

