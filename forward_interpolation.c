#include <stdio.h>

// Function to compute factorial
long factorial(int n) {
    long fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n, i, j;
    printf("Enter the number of arguments: ");
    scanf("%d", &n);

    float x[n], y[n][n], h, u, X, Y = 0.0, C[n], M[n];

    // Input values
    printf("Enter values of X and Y: \n");
    for (i = 0; i < n; i++)
        scanf("%f%f", &x[i], &y[i][0]);

    // Construct forward difference table
    for (j = 1; j < n; j++) {
        for (i = 0; i < n - j; i++) {
            y[i][j] = y[i + 1][j - 1] - y[i][j - 1];
        }
    }

    // Get the value of X to interpolate
    printf("Enter the value of x for which y is to be found: ");
    scanf("%f", &X);

    // Compute interpolation
    h = x[1] - x[0];
    u = (X - x[0]) / h;

    for (i = 0; i < n; i++)
        M[i] = y[0][i] / factorial(i);

    C[0] = 1;
    for (i = 1; i < n; i++)
        C[i] = C[i - 1] * (u - (i - 1));

    for (i = 0; i < n; i++)
        Y += C[i] * M[i];

    // Print the interpolated result
    printf("f(%.1f) = %.3f\n", X, Y);

    return 0;
}

