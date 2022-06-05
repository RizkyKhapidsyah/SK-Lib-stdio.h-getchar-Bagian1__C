#include <stdio.h>
#include <conio.h>

/*
    Source by CPlusPlus (https://www.cplusplus.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    int c;

    puts("Masukkan teks. Include sebuah titik ('.') di dalam kalimat untuk keluar :");

    do {
        c = getchar();
        putchar(c);
    } while (c != '.');

    _getch();
    return 0;
}