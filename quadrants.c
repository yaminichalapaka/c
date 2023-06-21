#include <stdio.h>
int main()
{
    int x, y;
      printf("Enter the value for x and y: ");
      scanf("%d %d", &x, &y);
      if (x > 0 && y > 0)
      printf("This point lies in the first quadrant.");
      else if (x < 0 && y > 0)
      printf("This point lies in the second quadrant.");
      else if (x < 0 && y < 0)
      printf("This point lies in the third quadrant.");
      else if (x > 0 && y < 0)
     printf("This point lies in the fourth quadrant.");
     else if (x == 0 && y == 0)
     printf("This point lies at the orgin.");
    return 0;
}
