#include <stdio.h>
int mian()
{
    float *p[4], dis, tot;
    int i, cnt[4], j;

    for (i = 0; i < cnt; i++)
    {

        printf("Enter the items count: ");
        scanf("%d", &cnt[i]);
        p[i] = (float *)malloc(cnt[i] * (sizeof(int)));

        printf("Enbter the %d th player items price: ");
        for (j = 0; j < cnt[i]; j++)
        {
            scanf("%f", (p[i] + j));
        }
    }

    printf("\n List of Items with price \n");

    for (i = 0; i < 4; i++)
    {
        tot=0.0;
        dis=0.0;
        printf("buyer %d",i+1);
        for()
    }
    return 0;
}