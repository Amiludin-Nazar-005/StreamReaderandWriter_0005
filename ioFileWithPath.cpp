#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;
    string namaFile;

    cout << "masukkan nama file : ";
    cin >> namaFile;

    ofstream outfile;

    outfile.open(namaFile + ".txt");
    cout << ">=menulis file, \'q\' untuk keluar" << endl;

    while (true)
    {
        cout << "_ ";
        // mendapatkan setiap karakter dalam satu garis
        getline(cin, baris);
        // loop akan berhenti jika anda masukkan karakter q
        if (baris == "q")
            break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }

    // selesai dalam menulis sekarang tutup file nya

    outfile.close();

    // operasi file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file untuk membuka
    infile.open(namaFile + ".txt");

    cout << endl
         << ">= membuka dan membaca file " << endl;
    // jika file ada maka
    if (infile.is_open())
    {
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan di sini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak menemukan file maka menampilkan ini
    else
        cout << "unable to open file ";
    return 0;
}
