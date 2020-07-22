#include<stdio.h>
void main()
{
    int height, counter;
    do
    {
        printf("Enter the height: \n");
        scanf("%i",&height);
    } while (height <0 || height >8);

    for (int x=1 ; x<=height ; x++)
    {
        for (int y=height-x ; y!=0 ; y--)
        {
            printf(" ");
        }
        for (int z=1; z<=x ; z++)
        {
            printf("#");
        }
        printf("  ");
        for (int w=1; w<=x ; w++)
        {
            printf("#");
        }
        printf("\n");
    }
}
