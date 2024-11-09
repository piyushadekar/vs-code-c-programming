#include <stdio.h>

int main()
{
    int i;
    int num[] = {10, 15, 16, 21};
    for (i = 0; i < 4; i++)
    {
        if (num[0] < num[i])
        {
            num[0] = num[i];
        }
        {
            printf("the largest element of array is %d\n", num[0]);
        }
    }
    return 0;
}