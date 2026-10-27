#include <stdio.h>

int main() {
    int n, i, sum, max, niit;
    int shildegonoo1 = -1, shildegonoo2 = -1, shildegonoo3 = -1;
    char ner[30];
    char shildegner1[30] = "-", shildegner2[30] = "-", shildegner3[30] = "-";
    const char *angilal;
    do {
        printf("Harvaachiin too (5-10): ");
        scanf("%d", &n);
        if (n < 5 || n > 10) {
            printf("Harvaachdiin toog 5-10 hoorond oruulah ystoi shu.\n");
        }
    } while (n < 5 || n > 10);
    printf("\n%-4s %-10s %6s  %s\n", "No.", "Ner", "Niit", "Angilal");
    for (i = 1; i <= n; i++) {
        printf("\nHarvaachiin ner: ");
        scanf("%29s", ner);
        niit = 0;
        for (sum = 1; sum <= 4; sum++) {
            do {
                printf("sumnii onoo (0-10):  ");
                scanf("%d", &max);
                if (max < 0 || max > 10) {
                    printf("Bolomjgui\n");
                }
            } while (max < 0 || max > 10);
            niit = niit + max;
        }
        printf("%-4d %-10s %6d   ", i, ner, niit);
        switch (niit / 10) {
            case 4: printf("Mash sain\n");
            break;
            case 3: printf("Sain\n");
            break;
            case 2: printf ("Dund\n");
            break;
            default: printf("Muu\n");
            break;
        }
        if (niit > shildegonoo1) {
            shildegonoo3 = shildegonoo2; sprintf(shildegner3, "%s", shildegner2);
            shildegonoo2 = shildegonoo1; sprintf(shildegner2, "%s", shildegner1);
            shildegonoo1 = niit;         sprintf(shildegner1, "%s", ner);
        } else if (niit > shildegonoo2) {
            shildegonoo3 = shildegonoo2; sprintf(shildegner3, "%s", shildegner2);
            shildegonoo2 = niit;         sprintf(shildegner2, "%s", ner);
        } else if (niit > shildegonoo3) {
            shildegonoo3 = niit;         sprintf(shildegner3, "%s", ner);
        }
    }    
    printf("SHILDEG HARVAACH 1: %-10s %3d\n", shildegner1, shildegonoo1);
    printf("SHILDEG HARVAACH 2: %-10s %3d\n", shildegner2, shildegonoo2);
    printf("SHILDEG HARVAACH 3: %-10s %3d\n", shildegner3, shildegonoo3);
    return 0;
}