/* 
   HARSHPREET SINGH SANDHU
   R134218065
*/ 
  
#include<stdio.h>
#include<string.h>
void main()
{
	int key,i=0,comp=0;
	char input[1000],output[1000];
	printf("Enter input\n");
	fgets(input,sizeof(input),stdin);
	
	for(key=0;key<26;key++)
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
		printf("Decrypted text can be\n");
	    puts(output);
	    printf("\n");

	}
}
