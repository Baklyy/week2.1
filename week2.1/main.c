#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Please enter a number : ");
    scanf("%f",&x);
    int y=x;
    float z=x-y;
    if (z>0)
        printf("Float\n");
    else
        printf("integer\n");
    return 0;
}
