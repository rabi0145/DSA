#include <stdio.h>
#include <time.h>

// Recursive function to find GCD using Euclidean Algorithm
int findGCD(int a, int b)
{
    if (b == 0)
        return a;
    return findGCD(b, a % b);
}

int main()
{
    int num1, num2;
    clock_t start, end;
    double time_taken;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Start timing
    start = clock();

    // Use absolute values to handle negative numbers
    int result = findGCD(num1 < 0 ? -num1 : num1,
                         num2 < 0 ? -num2 : num2);

    // End timing
    end = clock();

    // Calculate execution time in seconds
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    printf("Execution Time: %f seconds\n", time_taken);

    return 0;
}
