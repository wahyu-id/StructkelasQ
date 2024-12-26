#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int n;
int u;
int x;

void dMenu()
{
  system("cls");
  cout << "Aplikasi Struct" << "\n";
  cout << "1. Menu buat" << "\n";
  cout << "2. Menu baca" << "\n";
  cout << "3. Menu ubah" << "\n";
  cout << "4. Menu hapus" << "\n";
  cout << "5. Keluar" << "\n";
  cout << "Masukan angka :";
}

struct mahasiswa
{
  string nim;
  string nama;
  string alamat;
  float ipk;
};

mahasiswa sikc[30];
int pos = -1;

void tampilkanData()
{
  system("cls");
  cout << "Data yang telah dimasukkan" << endl;
  for (int i = 0; i <= pos; i++)
  {
    cout << "Data ke-" << i << ":\n";
    cout << "NIM    : " << sikc[i].nim << ":\n";
    cout << "Nama   : " << sikc[i].nama << ":\n";
    cout << "Alamat : " << sikc[i].alamat << ":\n";
    cout << "IPK    : " << sikc[i].ipk << "\n\n";
  }
}

void masukanData()
{
  system("cls");
  cout << "Masukkan jumlah data:";
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for (int i = 0; i < n; i++)
  {
    pos++;
    system("cls");
    cout << "masukan data ke-" << i + 1 << ":\n";
    cout << "masukan nim: ";
    getline(cin, sikc[pos].nim);
    cout << "masukan nama: ";
    getline(cin, sikc[pos].nama);
    cout << "masukan alamat: ";
    getline(cin, sikc[pos].alamat);
    cout << "masukan ipk: ";
    cin >> sikc[pos].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }
}

void perbaikanData(int p)
{
  system("cls");
  fflush(stdin);
  cout << "masukan nama: ";
  getline(cin, sikc[p].nama);
  cout << "masukan alamat: ";
  getline(cin, sikc[p].alamat);
  cout << "masukan ipk: ";
  cin >> sikc[p].ipk;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << "Data berhasil diubah!\n";
}

void ubahPilih()
{
  cout << "Masukkan data yang ingin diubah: ";
  cin >> u;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  perbaikanData(u);
  getch();
}

void hapusData(){
  cout << "Masukkan data yang ingin dihapus: ";
  cin >> x;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for (int i = x; i < pos; i++){
    sikc[i] = sikc[i + 1];
  }
    pos--;
    cout << "Data berhasil dihapus!\n";
}

int main()
{
  int data[100];
  char pl;
  do
  {
    dMenu();
    pl = getch();
    switch (pl)
    {
    case '1':
      masukanData();
      break;
    case '2':
      tampilkanData();
      getch();
      break;
    case '3':
      tampilkanData();
      ubahPilih();
      break;
    case '4':
      tampilkanData();
      hapusData();
      getch();
      break;
    case '5':

      break;
    default:
      system("cls");
      cout << "Pilihan Tidak Tersedia";
      getch();
      break;
    }

  } while (pl != '5');
  return 0;
}