#include <stdio.h>

int _sqrt_recursion_helper(int n, int start, int end)
{
    if (start > end)
    {
        return -1; // Number does not have a natural square root
    }

    int mid = start + (end - start) / 2;
    int square = mid * mid;

    if (square == n)
    {
        return mid; // Found the natural square root
    }
    else if (square > n)
    {
        return _sqrt_recursion_helper(n, start, mid - 1); // Search in the lower half
    }
    else
    {
        return _sqrt_recursion_helper(n, mid + 1, end); // Search in the upper half
    }
}

int _sqrt_recursion(int n)
{
    if (n < 0)
    {
        return -1; // Negative numbers don't have real square roots
    }

    return _sqrt_recursion_helper(n, 0, n); // Call helper function with initial start and end values
}

int main(void)
{
    int r;

    r = _sqrt_recursion(9);
    printf("%d\n", r); // Output: 3

    r = _sqrt_recursion(16);
    printf("%d\n", r); // Output: 4

    r = _sqrt_recursion(8);
    printf("%d\n", r); // Output: -1

    r = _sqrt_recursion(17);
    printf("%d\n", r); // Output: -1

    r = _sqrt_recursion(25);
    printf("%d\n", r); // Output: 5

    r = _sqrt_recursion(-1);
    printf("%d\n", r); // Output: -1

    return 0;
}
