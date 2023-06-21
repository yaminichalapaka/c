#include <stdio.h>
int main()
{
    float area,radius;
    printf(“Enter the radius”);
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("%0.2f",area);
    return 0;
}
