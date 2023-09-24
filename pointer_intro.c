#include<stdio.h>
int main(){
    /*
    
   int x=10;
	int *p;  // pointer ti int value
	int **q; // pointer to integer pointer
	
	p=&x;
	q=&p;

    printf("%u",&x);
	
    */
   int x[4];
   int i;
   int *p=x;
printf("Enter the array elements:");
 for(i=0;i<4;i++){
    scanf("%d",(p+i));
   }

   for(i=0;i<4;i++){
    printf("%-5d",*(p+i));
   }
       return 0;
}