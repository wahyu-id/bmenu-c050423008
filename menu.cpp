#include <iostream>
#include <conio.h>
using namespace std;

int n;

void tukar(int *a, int *b){
  int t=*a;
  *a=*b;
  *b=t;
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

void mPertama(string pesan){
system("cls");
// cout<<"Masukkan jumalh data "<<pesan;
getch();
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
    /* code */
    system("cls");
    cout << "Masukkan jumlah data:\n";
      cin >> n;
        for (int i = 0 ; i < n; i++){
          cout << "Masukkan data ke-" << i + 1 << ":"; 
            cin >> data[i];
        }
    break;
  case '2':
    system("cls");
    cout << "Data yang dimasukkan:\n";
        for (int i = 0 ; i < n; i++){
          cout << "Data ke-" << i + 1 << ":" << data[i] << endl;}
    getch();
    /* code */ 
    break;  
  case '3':
    mPertama("ke- tiga");
    /* code */
    break;  
  case '4':
    mPertama("ke- empat");
    /* code */
    break;  
  case '5':
    /* code */
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