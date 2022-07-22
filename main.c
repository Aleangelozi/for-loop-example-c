#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long sum = 0LL;
    unsigned int count = 0;

    printf("Enter the number of integers you want to sum\n");
    scanf(" %u", &count);

    int i;
    for(i = 1; i <= count; ++i)
    {
        printf("Inside the loop\n");
        sum += i;
    }


    printf("\nTotal of the first %u number is %llu\n", count, sum);

    /*Infinite loop: sometimes useful for monitoring data or listening for connections
    for(;;){statements}
    */

    return 0;
}
