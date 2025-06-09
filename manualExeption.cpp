#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "selamat belajar di prodi ti umy" << endl;
        throw 0.5; // melemparkan sebuah interger maka
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }

    catch (int a)
    {
        // blok ini akan di eksekusi
        cout << "pengecualian akan dieksekusi" << endl;
    }
}