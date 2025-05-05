#include <stdio.h>
#include <stdlib.h>

#define NX 4
#define NY 5
#define NZ 4

void analyz(float arr[], int size, float a, float b, float *sum, float *average) {
    int count = 0;
    *sum = 0;

    for (int i = 0; i < size; i+=1) {
        if (arr[i] >= a && arr[i] <= b) {
            *sum += arr[i];
            count+=1;
        }
    }

    if (count > 0){
         *average = *sum / count;
        }
    else{
        *average = 0;
    }
}

int main() {
    system("chcp 65001");
    
    float x[NX], y[NY], z[NZ];
    float sum, avg, a, b;

    printf("Введення меж інтервалу [a, b]:\n");
    printf("a = "); scanf("%f", &a);
    printf("b = "); scanf("%f", &b);

    printf("Введення %d елементів масиву x:\n", NX);
    for (int i = 0; i < NX; i+=1) {
        printf("x[%d] = ", i + 1);
        scanf("%f", &x[i]);
    }

    printf("Введення %d елементів масиву y:\n", NY);
    for (int i = 0; i < NY; i+=1) {
        printf("y[%d] = ", i + 1);
        scanf("%f", &y[i]);
    }

    printf("Введення %d елементів масиву z:\n", NZ);
    for (int i = 0; i < NZ; i+=1) {
        printf("z[%d] = ", i + 1);
        scanf("%f", &z[i]);
    }

    analyz(x, NX, a, b, &sum, &avg);
    printf("Масив x: sum = %.2f, average = %.2f\n", sum, avg);

    analyz(y, NY, a, b, &sum, &avg);
    return 0;
}