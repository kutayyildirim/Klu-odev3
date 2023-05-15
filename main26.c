#include <stdio.h>
// 2. Ödev Verilen Dizide Binary Search Kullanarak Eleman Bulmak.
int binarySearch(int dizi[], int elemanSayisi, int aranan) {
    int baslangic = 0;
    int bitis = elemanSayisi - 1;
  
    while (baslangic <= bitis) {
        int orta = baslangic + (bitis - baslangic) / 2;

        if (dizi[orta] == aranan)
            return orta;

        if (dizi[orta] < aranan)
            baslangic = orta + 1;
        else
            bitis = orta - 1;
    }

    return -1;
}

void bubbleSort(int dizi[], int elemanSayisi) {// Sýralama yapmak için bubbleSort sýralama algoritmasý kullanýlmýþtýr.
    int i, j;
    for (i = 0; i < elemanSayisi - 1; i++) {
        for (j = 0; j < elemanSayisi - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                int temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

int main() {
    int dizi[] = {4, 8, 3, 84, 47, 76, 9, 24, 68};
    int elemanSayisi = sizeof(dizi) / sizeof(dizi[0]);

    bubbleSort(dizi, elemanSayisi);// Dizi þuanda sýralanmýþ durumda dizi[3, 4, 8, 9, 24, 47, 68, 84] þeklinde ve indeks sýrasý bu diziye göre baz alýnmýþtýr.

    int aranan;
    printf("Aranacak elemani giriniz: ");
    scanf("%d", &aranan);

    int sonuc = binarySearch(dizi, elemanSayisi, aranan);

    if (sonuc == -1)
        printf("Aranan eleman bulunamadi.\n");
    else
        printf("Aranan eleman dizinin %d. indeksinde bulundu.\n", sonuc);

    return 0;
}

