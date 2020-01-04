#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

main()
{
int h,hb=15000,hs=25000,hn=20000,h1,h2,h3,i,j,m;

struct data_motor
{
     char merk[15];
     char model[15];
     char mesin[15];
} mtr[10];

 cout<<"==============================="<<endl;
 cout<<"Selamat Datang di Bengkel Motor"<<endl;
 cout<<"==============================="<<endl;
 cout<<endl;
 cout<<"Silahkan Pilih Jenis Motor :"<<endl;
 cout<<endl;
 cout<<"1. Bebek (Biaya Rp. 15.000)"<<endl;
 cout<<"2. Sport (Biaya Rp. 25.000)"<<endl;
 cout<<"3. Naked (Biaya Rp. 20.000)"<<endl;
 cout<<endl;
 cout<<"Pilih : ";cin>>m;
 cout<<endl;
 
if(m==1){
 cout<<"Jumlah Motor = ";cin>>j;
 cout<<endl;
 cout<<"==============================="<<endl;
 cout<<endl;
 cout<<"Masukan Data Motor"<<endl;
 for(i=1; i<=j; i++)
 {
  cout<<"Data Motor ke - "<<i<<endl;
  cout<<"Merk = ";cin>>mtr[i].merk;
  cout<<"Model = ";cin>>mtr[i].model;
  cout<<"Mesin = ";cin>>mtr[i].mesin;
 }
 cout<<endl;
 cout<<"==============================="<<endl;
 cout<<endl;
 cout<<"Data Motor Yang Diinput"<<endl;
 for(i=1; i<=j; i++)
 { 
     cout<<"Motor ke - "<<i<<endl;
     cout<<"Merk = "<<mtr[i].merk<<endl;
     cout<<"Model = "<<mtr[i].model<<endl;
  cout<<"Mesin = "<<mtr[i].mesin<<endl;
     cout<<endl;
 }
 h=hb*j;
 cout<<"Silahkan Bayar Rp. "<<h<<endl;
 cout<<"Terima Kasih"<<endl;
 cout<<endl;
 cout<<"==============================="<<endl;
}

else if(m==2){
 cout<<"Jumlah Motor = ";cin>>j;
 cout<<endl;
 cout<<"==============================="<<endl;
 cout<<endl;
 cout<<"Masukan Data Motor"<<endl;
 for(i=1; i<=j; i++)
 {
  cout<<"Data Motor ke - "<<i<<endl;
  cout<<"Merk = ";cin>>mtr[i].merk;
  cout<<"Model = ";cin>>mtr[i].model;
  cout<<"Mesin = ";cin>>mtr[i].mesin;
 }
 cout<<endl;
 cout<<"==============================="<<endl;
 cout<<endl;
 cout<<"Data Motor Yang Diinput"<<endl;
 for(i=1; i<=j; i++)
 { 
     cout<<"Motor ke - "<<i<<endl;
     cout<<"Merk = "<<mtr[i].merk<<endl;
     cout<<"Model = "<<mtr[i].model<<endl;
  cout<<"Mesin = "<<mtr[i].mesin<<endl;
     cout<<endl;
 }
 h=hs*j;
 cout<<"Silahkan Bayar Rp. "<<h<<endl;
 cout<<"Terima Kasih"<<endl;
 cout<<endl;
 cout<<"==============================="<<endl;
}

else if(m==3){
 cout<<"Jumlah Motor = ";cin>>j;
 cout<<endl;
 cout<<"==============================="<<endl;
 cout<<endl;
 cout<<"Masukan Data Motor"<<endl;
 for(i=1; i<=j; i++)
 {
  cout<<"Data Motor ke - "<<i<<endl;
  cout<<"Merk = ";cin>>mtr[i].merk;
  cout<<"Model = ";cin>>mtr[i].model;
  cout<<"Mesin = ";cin>>mtr[i].mesin;
 }
 cout<<endl;
 cout<<"==============================="<<endl;
 cout<<endl;
 cout<<"Data Motor Yang Diinput"<<endl;
 for(i=1; i<=j; i++)
 { 
     cout<<"Motor ke - "<<i<<endl;
     cout<<"Merk = "<<mtr[i].merk<<endl;
     cout<<"Model = "<<mtr[i].model<<endl;
  cout<<"Mesin = "<<mtr[i].mesin<<endl;
     cout<<endl;
 }
 h=hn*j;
 cout<<"Silahkan Bayar Rp. "<<h<<endl;
 cout<<"Terima Kasih"<<endl;
 cout<<endl;
 cout<<"==============================="<<endl;
}

else{
 cout<<"Jenis Motor Tidak Ada"<<endl;
}

getch();
}
