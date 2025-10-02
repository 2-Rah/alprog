#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[1000];
    char kata[300][71];
    int sudahDipakai[300] = {0};
    int jumlahKata = 0;

    fgets(kalimat, sizeof(kalimat), stdin);
    kalimat[strcspn(kalimat, "\n")] = '\0';

    char *potongan = strtok(kalimat, " ");
    while (potongan != NULL) {
        strcpy(kata[jumlahKata], potongan);
        jumlahKata++;
        potongan = strtok(NULL, " ");
    }

    for (int i = 0; i < jumlahKata; i++) {
        if (sudahDipakai[i]) continue;

        printf("%s", kata[i]);
        int adaLagi = 0;
        for (int k = i + 1; k < jumlahKata; k++) {
            if (!sudahDipakai[k]) {
                adaLagi = 1;
                break;
            }
        }
        if (adaLagi) printf(" ");

        for (int j = i + 1; j < jumlahKata; j++) {
            if (strcmp(kata[i], kata[j]) == 0) {
                sudahDipakai[j] = 1;
            }
        }
    }

    return 0;
}
