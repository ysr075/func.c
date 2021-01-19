#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int seconds) {
    int milli_seconds = 1000 * seconds;
    clock_t start_time = clock();
    while(clock() < start_time + milli_seconds);
}

int main() {
    int choose;
    do {
        char LED_on[] = "\nLED on\n";
        char LED_off[] = "\nLED off\n";
        printf("\n1.and / 2.or / 3.not: ");
        scanf("%d", &choose);
        if (choose == 1) {
            int IF1; int IF2;
            printf("\nIF1: ");
            scanf("%d", &IF1);
            printf("IF2: ");
            scanf("%d", &IF2);
            if (IF1 == 1 && IF2 == 1) {
                printf(LED_on);
            } else {
                printf(LED_off);
            }
        } else if (choose == 2) {
            int IF1; int IF2;
            printf("\nIF1: ");
            scanf("%d", &IF1);
            printf("IF2: ");
            scanf("%d", &IF2);
            if (IF1 == 1 || IF2 == 1) {
                printf(LED_on);
            } else if (IF1 == 0 || IF2 == 0) {
                printf(LED_off);
            }
        } else if (choose == 3) {
            int IF1; int IF2;
            printf("\nIF1: ");
            scanf("%d", &IF1);
            if (IF1 == 1) {
                printf(LED_off);
            } else if (IF1 == 0) {
                printf(LED_on);
            }
        } else {
            delay(1);
            exit(0);
        }
    } while(choose == choose);
    return 0;
}
