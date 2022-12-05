#include <iostream> 
using namespace std;  
int main() {  
// Output \t untuk tab     
cout<<"-----------------"<<endl;
cout<<"x\ty\tz"<<endl;
cout<<"-----------------"<<endl;
// Perulangan untuk x dilakukan dari 0 sampai 20
for(int x=0;x<=20;x++)
     {
        // Perulangan untuk y dilakukan dari 0 sampai 20
        for(int y=0;y<=20;y++)
        {/* Jika 20 dikurangi x dan y lebih besar
        atau minimal sama dengan 0 maka tampilkan dilayar              */
        while(20-x-y>=0)
        {cout<<x<<"\t"<<y<<"\t"<<20-x-y<<endl;  
        break;
        }
        }
        }
        cout<<endl<<endl;
        //Kita gunakan pause agar program tidak langsung keluar     
        system("Pause"); }  