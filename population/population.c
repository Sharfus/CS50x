#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Calculate the number of years to reach a certain size herd of llamas
    // Note each year the llama population growth is start + (start/3) - (start/4)

    // initialize variables needed in multiple blocks of code
    int size = 0;
    int end_size = 0;
    int years = 0;

    // Prompt for start size
    do
    {
        size = get_int("Enter the llama herd starting size GREATER than 8: ");
    }
    while (size < 9);

    // Prompt for end size
    do
    {
        end_size = get_int("Enter the ending size GREATER than the starting size of %i ", size);
    }
    while (end_size <= size);

    // Calculate number of years until we reach threshold
    for (years = 0; size < end_size; years++)
    {
        // each year herd population increases by 1/3 births
        // and decreases by 1/4 from deaths
        size = size + size / 3 - size / 4;
    }
    // Print number of years to reach target herd size
    // My printf("It will take %i years to reach %i llamas\n", years, end_size);
    // expected printf below.  I like mine better.  :-)
    printf("Years: %i\n", years);

}
