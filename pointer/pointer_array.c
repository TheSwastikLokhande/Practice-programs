int main()
{
    float *p[4],tot,dis;
    int i, j, ic[4];

    for(i=0;i<4;i++)
    {
        printf("\n Enter the item count of %d buyer: ",i+1);
        scanf("%d",&ic[i]);

        p[i]=(float*)malloc(ic[i]*sizeof(float));

        printf("\n Enter the price of %d items: ",ic[i]);
        for(j=0;j<ic[i];j++)
        {
            scanf("%f",*(p+i)+j);
        }
    }

    printf("\n List of Items with price \n");
    for(i=0;i<4;i++)
    {
        tot=0.0;
        dis=0.0;
        printf("\n Buyer %d: ",i+1);
        for(j=0;j<ic[i];j++)
        {
            printf("  %7.2f",*(*(p+i)+j));
            tot=tot + *(*(p+i)+j);
        }
        if(tot<500)
            dis=tot*0.05;
        else
            dis=tot*0.14;

        printf("\t total bill: %0.2f \t Discount: %0.2f \t Pay Rs: %0.2f",tot,dis,(tot-dis));
    }
    return 0;
}