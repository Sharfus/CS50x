#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get users name and print it out
    string name = get_string("What is your name? \n");

    printf("hello, %s\n", name);
}
