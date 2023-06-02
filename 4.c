#include <stdio.h>

void changeDigits(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            if (str[i] == '9') {
                str[i] = '0';
            } else {
                str[i]++;
            }
        }

        i++;
    }
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);

    changeDigits(str);

    printf("%s\n", str);

    return 0;
}
