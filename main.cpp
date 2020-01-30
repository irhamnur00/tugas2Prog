#include <iostream>

using namespace std;

/*
Penjelasan Semua Variabel
1. opsiCalc -> untuk menyimpan pilhan kalkulator yang ingin digunakan oleh user
2. bil1 -> bilangan pertama yang akan dioperasikan
3. bil2 -> bilangan kedua yang akan dioperasikan
4. opsiOpr -> pilihan operator yang dipilih
5. hasil -> untuk menyimpan hasil operasi
*/
int opsiCalc, bil1, bil2, opsiOpr, hasil;
int main()
{
    cout << "Aplikasi Kalkulator Sederhana dan Penghitung Turunan Polinom \n \n";
    cout << "Pilihan Kalkulator: \n";
    cout << "1. Kalkulator Sederhana\n";
    cout << "2. Kalkulator Turunan Polinom\n";
    cout << "Masukkan pilihan kalkulator yang di inginkan: ";
    cin >> opsiCalc;

    if (opsiCalc == 1) {
        cout << "Kalkulator Sederhana: Penjumlahan, Pengurangan," << endl;
        cout << "                      dan Perkalian \n \n";

        //input 2 bilangan
        cout << "Masukkan Bilangan pertama: ";
        cin >> bil1;
        cout << "Masukkan Bilangan kedua: ";
        cin >> bil2;

        //tampilan pilihan operasi
        cout << "Pilihan operasi: \n";
        cout << "1. Penjumlahan (+) \n";
        cout << "2. Pengurangan (-) \n";
        cout << "3. Perkalian (x) \n";
        cout << "Masukkan pilihan operasi (1-3): ";
        cin >> opsiOpr;
        cout << endl;

        //switch case untuk operasi kedua bilangan
        switch(opsiOpr){
        case 1:
            hasil = bil1 + bil2;
            break;
        case 2:
            hasil = bil1 - bil2;
            break;
        case 3:
            hasil = bil1 * bil2;
            break;
        default:
            cout << "pilih pilihan 1-3 saja!";
        }

        cout << "hasilnya adalah " << hasil << endl;
        return 0;
    }

    //Masukkan code untuk kalkulator turunan polinom
    else if (opsiCalc == 2){
        return 0;
    }
    else{
        cout << "opsi salah!";
        return 0;
    }
}
