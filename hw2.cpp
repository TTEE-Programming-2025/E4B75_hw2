#include <stdio.h>
#include <stdlib.h>

void cleanScreen() { // Clean screen
    // system("cls"); // Windows
    system("clear");  // macOS / Linux
}

void multiplicationTable() { // Multiplication table generator
    int n;
    cleanScreen();
    while (1) {
        printf("Enter a number: ");
        scanf("%d", &n);
        if (n >= 1 && n <= 9) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    printf("%d*%d=%2d ", i, j, i * j);
                }
                printf("\n");
            }
            printf("\nEnter any key to return to main menu...");
            getchar(); // 吃掉換行
            getchar(); // 等待輸入
            cleanScreen();
            return;
        } else {
            printf("Warning: Enter again:\n");
        }
    }
}
