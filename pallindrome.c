#include <stdio.h>

int main()
{
    int num, rev = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    
    int temp = num; 
    
    while (temp != 0) 
    {
        int digit = temp % 10;   
        rev = rev * 10 + digit;  
        temp /= 10;              
    }

    if (rev == num) 
    {
        printf("This number is a palindrome.\n");
    } 
    else 
    {
        printf("This number is not a palindrome.\n");
    }

    return 0;
}
