#include <iostream>
using namespace std;

int main()
{

    char c1, c2, c3;
    cout << "Masukkan Karakter : ";
    // Membaca karakter

    cin >> c1;
    cout << " Anda Telah memasukkan karakter : " << c1 << endl;
    cout << " Masukkan dua karakter : ";
    cin >> c2 >> c3;
    cout << " Kode ASCII untuk '" << c2 << "' dan '" << c3 << "'adalah " << (int)c2 << " dan " << (int)c3 << endl;
    return 0;
}
