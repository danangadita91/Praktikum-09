#include <iostream>
using namespace std;

int main(){
    int nilai[100];
    int batas, max(0), min(0);
    cout<< " Program Mencari nilai min dan max dangan array \n";
    cout<< "=============================================== \n";
    cout<< "\nMasukan batas perulangan : ";
    cin>> batas;
    cout<< "\n";

    for (i=1; i<=batas; i++){
        min=nilai[i];
        cout<< "Nilai ke-"<<i<< " : ";
        cin>> nilai[i];

        if (nilai[i]>max) max=nilai[i];
        if (nilai[i]<min) min=nilai[i];
        }

    cout<< "\n";
    cout<< "Nilai minimum : "<< min;
    cout<< "\nDan";
    cout<< "\nNilai maksimum : "<<max;
    cout<< "\n";
    return 0;
}
