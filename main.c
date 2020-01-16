#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Turkish");
    char cumle[10000];
    int i;
    printf("Yazı giriniz: ");
    gets(cumle);
    for (i = 0; cumle[i] != '\0'; i++) {
        if (i == 0 && cumle[i] != ' ') {
            if (cumle[i] >= 97 && cumle[i] <= 122) {
                cumle[i] = cumle[i] - 32;
            }
        } else if (cumle[i - 1] == ' ' && cumle[i] != ' ') {
            if (cumle[i] >= 97 && cumle[i] <= 122) {
                cumle[i] = cumle[i] - 32;
            }
        }
    }
    puts(cumle);
    return 0;
}
