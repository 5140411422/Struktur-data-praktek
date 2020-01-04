#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main()
{
int satuan,z,p,konversi;
float suhu,c,r,f,k,berat,ukur;
char ulang;
do{
    system("cls");
    cout<<"\t||+|+|+| KONVERSI SATUAN SUHU |+|+|+||"<<endl;
    cout<<"\t|1. KELVIN                         |"<<endl;
    cout<<"\t|2. CELCIUS                        |"<<endl;
    cout<<"\t|3. FAHRENHEIT                     |"<<endl;
    cout<<"\t|4. REAMUR                         |"<<endl;
    cout<<"\t|                                  |"<<endl;
    cout<<"\t|==================================|"<<endl;
    cout<<endl;
    cout<<"\tPilih [1/2/3/4] : ";cin>>satuan;
    switch(satuan){
        case 1: system("cls");
            cout<<"================================="<<endl;
            cout<<"masukkan suhu kelvin : ";cin>>suhu;
            c=suhu-273.15;
            f=suhu*1.8-459.67;
            r=(suhu-273.15)*0.8;
            cout<<endl;
            cout<<"================================="<<endl;
            cout<<"CELCIUS       : "<<c<<endl;
            cout<<"FAHRENHEIT    : "<<f<<endl;
            cout<<"REAMUR        : "<<r<<endl;
            cout<<"================================="<<endl;
            cout<<endl;
            break;
        case 2: system("cls");
            cout<<"================================="<<endl;
            cout<<"masukkan suhu celcius : ";cin>>suhu;
            f=suhu*1.8+32;
            r=suhu*0.8;
            k=suhu+273.15;
            cout<<endl;
            cout<<"================================="<<endl;
            cout<<"FAHRENHEIT    : "<<f<<endl;
            cout<<"REAMUR        : "<<r<<endl;
            cout<<"KELVIN        : "<<k<<endl;
            cout<<"================================="<<endl;
            cout<<endl;
            break;
        case 3: system("cls");
            cout<<"================================="<<endl;
            cout<<"masukkan suhu Fahrenheit : ";cin>>suhu;
            c=(suhu-32)/1.8;
            k=(suhu+459.67)/1.8;
            r=(suhu-32)/2.25;
            cout<<endl;
            cout<<"================================="<<endl;
            cout<<"CELCIUS       : "<<c<<endl;
            cout<<"REAMUR        : "<<r<<endl;
            cout<<"KELVIN        : "<<k<<endl;
            cout<<"================================="<<endl;
            cout<<endl;
            break;
        case 4: system("cls");
            cout<<"================================="<<endl;
            cout<<"masukkan suhu reamur : ";cin>>suhu;
            c=suhu/0.8;
            k=suhu/0.8+273.15;
            f=suhu*2.25+32;
            cout<<endl;
            cout<<"================================="<<endl;
            cout<<"CELCIUS       : "<<c<<endl;
            cout<<"KELVIN        : "<<k<<endl;
            cout<<"FAHRENHEIT    : "<<f<<endl;
            cout<<"================================="<<endl;
            cout<<endl;
            break;
        default: system("cls");
            cout<<"Menu tidak teridentifikasi!!!\n";
            break;
    }
    cout<<"Apakah anda ingin mengulang?(y/n) "; cin>>ulang;
} while(ulang=='Y' || ulang=='y');
system ("cls");
    cout<<"Terimakasih [tekan enter 2x untuk keluar]";
getch();
}

