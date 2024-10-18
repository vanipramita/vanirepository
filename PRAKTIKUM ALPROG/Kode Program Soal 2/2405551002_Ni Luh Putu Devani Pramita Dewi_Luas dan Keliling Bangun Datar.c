#include <stdio.h>
#include <math.h>

// Fungsi untuk validasi input angka
int validasiinput() {
    int num;
    while (scanf("%d", &num) != 1) {
        printf("Invalid input\n ");
        printf("\n");
        printf("Tolong masukkan angka!: ");
        while (getchar() != '\n'); // membersihkan buffer
    }
    return num;
}

// Segitiga sembarang
void segitigasembarang() {
    int a, b, c;
    float s, luas, keliling;
    printf("Masukkan panjang sisi pertama: ");
    a = validasiinput();
    printf("Masukkan panjang sisi kedua: ");
    b = validasiinput();
    printf("Masukkan panjang sisi ketiga: ");
    c = validasiinput();
    
    keliling = a + b + c;
    s = keliling / 2; // setengah keliling untuk menghitung luas
    luas = sqrt(s * (s - a) * (s - b) * (s - c)); // Rumus Heron

    printf("Keliling: %.2f\n", keliling);
    printf("Luas: %.2f\n", luas);
}

// Belah ketupat
void belahketupat() {
    int d1, d2, s;
    float luas, keliling;
    printf("Masukkan panjang diagonal pertama: ");
    d1 = validasiinput();
    printf("Masukkan panjang diagonal kedua: ");
    d2 = validasiinput();
    printf("Masukkan panjang sisi: ");
    s = validasiinput();

    luas = (d1 * d2) / 2.0;
    keliling = 4 * s;

    printf("Keliling: %.2f\n", keliling);
    printf("Luas: %.2f\n", luas);
}

// Jajar Genjang
void jajargenjang() {
    int alas, tinggi, sisiMiring;
    float luas, keliling;
    printf("Masukkan panjang alas: ");
    alas = validasiinput();
    printf("Masukkan tinggi: ");
    tinggi = validasiinput();
    printf("Masukkan panjang sisi miring: ");
    sisiMiring = validasiinput();

    luas = alas * tinggi;
    keliling = 2 * (alas + sisiMiring);

    printf("Keliling: %.2f\n", keliling);
    printf("Luas: %.2f\n", luas);
}

// Trapesium
void trapesium() {
    int sisiAtas, sisiBawah, tinggi, sisiMiring1, sisiMiring2;
    float luas, keliling;
    printf("Masukkan panjang sisi atas: ");
    sisiAtas = validasiinput();
    printf("Masukkan panjang sisi bawah: ");
    sisiBawah = validasiinput();
    printf("Masukkan tinggi: ");
    tinggi = validasiinput();
    printf("Masukkan panjang sisi miring pertama: ");
    sisiMiring1 = validasiinput();
    printf("Masukkan panjang sisi miring kedua: ");
    sisiMiring2 = validasiinput();

    luas = ((sisiAtas + sisiBawah) * tinggi) / 2.0;
    keliling = sisiAtas + sisiBawah + sisiMiring1 + sisiMiring2;

    printf("Keliling: %.2f\n", keliling);
    printf("Luas: %.2f\n", luas);
}

// Lingkaran
void lingkaran() {
    int r;
    float luas, keliling;
    const float pi = 3.14159;
    printf("Masukkan jari-jari lingkaran: ");
    r = validasiinput();

    luas = pi * r * r;
    keliling = 2 * pi * r;

    printf("Keliling: %.2f\n", keliling);
    printf("Luas: %.2f\n", luas);
}

int main() {
    int pilihan;
    do {
        printf("\nPilih bangun datar untuk menghitung luas dan keliling:\n");
        printf("1. Segitiga Sembarang\n");
        printf("2. Belah Ketupat\n");
        printf("3. Jajar Genjang\n");
        printf("4. Trapesium\n");
        printf("5. Lingkaran\n");
        printf("6. Keluar\n");
        printf("Masukkan pilihan Anda: ");
        pilihan = validasiinput();

        switch (pilihan) {
            case 1:
                segitigasembarang();
                break;
            case 2:
                belahketupat();
                break;
            case 3:
                jajargenjang();
                break;
            case 4:
                trapesium();
                break;
            case 5:
                lingkaran();
                break;
            case 6:
                printf("Program berakhir.\n");
                break;
            default:
                printf("Pilihan tidak valid, silahkan coba lagi!.\n");
        }
    } while (pilihan != 6);

    return 0;
}
