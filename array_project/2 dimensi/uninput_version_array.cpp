#include <iostream>
using namespace std;

int main (){
int jumlah, array[3][5]={{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15}};

    for (int i = 0; i < 3; i++)
    {
        for (int a = 0; a < 5; a++)
        {
            cout<<array[i][a];
            jumlah = jumlah + array [i][a];
        }
        cout<< endl;
        
    }
    cout<<"Hasil semua ditambah:"<<jumlah<<endl;
    
}