#include <stdio.h>
#include <string.h>
#include <unistd.h> // sleep ve usleep için

void kaydir(char *metin) {
    int len = strlen(metin);
    char ilk = metin[0];

    // Metni sola kaydır
    for (int i = 0; i < len - 1; i++) {
        metin[i] = metin[i + 1];
    }

    metin[len - 1] = ilk;
}

int main() {
    char yazi[] = "Merhaba, bu kayan bir yazidir! ";
    
    while (1) {
        printf("\r%s", yazi);      // Satır başına dön ve yazıyı yaz
        fflush(stdout);           // Anında ekrana bas
        sleep(1);                 // 1 saniye bekle
        kaydir(yazi);            // Yazıyı bir harf sola kaydır
    }

    return 0;
}
