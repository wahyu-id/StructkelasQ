#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

struct mahasiswa {
string nim;
string nama;
string alamat;
float ipk;
};

void dMenu(){
system("cls");
cout<<"Aplikasi Struct"<<"\n";       
cout<<"1. Menu buat"<<"\n";            
cout<<"2. Menu baca"<<"\n";            
cout<<"3. Menu ubah"<<"\n";           
cout<<"4. Menu hapus"<<"\n";            
cout<<"5. Informasi"<<"\n";           
cout<<"Masukan angka :";
}

mahasiswa sikc[30];
int pos=-1;

void tampilkanData(int p){
cout << sikc[p].nim<<" , "<< sikc[p].nama<<" , "<< sikc[p].alamat<<" , "<<
sikc[p].ipk<<endl;
}

void masukanData(){
pos++;
system("cls");
fflush(stdin);
cout << "masukan nim: ";
getline (cin, sikc[pos].nim);
cout << "masukan nama: ";
getline (cin, sikc[pos].nama);
cout << "masukan alamat: ";
getline (cin, sikc[pos].alamat);
cout << "masukan ipk: ";
cin >> sikc[pos].ipk;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void perbaikanData(int p)
{
system("cls");
fflush(stdin);
cout << "masukan nama: ";
getline (cin, sikc[p].nama);
cout  << "masukan alamat: ";
getline (cin, sikc[p].alamat);
cout << "masukan ipk: ";
cin >> sikc[p].ipk;
cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
int data [100];
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
  case '1':
    masukanData();
    break;
  case '2':
    break;  
  case '3':
    break;  
  case '4':
    break;  
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}