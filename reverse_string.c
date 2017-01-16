#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i,len,j;
	int a[100];
	char *p; // pointer to character
	p = (char *)malloc(sizeof(char)*10);
	scanf("%[^\n]s",p);
	len = strlen(p);
	j =1;
	a[0] = len;
	for(i=len;i>0;i--)
	{
		if(*(p+i) == ' ')
		{	
			
			a[j] = i;	
			j++;	
		}
	}
	a[j] = 0;
	j=0;	
	for(i=a[j+1]+1;i<a[j];i++)
	{
		printf("%c",*(p+i));
		if(i>a[j]-2)
		{
		
			j++;
			i = a[j+1]-1;
		if(a[j+1] == 0)
		{
			printf(" ");
		}
		}	
	}
	printf("\n");


	
return 0;
}
