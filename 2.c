#include <stdio.h>

int sumFoo(int n) {
    int sum = 0;
    int i;

    for (i = 1; i <= n; i++) {
        sum += i * i * i * i;
    }

    return sum;
}

int main() {
    int n;

    printf("n: ");
    scanf("%d", &n);

    int result = sumFoo(n);
    printf("%d\n", result);

    return 0;
}
    