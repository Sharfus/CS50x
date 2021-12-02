#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Create a pyramid from 1 to 8 bricks tall based on user input of size

    // Initialize variables used
    int row =0, height=0, bricks=0;
    string brick="# ";

    // Prompt for pyramid size 1 to 8
    do
        int height = get_int("Please enter pyramid height from 1 to 8: \n");
    while (height <1 || height > 8);

    // Print the spaces
    for(int s, spaces < (height-row_number), b++)
        {
            printf(brick);
        }

    // Print the bricks - bad initialization
    for(bricks, bricks < row_number, bricks++)
        {
            printf(brick);
        }

}