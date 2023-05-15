#include <stdio.h>
// 1. Ödev lineer arama 
int lineer_arama(int dizi[], int boyut, int hedef) { // Lineer arama yapýcak olan fonksiyon.
    int i;
    for (i = 0; i < boyut; i++) {
        if (dizi[i] == hedef) {
            return 1;  // Aranan eleman bulundu
        }
    }
    return 0;  // Aranan eleman bulunamadý
}

int main() {
    int boyut, hedef;

    // Dizinin boyutunu kullanýcýdan alýyoruz
    printf("Dizinin boyutunu girin: ");
    scanf("%d", &boyut);
    
    int dizi[boyut];

    // Dizi elemanlarýný kullanýcýdan alýyoruz
    int i;
    for (i = 0; i < boyut; i++) {
        printf("%d. elemani girin: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    // Aranacak elemaný kullanýcýdan alýyoruz
    printf("Aranacak elemani girin: ");
    scanf("%d", &hedef);

    // Lineer arama algoritmasýný kullanarak aranan elemaný kontrol ettiðimiz yer.
    if (lineer_arama(dizi, boyut, hedef)) {
        printf("Aranan eleman dizide bulunuyor.\n");
    } else {
        printf("Aranan eleman dizide bulunmuyor.\n");
    }

    return 0;
}

