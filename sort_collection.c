#include<stdio.h>
int main(){
    int *p,cnt,temp,i,j;
    printf("Enter the element count: ");
    scanf("%d",&cnt);
    p=(int*)malloc(cnt*(sizeof(int)));
    printf("Enter the elements: ");
    for(i=0;i<cnt;i++){
        scanf("%d",(p+i));
    }

    for(i=0;i<cnt;i++){
        for(j=i+1;j<cnt;j++){
            if((*(p+i))>(*(p+j))){
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }

printf("sorted element list: ");
for(i=0;i<cnt;i++){
    printf("%-5d",*(p+i));
}
    return 0;
}