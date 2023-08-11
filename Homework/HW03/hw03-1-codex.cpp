//TODO: #8 Arrange this C coding into CODEX pattern.
#include <stdio.h>
#include <conio.h> // This header is specific to Windows and may not be available on all systems.

int main() {
    int a = 10;
    int b = 20, c = 30, d = 40;

    printf("This is %d + %d = %d ", a, b, a + b);
    
    for (int i = 0; i < d - 30; i++) {
        if (i < 30) {
            printf("Here");
        } else if (i == 8) {
            printf("This is 8.");
        } else {
            printf("ok");
        }
    }

    return 0;
}