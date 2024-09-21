#include <stdio.h>
#include <stdlib.h>
#include <time.h> // Include the time.h header for seeding random numbers

int main()
{
    int n, max, num, c;

    // Prompt the user to enter the number of random numbers
    printf("Enter the number of random numbers you want: ");
    scanf("%d", &n);

    // Check if n is a valid positive integer
    if (n <= 0)
    {
        printf("Please enter a valid positive integer for the number of random numbers.\n");
        return 1;
    }


    printf("Enter the maximum value of random number: ");
    scanf("%d", &max);

    /    if (max <= 0)
    {
        printf("Please enter a valid positive integer for the maximum value.\n");
        return 1; // Return an error code
    }

    // Seed the random number generator using the current time
    srand(time(NULL));

    // Display the random numbers
    printf("%d random numbers from 0 to %d are:-\n", n, max);

    for (c = 1; c <= n; c++)
    {
        // Generate a random number between 0 and max
        num = rand() % (max + 1);
        printf("%d\n", num);
    }

return 0;
}
