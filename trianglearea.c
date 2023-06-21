#include <stdio.h>
int main()
{
    float area,h,b;
    printf("Enter the height and base: ");
    scanf("%f %f",&h,&b);
    area=(h*b)/2;
    printf("%0.2f",area);
    return 0;
}
