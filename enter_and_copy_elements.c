#include<stdio.h>
#include<stdlib.h>
int main(){

    int *p,cnt,*q,i;

    printf("Enter the element count: ");
    scanf("%d",&cnt);

    p=(int*)malloc(cnt*(sizeof(int)));
    q=(int*)malloc(sizeof(p));
printf("Enter the element: ");
    for(i=0;i<cnt;i++){
        scanf("%d",(p+i));
    }
// process
    for(i=0;i<cnt;i++){
        *(q+i)=*(p+i);
    }
printf("element: \n");
    for(i=0;i<cnt;i++){
        printf("%d",*(p+i));
    }
    return 0;
}