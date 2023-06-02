#include <stdio.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    int dx = abs(finish.x - start.x);
    int dy = abs(finish.y - start.y);

    if (dx <= 1 && dy <= 1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    struct Coord start;
    struct Coord finish;

    printf("(x1 y1): ");
    scanf("%d %d", &start.x, &start.y);

    printf("(x2 y2): ");
    scanf("%d %d", &finish.x, &finish.y);

    if (canGet(start, finish)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
