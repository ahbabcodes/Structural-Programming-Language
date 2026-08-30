#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result;

    printf("Is command processor available?\n");

    if (system(NULL))
    {
        printf("Command processor available!\n");

        printf("Executing command DIR\n");

        result = system("DIR");

        printf("Returned value is: %d.\n", result);
    }
    else
    {
        printf("Command processor not available!\n");
    }

    return 0;
}
