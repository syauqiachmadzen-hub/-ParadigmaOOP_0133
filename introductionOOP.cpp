#include <iostream>
using namespace std;

class mahasiswa { //blue print atau cetakan
public:
    int nim;
    string nama;
    float nilai;
    
    void printData(
        cout << "NIM " << endl;
        cout << "NAMA " << endl;
        cout << "NILAI " << endl; 
    )
};

int main() {
    mahasiswa mhs; //object
    mhs.nim = 2022;
    mhs.nama = "abra";
    mhs.nilai = 90.5;

    mhs.printdata();
}