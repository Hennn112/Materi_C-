#include <iostream>
using namespace std;

int main(){
    int kolom, baris;

    cout << "Masukkan Jumlah Kolom: ";
    cin>> kolom;
    cout<<"Masukkan Jumlah Baris:";
    cin >> baris;

    int arr [kolom][baris];
    for (int i = 0; i < kolom; i++)
    {
        for (int a = 0; a < baris; a++)
        {
            cout <<"Masukkan Data: ";
            cin >> arr [i][a];
        }
        
    }

    for (int j = 0; j < kolom; j++)
    {
        for (int k = 0; k < baris; k++)
        {
            cout << arr [j][k];
        }
        cout <<endl;
    }
    
    
}