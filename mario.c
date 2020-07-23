#include<stdio.h>
#include<cs50.h>

/*Program to print mario's blocks in the form of hashes with spaces to form a right aligned pyramid and a left aligned pyramid*/
int main(void)
{
    int height; /* Declaring an integer variable called height to hold the user's input as height */
    /* We initialize a do-while loop to capture user's input while it is greater than 1 and less than 8 inclusive of 8 */
    do
    {
        height = get_int("Height: ");
    } 
    while (height < 1 || height > 8);
    /* We create a nested for loop that will iterate over two integer variables x and y where y will be used to print the spaces of pyramid
     using decremental height and the last character will be an incremental # thus contributing to a right aligned pyramid */
    for (int x = 1 ; x <= height ; x++)
    {
        for (int y = height - x ; y != 0 ; y--)
        {
            printf(" ");
        }
        for (int z = 1; z <= x ; z++)
        {
            printf("#");
        }
        printf("  ");
        /* We append a space after the right pyramid and then print out a left aligned pyramid using another variable w */
        for (int w = 1; w <= x ; w++)
        {
            printf("#");
        }
        printf("\n");
    }
}
