#include <stdio.h>
int main(void) {
    int a, b, c, max;
    scanf_s("%d %d %d", &a, &b, &c);

    if ((a != b) && (a != c) && (b != c)) {
        max = a;
        if (a < b) {
            if (b > c)
                max = b;
            else
                max = c;
        }

        else {
            if (a < c)
                max = c;
        }
        printf("%d", max * 100);
    }

    if ((a == b) && (a == c))
        printf("%d", 10000 + (a * 1000));

    if ((a == b) && (a != c))
        printf("%d", 1000 + (a * 100));

    if ((a == c) && (a != b))
        printf("%d", 1000 + (a * 100));

    if ((b == c) && (b != a))
        printf("%d", 1000 + (b * 100));

    return 0;
}
