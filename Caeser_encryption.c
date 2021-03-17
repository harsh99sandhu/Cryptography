/* 
   HARSHPREET SINGH SANDHU
   R134218065
*/ 
  
#include<stdio.h>
#include<string.h>
void main()
{
	int key,side,i=0,comp;
	char input[1000],output[1000];
	printf("Enter input\n");
	fgets(input,sizeof(input),stdin);
	printf("Enter key\n");
	scanf("%d",&key);
	printf("Enter 0 for left side or 1 for right side\n");
	scanf("%d",&side);
	if(key==0)
	{
		printf("Encrypted text\n");
		puts(input);
	}
	else
	{
		if(side==0)
	{
		for(i=0;i<(strlen(input)-1);i++)
		{
			if(input[i]==' ')
			{
			 output[i]=input[i];
			}
			else
			{
				comp=input[i];
			if(comp-97-key>=0)
			output[i]=comp-key;
			else
			output[i]=comp+(26-key);
	    	}
			}
	}
	else
	{
	for(i=0;i<(strlen(input)-1);i++)
		{
			if(input[i]==' ')
			{
				output[i]=input[i];
			}
			else
			{
			comp=input[i];
			if(comp+key>122)
			output[i]=comp-(26-key);
			else
			output[i]=comp+key;
			}
		}	
	}
	printf("Encrypted text\n");
	puts(output);
}
}
