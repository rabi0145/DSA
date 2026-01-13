#include <stdio.h>
#include <time.h>

// Recursive function to solve Tower of Hanoi
void toh(int n, char source, char auxiliary, char destination)
{
    // Base case
    if (n == 1)
    {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from source to auxiliary
    toh(n - 1, source, destination, auxiliary);

    // Move nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    // Move n-1 disks from auxiliary to destination
    toh(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;
    clock_t start, end;
    double time_taken;

    printf("Enter number of disks: ");
    scanf("%d", &n);

    // Start timing
    start = clock();

    // A = source, B = auxiliary, C = destination
    toh(n, 'A', 'B', 'C');

    // End timing
    end = clock();

    // Calculate execution time
    time_taken = (double)(end - start) / CLOCKS_PER_SEC;

    printf("Execution Time: %f seconds\n", time_taken);

    return 0;
}
     