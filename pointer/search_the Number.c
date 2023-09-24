#include<stdio.h>
int main(){
    int *p,no,i,cnt;
    printf("Ent the cnt of element list: ");
    scanf("%d",&cnt);
    p=(int*)malloc(cnt*(sizeof(int)));

    printf("Enter the elements:");
    for(i=0;i<cnt;i++){
        scanf("%d",(p+i));
    }

    printf("Ent the search element: ");
    scanf("%d",&no);
    // process

    for(i=0;i<cnt;i++){
        if(*(p+i)==no){
            printf("%d fount at %d position",no,i);
            break;
        }
    }
    return 0;
}