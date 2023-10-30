#include <stdio.h>

int main() {
    int N;

    // Input the value of N
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int array[N][N];
    int sum = 0;

    // Input elements for the N x N array
    printf("Enter elements for the %d x %d array:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Calculate the sum of the main diagonal elements
    for (int i = 0; i < N; i++) {
        sum += array[i][i];
    }

    printf("The sum of the main diagonal elements is: %d\n", sum);

    return 0;
}

