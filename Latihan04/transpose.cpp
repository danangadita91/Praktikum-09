#include<iostream>
using namespace std;

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
