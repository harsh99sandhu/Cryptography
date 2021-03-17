/* 
   HARSHPREET SINGH SANDHU
   R134218065
*/ 
  
#include<stdio.h>
#include<string.h>
void main()
{
            char input[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
            char key[26]={'Z','Y','X','W','V','U','T','S','R','Q','P','O','N','M','L','K','J','I','H','G','F','E','D','C','B','A'};
            char p[20]={'\0'},output[20]={'\0'},r[20]={'\0'};
            int i,j;
            printf("Enter plain text: \n");
            gets(p);
            for(i=0;i<strlen(p);i++)
            {
                        for(j=0;j<26;j++)
                        {
                        if(input[j]==p[i])
                        {
                                    output[i]=key[j];
                        }
                        }
            }
            printf("\nCipher text is:%s\n",output);

            for(i=0;i<strlen(output);i++)
            {
                        for(j=0;j<26;j++)
                        {
                        if(key[j]==output[i])
                        {
                                    r[i]=input[j];
                        }
                        }
            }
            printf("\nPlain text is: %s\n",r);
}
