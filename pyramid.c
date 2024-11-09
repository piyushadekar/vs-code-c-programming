#include <stdio.h>

int main()
{
    int i, j, k, n, p;
    printf("Enter the length of the pyramid: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= (n - i); j++) 
        {
            printf(" ");
        }
        
        for (k = 1; k <= i; k++) 
        {
            printf("*");
        }
        
        for (p = i - 1; p >= 1; p--) 
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
