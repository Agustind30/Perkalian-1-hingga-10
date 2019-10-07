#include <iostream>
using namespace std;

int main()
{
//TABEL PERKALIAN 1 HINGGA 10

    cout<<"Agustin Dwinurcahyani"<<endl;
    cout<<"DIV MANAJEMEN INFORMATIKA"<<endl;
    cout<<"======================================"<<endl;
    cout << " Selamat Datang di Tabel Perkalian \n" ;
    cout<<"======================================"<<endl;
    
	int i,n,batas=10,jumlah;
    cout<<"Bilangan yang akan dikalikan : ";
    cin>>n;
    cout<<"======================================"<<endl;
    cout<<"Menampilkan Hasil Perkalian :"<<endl;

    for(i=0;i<=batas;i++)
    {jumlah=i*n;
    cout<<i<<"*"<<n<<"="<<jumlah<<endl;
    }
    return 0;
}
