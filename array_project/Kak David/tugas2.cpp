#include <iostream>
using namespace std;

int main(){
    int aarr, nom, num ;
    int arr [num][nom];

    cout <<"Masukkan jumlah kolom:";
    cin>>nom;
    cout <<"Masukkan jumlah baris:";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int a = 0; a < nom; a++)
        {
            cout<<"Masukkan data:";
            cin >> arr [i][a];
            aarr = aarr + arr [i][a];
        }  
    }

    cout << "Jumlahnya adalah = "<<aarr<<endl;
    
}