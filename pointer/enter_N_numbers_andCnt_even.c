/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
    int *p,cnt,d,i,flag;
    
    printf("Enter element count: ");
    scanf("%d",&cnt);
    p=(int*)malloc(cnt*(sizeof(int)));
    
    printf("Enter the element: ");
    for(i=0;i<cnt;i++){
        scanf("%d",(p+i));
    }
    printf("The element: ");
    // process
    for(i=0;i<cnt;i++){
       
        flag=0;
        for( d=2;d<=*(p+i)/2;d++){
            if(*(p+i)%d==0){
                flag=1;
            }
        }
        if(flag==0){
            printf("%5d",*(p+i));
        }
    }
    return 0;
}
