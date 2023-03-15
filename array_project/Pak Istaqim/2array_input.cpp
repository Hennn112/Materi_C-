#include <iostream>
using namespace std;

int main () 
{
    int baris, kolom, pilih;
    string lanjut, ulang;
  
do
{


    cout<<"Masukkan jumlah baris:";
    cin >> baris;

    cout <<"Masukkan jumlah Kolom:";
    cin >> kolom;
    cout <<"\n";

    int array [baris][kolom];
    int larik [baris][kolom];

    for (int i = 0; i < baris; i++)
    {
        for (int a = 0; a < kolom; a++)
        {
            cout <<"Masukkan data array :";
            cin >> array[i][a];
        }
    }
    cout <<"<==================================>"<<endl;
    for (int d = 0; d < baris; d++)
    {
        for (int c = 0; c < kolom; c++)
        {
            cout <<"Masukkan data Larik :";
            cin >> larik[d][c];
        }
    }
    cout <<""<<endl;
    cout << "Ini adalah data array:"<<endl;
    for (int f = 0; f < baris; f++)
    {
        for (int g = 0; g < kolom; g++)
        {
            cout <<"| " << array[f][g] <<" |";
        }
        cout <<"\n";
    }
    
    cout << "\nIni adalah data Larik:"<<endl;
    for (int y = 0; y < baris; y++)
    {
        for (int z = 0; z < kolom; z++)
        {
            cout <<"| " << larik[y][z] << " |";
        }
        cout <<"\n";
    }
 do
 {
        
    
    cout<<"\n=====>Operator Bilangan Yang Tersedia<====="<<endl;
    cout<<"(1).Penjumlahan\n"<<"(2).Pengurangan\n"<<"(3).Perkalian\n"<<"(4).Pembagian\n"<<"(5).Modulus"<<endl;
    cout <<"Silahkan pilih Operator Bilangan:";
    cin >> pilih;
    cout <<endl;


    if (pilih == 1)
    {
        cout <<"=====>Hasil dari Operator Penjumlahan<====="<<endl;
        cout<< " "<<endl;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout<<"| "<<array [i][j] + larik [i][j] << " |";

            }
            cout <<endl;   
        }
    }

    else if (pilih == 2)
    {
        cout <<"=====>Hasil dari Operator Pengurangan<====="<<endl;
        cout<< " "<<endl;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout<<"| "<<array [i][j] - larik [i][j] << " |";

            }
            cout <<endl;   
        }
        
    }
    else if (pilih == 3)
    {
        cout <<"=====>Hasil dari Operator Perkalian<====="<<endl;
        cout<< ""<<endl;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout<<"| "<<array [i][j] * larik [i][j] << " |";

            }
            cout <<endl;   
        }
    }
    else if (pilih == 4)
    {
        cout <<"=====>Hasil dari Operator Pembagian<====="<<endl;
        cout<< ""<<endl;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                cout<<"| "<<array [i][j] / larik [i][j] << " |";

            }
            cout <<endl;   
        }
    }
    else if (pilih == 5)
    {
        cout <<"=====>Hasil dari Operator Modulus<====="<<endl;
        cout<< ""<<endl;
        for (int i = 0; i < baris; i++)
        {
            for (int j = 0; j < kolom; j++)
            {
                if (larik [i][j] !=2)
                {
                  cout<<"| Error |";  
                }
                else if (array[i][j] % larik[i][j] == 0)
                {
                    cout<< "| Genap |";
                }
                else if (array[i][j] % larik[i][j] == 1)
                {
                    cout<< "| Ganjil |";
                }
                
            }
            cout <<endl;   
        }
    }
    else {
        cout << "Operator Bilangan Tidak Tersedia."<<endl; 
        cout << "Ingin Memilih Ulang Operator: <y/n>"<<endl;
        cin >> ulang;
    }
}
    while (ulang == "y"); 
    
    cout <<"Ulangi Program: <yes/no>"<<endl;
    cin >> lanjut;
}
while (lanjut == "yes");
    
    cout << "Program Selesai"<<endl;
     
}