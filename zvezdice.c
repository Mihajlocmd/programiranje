#include <stdio.h>

int main() {
    FILE *f = fopen("mihajlo.txt", "w");
    if (f == NULL) return 1;

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) fprintf(f, " ");
        for (int j = 0; j < n - i; j++) fprintf(f, "*");
        fprintf(f, "\n");
    }

    fclose(f);
    return 0;
}


