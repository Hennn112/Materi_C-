#include <iostream>
using namespace std;

int main (){
    int input, jumlah;
    int angka[input];

    cout <<"masukkan jumlah elemen: ";
    cin >> input;

    for (int a = 0; a < input; a++){
        cout << "masukkan angka: ";
        cin >> angka[a];
    }
    for (int a = 0; a < input; a++){
        jumlah = jumlah + angka [a]; 
    }
    cout << "hasilnya adalah "<< jumlah <<endl;


    
    return 0;
}