#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    ofstream outfile;

    outfile.open("contoh file.txt");
    cout << ">=menulis file, \'q\' untuk keluar" << endl;

    while (true)
    {
        cout << "_ ";
        // mendapatkan setiap karakter dalam satu garis
        getline(cin, baris);
        // loop akan berhenti jika anda masukkan karakter q
        if (baris == "q")break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }

    // selesai dalam menulis sekarang tutup file nya

    outfile.close();


}
