#include<stdio.h>
int main(){
    float *p,tot=0.0,dis,pay_bill;
    int i,cnt;

    printf("Enter the no of items: ");
    scanf("%d",&cnt);
    p=(int*)malloc(cnt*(sizeof(float)));

    printf("Enter the item price: ");
    for ( i = 0; i < cnt; i++)
    {
        scanf("%d",(p+i));
    }
    // process
    for ( i = 0; i < cnt; i++)
    {
        tot=tot+(*(p+i));
        if(tot<500){
            dis=tot*0.05;
        }else{
            dis=tot*0.14;
        }
    }

    printf("\nTotal: %f",tot);
    printf("\nDiscount: %f",dis);
    printf("\nPay Bill: %f",tot-dis);

    
    
}