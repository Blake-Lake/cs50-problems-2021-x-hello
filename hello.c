#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // The program prompts the user "What's your name?" via get_string
    // The name the user enters is stored in a variable called name
    string name = get_string("What's your name?\n");

    // This prints "Hello, " and enters the name variable declared earlier in the program
    printf("Hello, %s\n", name);
}