#include <iostream>
using namespace::std;

struct data{
char nim[30],nama[30],kelas[30],p;};
data berkas[100];
int a,b,d,i;


int  sorting()
{
    int a[50],n,i,j,temp;
    cout<<"Sorting angka dari kecil ke besar"<<endl<<endl;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the array elements : ";

    for(i=0;i<n;++i)
        cin>>a[i];

    for(i=1;i<n;++i)
    {
        for(j=0;j<(n-i);++j)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    }
    cout<<"Array after bubble sort : ";
    for(i=0;i<n;++i)
        cout<<" "<<a[i];
    return 0;
}

void inputdata()
{
   cout<<"\nJumlah Data Yang Akan diinputkan : ";cin>>b;
   d=0;
   for(i=0;i<b;i++){
   d=d+1;
   cout<<"\nData ke-"<<d<<endl;
   cout<<"NIM  \t: ";cin>>berkas[a].nim;
   cout<<"Nama \t: ";cin>>berkas[a].nama;
   cout<<"Kelas\t: ";cin>>berkas[a].kelas;
   a++;}
   }

void searchingdata()
{int ketemu,i;
 string cari;
 cout<<"\n================================Searching Data===============================\n\n";

 cout<<endl;
    cout<<"Input nama yang di cari : ";
    cin>>cari;


    ketemu=0;
    for(i=0;i<=b;i++)
    {
        if (berkas[a].nama==cari)
        {
            ketemu=1;

            cout<<"Nama ditemukan pada indeks ke ";
            cout<<d<<" ";
        }

    }
    if (ketemu==0)
        cout<<"Nama tidak ditemukan";
}



void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {berkas[i]=berkas[i+1];}
 ;
 cout<<"\n\nData ke-"<<x<<" Terhapus\n\n";
 ;
}
void lihatdata()
{int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";


 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
  cout<<"Data NO : "<<j<<endl;
  cout<<"NIM  \t: "<<berkas[i].nim<<endl;
  cout<<"NAMA \t: "<<berkas[i].nama<<endl;
  cout<<"KELAS\t: "<<berkas[i].kelas<<endl<<endl;
  }
  }

void editdata(){
int k,l;
cout<<"Masukan No Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"NIM  \t: ";cin>>berkas[l].nim;
cout<<"Nama \t: ";cin>>berkas[l].nama;
cout<<"Kelas\t: ";cin>>berkas[l].kelas;
lihatdata();
}


int main()
{     int pilih;
 char w;

  awal:
  cout<<"\n================================ PILIH =================================";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Searching Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Sorting";
  cout<<"\n6. Tampilkan Semua Data";
  cout<<"\n7. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {inputdata();goto awal;}
  if(pilih==2)
   {hapusdata();goto awal;}
  if(pilih==3)
   {searchingdata();goto awal;}
  if(pilih==4)
   {editdata();goto awal;}
  if(pilih==5)
   {sorting();goto awal;}
  if(pilih==6)
   {lihatdata();goto awal;}
  if(pilih==7)
   {
    cout<<"\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM??\n\n";
    cout<<"                         [Y]                         [N]                  \n"<<endl;
    cout<<"                                         ";cin>>w;
    if(w=='y'||w=='Y')
    {
     cout<<"\n\n\n\n\n^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^ PROGRAM SELESAI ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^";}
    if(w=='n'||w=='N')
           {goto awal;}}
  else
   {cout<<"Pilihan 1-5";goto awal;}
cout<<"\n\t\t\t\tPROGRAM BY ADYATMA RIJAL\n\n";
}
