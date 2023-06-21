#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of people in the room: ");
    scanf("%d",&num);
    int total = num * (num-1) / 2;
    printf("Total handshakes = %d",total);
    return 0;
}
