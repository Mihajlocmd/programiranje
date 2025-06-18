#include <stdio.h>

int main() {
    FILE *f = fopen("mihajlo.dat", "wb"); 
    if (f == NULL) {
        printf("greska!\n");
        return 1;
    }

    int broj = 123;
    fwrite(&broj, sizeof(int), 1, f);  

    fclose(f);
    return 0;
}