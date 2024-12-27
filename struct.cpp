#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
int n;
int u;

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
  cout << "Data yang telah dimasukkan\n"
       << endl;
  for (int i = 0; i <= pos; i++)
  {
    cout << (i + 1) << ".\tNIM    : " << sikc[i].nim << "\n";
    cout << "\tNama   : " << sikc[i].nama << "\n";
    cout << "\tAlamat : " << sikc[i].alamat << "\n";
    cout << "\tIPK    : " << sikc[i].ipk << "\n\n";
  }
}

void masukanData()
{
  system("cls");
  cout << "Masukkan jumlah data:";
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++)
  {
    pos++;
    system("cls");
    cout << "Masukan data ke-" << (pos + 1) << ":" << endl;
    cout << "Masukan NIM: ";
    getline(cin, sikc[pos].nim);
    cout << "Masukan Nama: ";
    getline(cin, sikc[pos].nama);
    cout << "Masukan Alamat: ";
    getline(cin, sikc[pos].alamat);
    cout << "Masukan IPK: ";
    cin >> sikc[pos].ipk;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
  }
}

void perbaikanData(int p)
{
  system("cls");
  cout << "Mengubah data ke-" << (p + 1) << ":\n";
  cin.ignore();
  cout << "Masukan Nama baru: ";
  getline(cin, sikc[p].nama);
  cout << "Masukan Alamat baru: ";
  getline(cin, sikc[p].alamat);
  cout << "Masukan IPK baru: ";
  cin >> sikc[p].ipk;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << "Data berhasil diubah!\n";
}

void ubahPilih()
{
  system("cls");
  cout << "Masukkan data yang ingin diubah: ";
  cin >> u;
  perbaikanData(u - 1);
}

void hapusData(int p)
{
  system("cls");
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  for (int i = p; i < pos; i++)
  {
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
      ubahPilih();
      break;
    case '4':
      int x;
      system("cls");
      cout << "Masukkan data yang ingin dihapus: ";
      cin >> x;
      hapusData(x - 1);
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