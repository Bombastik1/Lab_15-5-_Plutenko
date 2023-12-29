#include <stdio.h> 
#include <limits.h> 
#include <locale>

int main() {
    setlocale(LC_ALL, "");
    int n = 10;
    int i;
    int* array = (int*)malloc(n * sizeof(int));

    srand((unsigned int)time(NULL));
    for (int i = 0; i < n; i++) {
        array[i] = rand() % 201 - 100;
        printf("%d ", array[i]);
    }
    printf("\nЕлементи масиву в зворотньому порядку\n: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    return 0;
}