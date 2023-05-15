#include <stdio.h>
// 1. �dev lineer arama 
int lineer_arama(int dizi[], int boyut, int hedef) { // Lineer arama yap�cak olan fonksiyon.
    int i;
    for (i = 0; i < boyut; i++) {
        if (dizi[i] == hedef) {
            return 1;  // Aranan eleman bulundu
        }
    }
    return 0;  // Aranan eleman bulunamad�
}

int main() {
    int boyut, hedef;

    // Dizinin boyutunu kullan�c�dan al�yoruz
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &boyut);
    
    int dizi[boyut];

    // Dizi elemanlar�n� kullan�c�dan al�yoruz
    int i;
    for (i = 0; i < boyut; i++) {
        printf("%d. elemani girin: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // Aranacak eleman� kullan�c�dan al�yoruz
    printf("Aranacak elemani girin: ");
    scanf("%d", &hedef);

    // Lineer arama algoritmas�n� kullanarak aranan eleman� kontrol etti�imiz yer.
    if (lineer_arama(dizi, boyut, hedef)) {
        printf("Aranan eleman dizide bulunuyor.\n");
    } else {
        printf("Aranan eleman dizide bulunmuyor.\n");
    }

    return 0;
}

