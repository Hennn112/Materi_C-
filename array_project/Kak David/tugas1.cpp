#include <iostream>
using namespace std;

int main(){
    string arr [1][5];

    for (int i = 0; i < 1; i++)
    {
        for (int a = 0; a < 5; a++)
        {
            cout <<"Masukkan Nama Siswa: ";
            cin >> arr [i][a];
        }
        
    }

    for (int j = 0; j < 1; j++)
    {
        for (int k = 0; k < 5; k++)
        {
            cout << arr [j][k];
            cout << endl;
        }
    }
    
    
}