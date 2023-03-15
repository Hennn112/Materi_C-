#include <iostream>
using namespace std;

int main (){
    int isi, isi2, jumlah;
    int tutor [5][3]={{1, 2, 3},
                    {1,2,3},
                    {1,2,3},
                    {1,2,3},
                    {1,2,3}};

    int tutor2 [2][2]={{2,2},
                    {2,2}};
    cout << "Ini adalah isi array ke-1"<<endl;
        for (int e = 0; e < 5; e++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << tutor[e][z] << " | ";
                isi = isi + tutor[e][z];
            }
            cout << endl;
        }
        cout << "\nIni adalah isi array ke-2"<<endl;
        for (int i = 0; i < 2; i++)
        {
            for (int o = 0; o < 2; o++)
            {
                cout << tutor2[i][o] << " | ";
                isi2 = isi2 + tutor2[i][o];
            }
            cout << endl;
        }
        cout<<"Hasil dari array 1 ditambah array 2 adalah \n"<< isi + isi2<<endl;
        
}