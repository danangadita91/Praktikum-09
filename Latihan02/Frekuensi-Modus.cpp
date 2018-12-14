#include <iostream>
using namespace std;

int main(){
    int data[100];
    int jumlah, tmp, N;

    cout<< "Program Frekuensi dan Modus Bilangan\n";
    cout<< "====================================\n";
    cout << "\nMasukan Banyak Data : ";
    cin >> N;

    for (int i=0;i<N;i++){
        cout << "Data Ke-" << i+1 << " : ";
        cin >> data[i];
    }
     cout << "\nData diurutkan : ";
    for(int h=0; h<N; h++){
        for(int i=h+1; i<N; i++){
            if(data[h] > data[i]){
                tmp = data[i];
                data[i] = data[h];
                data[h] = tmp;
            }
        }
        cout << data[h] << " ";
    }
    cout << "\nBanyak kemunculan data : " << endl;
    for(int h=0; h<N; h++){
        jumlah = 0;
        for(int i=0; i<N; i++){
            if(data[h] == data[i])
            jumlah++;
        }
        if(data[h] != data[h-1])
            cout << data[h] << " : " << jumlah <<endl;
    }
}
