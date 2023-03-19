#include<stdio.h>
#include<string.h>

//Fungsi untuk menambahkan buku ke perpustakaan
void tambahBuku(int kode, char judul[], char pengarang[], char penerbit[], int tahun) {
    //Kode untuk menambahkan buku ke database
    printf("Buku telah ditambahkan ke perpustakaan.\n");
}

//Fungsi untuk menambahkan data mahasiswa ke database
void tambahMahasiswa(int nim, char nama[], char jurusan[], int angkatan) {
    //Kode untuk menambahkan data mahasiswa ke database
    printf("Data mahasiswa telah ditambahkan ke perpustakaan.\n");
}

//Fungsi untuk meminjam buku
void pinjamBuku(int kode, int nim) {
    //Kode untuk meminjam buku dari database
    printf("Buku telah dipinjam oleh mahasiswa dengan NIM %d.\n", nim);
}

//Fungsi untuk mengembalikan buku
void kembaliBuku(int kode, int nim) {
    //Kode untuk mengembalikan buku ke database
    printf("Buku telah dikembalikan oleh mahasiswa dengan NIM %d.\n", nim);
}

//Fungsi untuk menampilkan jenis-jenis buku
void tampilkanJenisBuku() {
    printf("1. Buku pelajaran\n");
    printf("2. Buku fiksi\n");
    printf("3. Buku non-fiksi\n");
}

int main() {
    int kodeBuku, tahun, nim, angkatan;
    char judul[50], pengarang[50], penerbit[50], nama[50], jurusan[50];
    int pilihan;
    
    do {
        printf("===== Sistem Perpustakaan =====\n");
        printf("1. Entry buku\n");
        printf("2. Data mahasiswa\n");
        printf("3. Peminjaman buku\n");
        printf("4. Jenis buku\n");
        printf("5. Pengembalian buku\n");
        printf("6. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &pilihan);
        
        switch(pilihan) {
            case 1:
                printf("Masukkan kode buku: ");
                scanf("%d", &kodeBuku);
                printf("Masukkan judul buku: ");
                scanf("%s", judul);
                printf("Masukkan pengarang buku: ");
                scanf("%s", pengarang);
                printf("Masukkan penerbit buku: ");
                scanf("%s", penerbit);
                printf("Masukkan tahun terbit buku: ");
                scanf("%d", &tahun);
                tambahBuku(kodeBuku, judul, pengarang, penerbit, tahun);
                break;
            case 2:
                printf("Masukkan NIM mahasiswa: ");
                scanf("%d", &nim);
                printf("Masukkan nama mahasiswa: ");
                scanf("%s", nama);
                printf("Masukkan jurusan mahasiswa: ");
                scanf("%s", jurusan);
                printf("Masukkan angkatan mahasiswa: ");
                scanf("%d", &angkatan);
                tambahMahasiswa(nim, nama, jurusan, angkatan);
            break;
        case 3:
            printf("Masukkan kode buku yang ingin dipinjam: ");
            scanf("%d", &kodeBuku);
            printf("Masukkan NIM mahasiswa yang ingin meminjam: ");
            scanf("%d", &nim);
            pinjamBuku(kodeBuku, nim);
            break;
        case 4:
            printf("Jenis buku yang tersedia:\n");
            tampilkanJenisBuku();
            break;
        case 5:
            printf("Masukkan kode buku yang ingin dikembalikan: ");
            scanf("%d", &kodeBuku);
            printf("Masukkan NIM mahasiswa yang ingin mengembalikan: ");
            scanf("%d", &nim);
            kembaliBuku(kodeBuku, nim);
            break;
        case 6:
            printf("Terima kasih telah menggunakan sistem perpustakaan.\n");
            break;
        default:
            printf("Pilihan tidak valid. Silakan coba lagi.\n");
    }
} while(pilihan != 6);

return 0;

}
