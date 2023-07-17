#include <iostream>
#include <string>
using namespace std;

//isi disini
const int MAX_MAHASISWA;

int NIM (MAX_MAHASISWA);
string nama (MAX_MAHASISWA);
int tahunMasuk (MAX_MAHASISWA);

int jumlahMahasiswa = 0;

//isi disini
void tambahMahasiswa {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : " ;
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : " ;
		getline(cin, nama[jumlahMahasiswa]) ;
		cout << "Tahun Masuk: " ;
		cin >> tahunMasuk[jumlahMahasiswa] ;
		cin.ignore() ;
		jumlahMahasiswa++ ;
		cout << "Mahasiswa berhasil ditambahkan!" << endl ;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};

//isi disini
void tampilkanSemuaMahasiswa() {
	
}

//isi disini
void algorithmacariMahasiswaByNIM() {
	if 
}

//isi disini
void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			break;

		case 2:
			//isi disini
			break;

		case 3:
			//isi disini
			break;

		case 4:
			//isi disini
			break;

		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;

		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);

	return 0;
}//2. Algoritma Single Linked list//3. Algoritma Stack menggunakan susunan, Algoritma Queues menggunakan front dan rear//4. Algoritma Stack digunakan pada saat ingin membuat suatu coding menjadi susunan//5. B) 1. Salah 2. Salah 3. Benar