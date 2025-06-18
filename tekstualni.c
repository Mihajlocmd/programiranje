#include <stdio.h>

int main() {
    FILE *f = fopen("mihajlo.txt", "w");  
    if (f == NULL) {
        printf("greska\n");
        return 1;
    }

    fprintf(f, "tekstualni fajl\n");
    fprintf(f, "Broj: %d\n", 42);

    fclose(f); 
    return 0;
}
