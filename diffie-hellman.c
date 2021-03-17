/* 
   HARSHPREET SINGH SANDHU
   R134218065
*/ 
 
#include<stdio.h> 
#include<math.h> 
  
long long int power(long long int r, long long int s, 
                                     long long int t) 
{  
  	return (((long long int)pow(r, s)) % t); 
} 
  
int main() 
{ 
    long long int P, G, x,y ,private_key1, private_key2, shared_key1, shared_key2;  
      
    P =13; 
    printf("The value of P : %lld\n", P);  
  
    G =11;
    printf("The value of G : %lld\n\n", G);  
  
   
    private_key1= 5;  
    printf("The private key a for Customer_1 : %lld\n", private_key1); 
    x = power(G, private_key1, P); 
      
    private_key2 =4; 
    printf("The private key b for Customer_2 : %lld\n\n", private_key2); 
    y = power(G, private_key2, P);
    
    printf("Public Key for the Customer_1 is : %lld\n", y); 
    printf("Public Key for the Customer_2 is : %lld\n\n", x); 

    shared_key1= power(y, private_key1, P);
    shared_key2= power(x, private_key2, P); 
    
    printf("Shared secret for the Customer_1 is : %lld\n", shared_key1); 
    printf("Shared secret for the Customer_2 is : %lld\n", shared_key2); 
      
    return 0; 
} 
