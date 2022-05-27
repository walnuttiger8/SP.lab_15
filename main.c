#include "task1/task1.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PI 3.14
#define A(r) (r*PI*PI)

#ifndef N

#define N 10
int arr[N];

#endif

int main() {
    srand(time(NULL));

    sum(1.f, 3.f);
    float a = A(2);
    printf("%f\n", a);

    for (int i = 0; i < N; i++) {
        arr[i] = rand() % 100;
        printf("%d; ", arr[i]);
    }

    return 0;
}
