#include <stdio.h>

int  main()
{
    int arr[10];
    char c;
       printf("\n\nRead and Print elements of an array:\n");
       printf("-----------------------------------------\n");

    printf("Input 10 elements in the array :\n");
    for(int i=0; i<10; i++)
    {
	    printf("element - %c : ",c);
        scanf("%c", &arr[i]);
    }

    printf("\nElements in array are: ");
    for(int i=0; i<10; i++)
    {
        printf("%c  ", arr[i]);
    }
    printf("\n");
}
