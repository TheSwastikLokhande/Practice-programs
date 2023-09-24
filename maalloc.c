#include<stdio.h>
#include<stdlib.h>

int main(){
    int *p,cnt,i;
    printf("Enter the element cnt: ");
    scanf("%d",&cnt);
    p=(int*)malloc(cnt*(sizeof(int)));
    printf("Enter the element:");
    for(i=0;i<cnt;i++){
        scanf("%d",(p+i));
    }

    printf("The block elements are: \n");
    
    for(i=0;i<cnt;i++){
        printf("%-5d",*(p+i));
    }
    return 0;
}