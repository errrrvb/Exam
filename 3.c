#include <stdio.h>

int main() {
    int current;
    int previous;
    int count = 0;

    // Считываем первое число
    scanf("%d", &previous);

    // Считываем остальные числа
    while (1) {
        scanf("%d", &current);
        
        if (current == 0) {
            break; // Введено число 0, прерываем цикл
        }

        if (current > previous * 2) {
            count++;
        }

        previous = current;
    }

    printf("%d\n", count);

    return 0;
}
