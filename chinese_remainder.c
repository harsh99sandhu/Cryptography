/* 
   HARSHPREET SINGH SANDHU
   R134218065
*/ 
#include <stdio.h>
#include <stdlib.h>


int evaluate(int num[], int rem[], int k) 
{ 
    int x = 1; 
    while (1) 
    { 
        
        int j; 
        for (j=0; j<k; j++ ) 
            if (x%num[j] != rem[j]) 
               break; 
  
        if (j == k) 
            return x; 
  
        x++; 
    } 
  
    return x; 
} 
  
int main()
{
	int n = 4;	 
	int a[n], b[n],i;
	
	printf("The number of equations: %d\n",n);
	printf("Enter the numbers:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
		printf("Enter the respective remainders:\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",&b[i]);
	}
		printf("Answer: %d",evaluate(a, b, n));
	return 0;
}
