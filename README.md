# Praktikum-09


# Latihan 1 "Program Mencari Nilai Min dan Max dengan Array"
```
Alur Algoritma :
1. Mendeklarasikan int nilai[100] sebagai nilai input array
2. mendeklarasikan int batas, masx(0), min(0);
	int batas sbagai batas perulangan
	int max(0) sebagai pencari nilai tertinggi dari Input
	int min(0) sebagai pencari nilai terendah dari Input
3. Masukan rumus perulangan untuk mencari nilai Max dan Min dari banyak Input
	for (i=1; i<=batas; i++){
        min=nilai[i];
        cout<< "Nilai ke-"<<i<< " : ";
        cin>> nilai[i];

        if (nilai[i]>max) max=nilai[i];
        if (nilai[i]<min) min=nilai[i];
        }
```
Berikut Pseudo-Code :
1. batas =... batas<==
2. nilai =... nilai<==
3. if nilai<=batas goto no 4 else goto no 2
4. Print Max, Print Min
```
Berikut Kode Lengkap :
```c++
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
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum-09/master/Latihan01/Min%20Max%20Array.png)

# Latihan 2 " Program Frekuensi dan Modus Bilangan"
```
Alur Algoritma : 
1. Deklarasi int data[100], jumlah, tmp, N
	int data[100] sebagai nilai input
	int jumlah sebagai pencari nilai yang sering muncul setelah di Urutkan
	int tmp sebagai pengurut nilai input (Ascending)
	int N sebagai batas perulangan input
2. Masukan rumus perulangan input dengan batas N
	for (int i=0;i<N;i++){
        cout << "Data Ke-" << i+1 << " : ";
        cin >> data[i];
    	}
3. Masukan Pengurutan nilai input
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
4. Mencari Frekuensi nilai yang sering muncul
	for(int h=0; h<N; h++){
        jumlah = 0;
        for(int i=0; i<N; i++){
            if(data[h] == data[i])
            jumlah++;
        }
5. Untuk Mencegah redudansi
	if(data[h] != data[h-1])
        cout << data[h] << " : " << jumlah <<endl;
```
Berikut Pseudo-Code :
```
1. N =...N<== (batas)
2. data[i] =...data[i]<==
3. if data[i]<N goto no 4 else no 2
4. Print Ascending, Print Modus
```
Berikut Kode Lengkapnya :
```c++
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
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum-09/master/Latihan02/Frekuensi-Modus.png)

# Latihan 3 " Program Perkalian 2 Matriks"
Berikut Kode Lengkapnya :
```c++
int main (){
    int matrik1[2][2];
    int matrik2[2][2];
    int matrik3[2][2];
    int temp;

    cout<< "Perkalian 2 Matrik\n";
    cout<< "==================\n";

for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<"\nmasukan nilai matrik pertama baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : ";
cin>>matrik1[x][y];
}
}
cout<<endl;
cout<<"Matrik Pertama :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<matrik1[x][y]<<"   ";
}
cout<<endl;
}
cout<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<3;y++){
cout <<"masukan nilai matrik kedua baris ke-"<<(x+1)<<" kolom ke-"<<(y+1)<<" : ";
cin>>matrik2[x][y];
}
}
cout<<endl;
cout<<"Matrik Kedua :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<3;y++){
cout <<matrik2[x][y]<<"   ";
}
cout<<endl;
}
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
matrik3[x][y]=0;
for (int z =0;z<2;z++){
temp=matrik1[x][z]*matrik2[z][y];
matrik3[x][y]=matrik3[x][y]+temp;
}
}
}
cout<<endl;
cout<<"Matrik hasil perkalian :"<<endl;
for (int x = 0;x<2;x++){
for (int y =0;y<2;y++){
cout <<matrik3[x][y]<<"   ";
}
cout<<endl;
}
}
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum-09/master/Latihan03/Perkalian%20Matriks.png)

# Latihan 4 "Program Transpose Matriks"

Berikut Kode Lengkapnya :
```c++
int main(){
    int i,j,m,n,o;
 cout<<"Program transpose matriks (Kolom dan Baris)\n\n";
 cout<< "Masukkan Batas Kolom : ";
 cin>>m;
 cout<<"masukkan Batas Baris : ";
 cin>>n;
 cout<< "\n";
 int mat[m][n];
 for(i=0;i<m;i++){
  for(j=0;j<n;j++){
   cout<<"Baris ("<<i+1<<","<<j+1<<")=";
   cin>>mat[i][j];
  }
  cout<<endl;
 }
 cout<<"Bentuk Awal Matriks :\n";
 for(i=0;i<m;i++){
  for(j=0;j<n;j++){
   cout<<mat[i][j]<<" ";
  }
  cout<<endl;
 }
 o=m; m=n; n=o;
 cout<<"\nSetelah Transpose Matriks :\n";
 for(j=0;j<m;j++){
  for(i=0;i<n;i++){
   cout<<mat[i][j]<<" ";
  }
  cout<<endl;
 }
}
```
Berikut Hasilnya :
![img](https://raw.githubusercontent.com/danangadita91/Praktikum-09/master/Latihan04/Transpose.png)