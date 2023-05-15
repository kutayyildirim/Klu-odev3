#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10 // Kuyruk de�i�keni sabit bir boyutta kullanamayaca�� i�in define komutuyla BOYUT de�ikenini tan�mlad�m
// 4. �dev Kuyruk Yap�s�
int kuyruk[BOYUT];
int bas = -1, son = -1;//bas de�i�keni kuyru�un ba��ndaki eleman�n indisini tutar.son de�i�keni kuyru�un sonundaki eleman�n indisini tutar. Ba�lang��ta kuyruk bo� oldu�u i�in -1 de�eriyle ba�lat�l�r.

void ekle(int sayi) { // Say� eklemek i�in kullan�lan fonksiyon
    if (son == BOYUT - 1) {
        printf("Kuyruk dolu.\n");
    } else {
        if (bas == -1) {
            bas = 0;
        }
        son++;
        kuyruk[son] = sayi;
        printf("%d kuyru�a eklendi.\n", sayi);
    }
}

void sil() { // Say� silmek i�in kullan�lan fonksiyon
    if (bas == -1 || bas > son) {
        printf("Kuyruk bos.\n");
    } else {
        printf("%d kuyruktan silindi.\n", kuyruk[bas]);
        bas++;
    }
}

void goruntule() { // G�r�nt�lemek i�in kullan�lan fonksiyon
    if (bas == -1 || bas > son) {
        printf("Kuyruk bos.\n");
    } else {
        printf("Kuyruk elemanlar�: ");
        int i;
        for (i = bas; i <= son; i++) {
            printf("%d ", kuyruk[i]);
        }
        printf("\n");
    }
}

int main() {
    int secim, sayi;
    do {
        printf("\nKuyruk uygulamasi");
        printf("\n1-Ekleme\n2-Silme\n3-Goruntuleme\n4-Cikis\nSecim yapiniz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Eklenecek sayi: ");
                scanf("%d", &sayi);
                ekle(sayi);
                break;
            case 2:
                sil();
                break;
            case 3:
                goruntule();
                break;
            case 4:
                printf("Program sonlandirildi.\n");
                break;
            default:
                printf("Gecersiz secim.\n");
        }
    } while (secim != 4);

    return 0;
}

