#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
         printf("Positive number");
    else if (num < 0)
        printf("Negative number");
    else
        printf("Neither positive nor negative");
    return 0;
}
