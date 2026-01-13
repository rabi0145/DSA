#include <stdio.h>
#include <time.h>

// Function to find GCD using the iterative Euclidean Algorithm
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int num1, num2;
    clock_t start, end;
    double time_taken;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Start measuring time
    start = clock();

    // Using absolute values to handle negative inputs
    int result = findGCD(num1 < 0 ? -num1 : num1,
                         num2 < 0 ? -num2 : num2);

    // Stop measuring time
    end = clock();

    // Calculate time taken in seconds
    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("The GCD of %d and %d is: %d\n", num1, num2, result);
    printf("Execution Time: %f seconds\n", time_taken);

    return 0;
}
