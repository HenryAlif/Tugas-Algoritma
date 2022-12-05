#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main()
{ 
    int menu,saldo,setor,tarik;
    saldo=10000;  
 
    while (menu>3 || menu<3)
 {
    masuk:
    system("cls");
    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    cout<<"|      PT. BANK SYARIAH INDEPENDEN    |"<<endl;
    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl<<endl;
    cout<<"Saldo : Rp. "<<saldo;
    cout<<endl;
    cout<<endl;
    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    cout<<"|           Menu Transaksi            |"<<endl;
    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    cout<<"|                                     |"<<endl;
    cout<<"+        1. Setor Tabungan            +"<<endl;
    cout<<"|        2. Ambil Tabungan            |"<<endl;
    cout<<"+        3. Keluar                    +"<<endl;
    cout<<"|                                     |"<<endl;
    cout<<"+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+"<<endl;
    cout<<endl<<"Pilih Menu 1-3: ";
    cin>>menu;

    while(menu==1)
    { 
        system("cls");
        cout<<"Menu Penyetoran Tabungan"<<endl<<endl;
        cout<<"Jumlah Setor : Rp. ";
        cin>>setor;
        saldo=saldo+setor;
        
       system("cls");
        cout<<"Selamat Anda Berhasil Menabung Sebesar : Rp. "<<setor<<endl;
        cout<<"Saldo Anda Sekarang : Rp. "<<saldo;
        cout<<endl<<endl;
  
        //pause
        system("pause");
        break;
    }
    
    while(menu==2)
    { 
        system("cls");
        cout<<"Jumlah Penarikan : Rp. ";
        cin>>tarik;
        {

        while(saldo-tarik<10000)
        { 
       system("cls");
        cout<<"Saldo Anda Tidak Mencukupi..."<<endl;
        cout<<"Saldo Minimal Rp. 10000..."<<endl<<endl;
        cout<<"Anda Tidak Berhasil Menarik Tabungan..."<<endl;
        cout<<endl<<endl;
  
        //pause
        system("pause");
        goto masuk;
        break;
        }
       
        while(saldo-tarik>=10000)
        { 
        saldo=saldo-tarik;
        system("cls");
        cout<<"Selamat Anda Berhasil Mengambil Uang Sebesar : Rp. "<<tarik<<endl;
        cout<<"Saldo Tabungan Anda Sekarang : Rp. "<<saldo;
        cout<<endl<<endl;  
  
        //pause
        system("pause");
        break;
  }
        break;
        }

    }
    while(menu==3)
    exit(1);
 }
   
}

