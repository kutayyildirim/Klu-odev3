#include <stdio.h>
#include <stdlib.h>
#define BOYUT 10 // Kuyruk deðiþkeni sabit bir boyutta kullanamayacaðý için define komutuyla BOYUT deðikenini tanýmladým
// 4. Ödev Kuyruk Yapýsý
int kuyruk[BOYUT];
int bas = -1, son = -1;//bas deðiþkeni kuyruðun baþýndaki elemanýn indisini tutar.son deðiþkeni kuyruðun sonundaki elemanýn indisini tutar. Baþlangýçta kuyruk boþ olduðu için -1 deðeriyle baþlatýlýr.

void ekle(int sayi) { // Sayý eklemek için kullanýlan fonksiyon
    if (son == BOYUT - 1) {
        printf("Kuyruk dolu.\n");
    } else {
        if (bas == -1) {
            bas = 0;
        }
        son++;
        kuyruk[son] = sayi;
        printf("%d kuyruða eklendi.\n", sayi);
    }
}

void sil() { // Sayý silmek için kullanýlan fonksiyon
    if (bas == -1 || bas > son) {
        printf("Kuyruk bos.\n");
    } else {
        printf("%d kuyruktan silindi.\n", kuyruk[bas]);
        bas++;
    }
}

void goruntule() { // Görüntülemek için kullanýlan fonksiyon
    if (bas == -1 || bas > son) {
        printf("Kuyruk bos.\n");
    } else {
        printf("Kuyruk elemanlarý: ");
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

