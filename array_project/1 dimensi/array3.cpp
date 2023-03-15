#include <iostream>

using namespace std;

int main()
{
    int i,j,min_num,max_num;
    int nilai[10];
    string nama[10];
    float total, rata2;
    cout<<"Berapa Jumlah elemen yang ingin diisi? ";
    cin>> j;

    for (i=0;i<j;i++)
    {
        cout<<"Masukkan Nama Siswa ke-" <<i+1<<" = ";
        cin>>nama[i];
        cout << "Masukkan nilai Ke-"<<i+1<<" = ";
        cin >>nilai[i];

    }
    cout<< "\n"<< endl;

     cout<<"Daftar Nilai Matematika"<<endl;
        cout<<"PPLG X-1"<<endl;
        cout<<"SMK WIKRAMA Bogor"<<endl;
        cout<<"===================================================================="<<endl;
        cout<<"No."<<"               "<<"Nama"<<"               "<<"Nilai"<<endl;
        cout<<"===================================================================="<<endl;

    for (i=0;i<j;i++)
    {
       

        cout <<i+1<<"                "<< nama [i]<<"                 "<< nilai [i]<<endl;
        
    }

     cout<<"===================================================================="<<endl;
    for (i=0;i<j;i++)
    {
        if(nilai[i] > max_num){
            max_num = nilai[i];
        }

    
    }

    for (i=0;i<j;i++)
    {
    if(nilai[i]<min_num){
            min_num=nilai[i];
        }
    }

    
    total = 0;
  for(i = 0; i < j; i++){
    total = total+nilai[i];
  }
 
  
  rata2 = (total/j);
  
cout<<"Nilai Terbesar: "<<max_num<<endl;
cout<<"Nilai Terkecil: "<<min_num<<endl;
cout << "Nilai rata-rata dari "<< j <<
          " inputan nilai adalah: " << rata2<<endl;
 
  cout << endl;
  return 0;
}