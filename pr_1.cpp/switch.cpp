#include <iostream>
using namespace std;

int main()
{

    char hari;

        printf("Masukan Angka : ");
        scanf(" %c", &hari);

    switch (hari) {
    case '0' :
        printf("Hari Minggu\n");
        break; 
    case '1' :
        printf("Hari Senin\n");
        break; 
    case '2' :
        printf("Hari Selasa\n");
        break; 
    case '3' :
        printf("Hari Rabu\n");
        break; 
    case '4' :
        printf("Hari Kamis\n");
        break; 
    case '5' :
        printf("Hari Jumat\n");
        break; 
    case '6' :
        printf("Hari Sabtu\n");
        break; 

    default:
        printf("INVALID!");
        break;

    }
    return 0;

}