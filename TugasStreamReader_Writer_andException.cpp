#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <exception>

using namespace std;

// Struktur data untuk mempermudah manajemen barang di file/gudang
struct Barang {
    string id;
    string nama;
    string harga;
};

class TokoElektronik {
private:
    // 1. Atribut Private: array berkapasitas 3 elemen (Enkapsulasi)
    array<string, 3> etalase;

public:
    // Constructor: Mengisi data awal ke etalase secara otomatis
    TokoElektronik() {
        etalase = {"Laptop Asus", "Smartphone Samsung", "Smart TV LG"};
    }

    // Method Public untuk mengambil produk berdasarkan nomorRak
    string ambilProduk(size_t nomorRak) {
        try {
            // Menggunakan .at() sesuai ketentuan untuk memicu out_of_range jika indeks ngawur
            return etalase.at(nomorRak);
        }
        catch (const out_of_range& e) {
            // 2. Melemparkan kembali (throw) pesan error kustom jika melewati batas
            throw string("Gagal Mengambil Barang : Rak nomor " + to_string(nomorRak) + " kosong atau tidak tersedia!");
        }
    }
};