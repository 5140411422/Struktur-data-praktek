/*contoh program sederhana array di dalam struct*/

#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct TMhs
{
char NIM[9];
char Nama[25];
int NilaiUTS,NilaiUAS,NilaiQuis;
float NilaiAkhir;
char index;
};

main ()
{
int jml_mhs;
cout<<"masukkan jumlah mahasiswa = "; cin >> jml_mhs;
TMhs mhs[jml_mhs];
int i;
for(i=0;i<jml_mhs;i++){

cout << "Pengisian Data Mahasiswa Ke-"<<i+1<< endl;

cout << "NIM : "; cin >> mhs[i].NIM;

cout << "NAMA : "; cin >> mhs[i].Nama;

cout <<"Nilai Quiz : ";cin >> mhs[i].NilaiQuis;

cout <<"Nilai UTS : ";cin >> mhs[i].NilaiUTS;

cout <<"Nilai UAS : ";cin >>  mhs[i].NilaiUAS;

mhs[i].NilaiAkhir=0.2*mhs[i].NilaiQuis+0.3*mhs[i].NilaiUTS+0.5*mhs[i].NilaiUAS;

if(mhs[i].NilaiAkhir>=80) {
mhs[i].index ='A';}else if(mhs[i].NilaiAkhir>=60) {
mhs[i].index ='B';}else if(mhs[i].NilaiAkhir>=40) {
mhs[i].index ='C';}else if(mhs[i].NilaiAkhir>=20) {
mhs[i].index ='D';}else if(mhs[i].NilaiAkhir>=0) {
mhs[i].index ='E';}
};

printf("Data yang telah dimasukkan adalah : \n");
printf("-------------------------------------------- \n");
printf("|      NIM |                 NAMA |QUIS | UTS | UAS | NA     | INDEX | \n");
cout <<"-------------------------------------------- \n";
for(i=0;i<jml_mhs;i++)
{
printf("| %-8s | %-20s | %3i | %3i | %3i | %6.2f | %c    | \n",
mhs[i].NIM,mhs[i].Nama,mhs[i].NilaiQuis,mhs[i].NilaiUTS,mhs[i].NilaiUAS,mhs[i].NilaiAkhir,mhs[i].index);
}
cout<<"------------------";
getch();
return 0;
}
