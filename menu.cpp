#include <iostream>
#include <conio.h>
using namespace std;

int n;


void tukar(int *a, int *b){
  int t=*a;
  *a=*b;
  *b=t;
}

void masukkan(int data[]){
  system("cls");
    cout << "Masukkan jumlah data:";
      cin >> n;
        for (int i = 0 ; i < n; i++){
          cout << "Masukkan data ke-" << i + 1 << ":"; 
            cin >> data[i];
        }
}

void tampilkan (int data[]){
  system("cls");
    cout << "Data yang dimasukkan:\n";
        for (int i = 0 ; i < n; i++){
          cout << "Data ke-" << i + 1 << ":" << data[i] << endl;}
    getch();
}

void bubble_sort (int data[]){
  for (int i = 1; i < n; i++){
    for (int j = n-1; j >= i; j--){
      if (data[j]<data[j-1])
      tukar (&data[j],&data[j-1]);
    }
  }
  system("cls");
    cout << "Data setelah ASC\n";
        for (int i = 0 ; i < n; i++){
          cout << "Data ke-" << data[i] << endl;}
    getch();
}

void bubble_sort2 (int data[]){
  for (int i = 1; i < n; i++){
    for (int j = n-1; j >= i; j--){
      if (data[j]>data[j-1])
      tukar (&data[j],&data[j-1]);
    }
  }
  system("cls");
    cout << "Data setelah DSC\n";
        for (int i = 0 ; i < n; i++){
          cout << "Data ke-" << data[i] << endl;}
    getch();
}

void dMenu(){
system("cls");
cout<<"Aplikasi Sorting Bubble"<<"\n";       
cout<<"1. Masukkan data"<<"\n";            
cout<<"2. Tampilkan data"<<"\n";            
cout<<"3. Sorting asc"<<"\n";           
cout<<"4. Sorting dsc"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

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
    masukkan(data);
    break;
  case '2':
  tampilkan(data);
    break;  
  case '3':
    bubble_sort(data);
    break;  
  case '4':
    bubble_sort2(data);
    break;  
  case '5':
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