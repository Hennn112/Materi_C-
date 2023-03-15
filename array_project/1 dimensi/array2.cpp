#include <iostream>
using namespace std;

int main ()
{
    string nama [10];
    float total, rata2;
    int i,j, max_nom, min_nom;
    int nilai [10];

    cout << "Berapa jumlah yang akan diinput? ";
    cin >> j;

    for (i=0;i<j;i++){
        cout << "Masukkan nama ke-"<<i+1<<" : ";
        cin >> nama[i] ;
        cout <<"Masukkan nilai ke-"<<i+1<<" = ";
        cin >> nilai[i];
    }
    cout << "\ncetak" <<endl;
    cout << "Daftar Nilai Matematika \nPPLG X-1 \nSMK Wikrama Bogor \n===================================\nNo.    Nama            Nilai"<<endl;
    for (i=0;i<j;i++){
        cout <<i+1<<".     " <<nama[i]<<"\t\t" <<nilai[i]<<endl;
    }
    cout<<"==================================="<<endl;

    for (i=0;i<j;i++){
        if (nilai[i] > max_nom)       
        {
        max_nom = nilai[i];
        }
    }

    for (i=0;i<j;i++)
    {
        if (nilai[i] < min_nom)
        {
        min_nom = nilai[i];
        }
    }
    

    total = 0;
  for(i = 0; i < j; i++){
    total = total+nilai[i];
  }
 
  
  rata2 = (total/j);
  
cout<<"Nilai Terbesar: "<<max_nom<<endl;
cout<<"Nilai Terkecil: "<<min_nom<<endl;
cout << "Nilai rata-rata dari "<< j <<
          " inputan nilai adalah: " << rata2<<endl;
 
  cout << endl;
  return 0;

}