#include <iostream>
using namespace std;

class barang
{
public
    ;
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void tampilkanData()
    {
        cout << "Nama Barang : " << nama << endl;
        cout << "Jumlah      : " << Jumlah << endl;
        cout << "Kategori    : " << Kategori << endl;
        cout << "Tanggal Produksi : " << tanggalProduksi << endl;
    }
};
int main()
{
    barang elektronik;
    barang nonelektronik;

    elektronik.nama = "Laptop";
    elektronik.jumlah = 10;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2023-01-15";

    nonelektronik.nama = "Meja";
    nonelektronik.jumlah = 5;
    nonelektronik.kategori = "Non-Elektronik";
    nonelektronik.tanggalProduksi = "2023-02-20";

    elektronik.tampilkanData();
    nonelektronik.tampilkanData();
}