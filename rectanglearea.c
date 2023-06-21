#include <stdio.h>
int main()
{
    float area,l,b;
    printf("Enter the length and breadth: ");
    scanf("%f %f",&l,&b);
    area=l*b;
    printf("%0.2f",area);
    return 0;
}
