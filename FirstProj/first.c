#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10;

int main(void) {
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) i++;
        if (i % 3 == 0) i = i + 2;
        printf("%d ", i);
    }
}

