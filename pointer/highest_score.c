#include <stdio.h>
int main()
{
    int *p, max = 0, i, cnt;
    pritf("Enter the match count: ");
    scanf("%d", &cnt);
    p = (int *)malloc(cnt * (sizeof(int)));

    printf("Enter score: ");
    for (i = 0; i < cnt; i++)
    {
        scanf("%d", (p + i));
    }

    // process
    for (i = 0; i < cnt; i++)
    {
        if (*(p + i) > max)
        {
            max = (*(p + i));
        }
    }

    printf("Max score from %d matches is: %d ", cnt, max);

    return 0;
}