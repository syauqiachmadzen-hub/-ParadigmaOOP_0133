#include <iostream>
using namespace std;

class barang{
    public:
        string name;
        int jumlah;
        string kategori;
        string tanggalproduksi;

        void tampilspek(){
            cout << "nama barang " << nama << endl;
            cout << "jumlah barang " << jumlah << endl;
            cout << "kategori " << kategori << endl;
            cout << "tanggal produksi" << tanggal produksi << endl;
        }
};

int main() {
    barang elektronik;
    nonElektronik;

    elektronik.nama = "Lapptop";
    elektronik.jumlah = 1;
    elektronik.kategori = "elektronik";
    elektronik.tanggalproduksi = "1945-08-07";

    nonElektronik.nama = "supersemar";
    nonElektronik.jumlah = 1;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "1970-03-11";
    nonElektronik.tampilSpek();
}