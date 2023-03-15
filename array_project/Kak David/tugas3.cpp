#include  <iostream>
using namespace std;

int main (){
    int jumlah, nis, nilai, rapot;
    string rayon, nama;
    string tot[jumlah];

    cout<<"Tentukan berapa siswa yang akan diinput:";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++)
    {
        cout << "Masukkan Nama ke "<<i+1<<":";
        cin >> nama ;
        cout <<"Masukkan Nis:";
        cin >> nis ;
        cout<<"Masukkan Rayon:";
        cin>> rayon ;
        cout<<"Tentukan nilai dpk:";
        cin >> rapot ;
        cout <<"======================================\n";
    }

    for (int a = 0; a < jumlah; a++)
    {
        cout << "Nama ke "<<a<<":"<< nama<<endl;
        cout<<"nis siswa ke: "<<nis<<endl;
        cout<<"Rayon siswa ke: "<<rayon<<endl;
        cout<<"Nilai dpk siswa ke:"<<rapot<<"\n===================================\n";

    }
}