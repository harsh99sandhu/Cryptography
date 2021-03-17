/* 
   HARSHPREET SINGH SANDHU
   R134218065
*/ 
 
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,arr[26][26];
	char txt[100],s[100],key[100];
	for(i=0;i<26;i++)
	{
		for(j=0;j<26;j++)
		{
			if((65+i+j)<=90)
			{
				arr[i][j]=65+j+i;
			}
			else
			{
				arr[i][j]=65+j+i-26;
			}
		}
	}
	for(i=0;i<26;i++)
	{
		for(j=0;j<26;j++)
		{
			printf("%c ",arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\nEnter the plain text: ");
	gets(txt);
	printf("Enter the key: ");
	gets(key);
	j=0;
	for(i=0;txt[i]!='\0';i++)
	{
		s[i]=arr[txt[i]-65][key[j]-65];
		j++;
		if(key[j]=='\0')
		j=0;
	}
	for(i=0;s[i]!='\0';i++)
	printf("%c",s[i]);
}
