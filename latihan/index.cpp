#include <iostream>
using namespace std;

int main()
{
    string nama;
    int umursaya;
    int umurteman;
    int umurkaka;


    cout << "Masukkan Nama:";
    
    cin >> nama;

    cout << "Hallo " << nama << " umur kamu berapa? "<<endl;

    cout << "Masukkan Umur Kamu:";

    cin >> umursaya;

    cout << "idaman umur " << umursaya << " mah" <<endl;

    cout << "Masukkan umur teman kamu:";

    cin >> umurteman;

    cout << "Masukkan umur om David:";

    cin >> umurkaka;

    cout << "jika umur kamu dikali umur teman kamu lalu ditambah umur om David hasilnya adalah " << umursaya * umurteman + umurkaka <<endl;


}