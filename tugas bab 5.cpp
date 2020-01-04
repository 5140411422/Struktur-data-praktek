#include <iostream>

using namespace std;

int main(){
    int m[100],cari,i,n;

    cout<<"masukkan jumlah array = ";cin>>n;
    for (i=1; i<=n; i++){
        cout<<"masukkan data array ke-"<<i<<" = ";cin>>m[i];
    }
    cout<<"masukkan nilai yang dicari = ";cin>>cari;
    cout<<endl;

    for (i=1; i<=n; i++){
        if (m[i]==cari){
            cout<<"data ditemukan\nn";
            i=n;
        }else if(i==n){
            cout<<"data tidak ditemukan\nn";
        }
    }
    return 0;
}
