#include <iostream>
using namespace std;

int main ()
{
    int angka = 90;
    int nilai;
    cout << "Masukkan Nilai Anda: ";
    cin >> nilai;

    if (nilai >= 90 && nilai <= 100 )
    {
        cout << "SELAMAT ANDA TERBAIK" <<endl;
    }
    else if(nilai < angka && nilai >= 75)
    {
        cout << "Anda Cukup" <<endl;
    }
    else if(nilai > 100)
    {
        cout << "ERROR nilai tidak melebihi 100" <<endl;
    }
    else if(nilai < 75 && nilai >= 60)
    {
        cout << "Anda Kurang Cukup" <<endl;
    }
    else if(nilai < 0)
    {
        cout << "ERROR nilai tidak kurang dari 0" <<endl;
    }
    else
    {
        cout << "Anda Harus Segera Perbaikan" <<endl;
    }

    return 0;
}