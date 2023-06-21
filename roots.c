#include<stdio.h> 
#include<math.h>
int main() 
{
    double a, b, c, d, root1, root2, r, i;
    printf("Enter value of a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d > 0) 
    {
        printf("There are two Real Roots\n");
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("root1 = %.2lf \nroot2 = %.2lf", root1, root2);
    }
    else if (d == 0) 
    {
        printf("Roots are equal\n");
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else 
    {
        r = -b / (2 * a);
        i = sqrt(-d) / (2 * a);
        printf("No Real Roots\n");
        printf("root1 = %.2lf+%.2lfi \nroot2 = %.2f-%.2fi", r, i, r, i);
    }
    return 0;
}
