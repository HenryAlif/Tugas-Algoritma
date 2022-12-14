#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
char abjad[26];
int vokal = 0,konsonan = 0,l,m;

//input jumlah karakter yg akan diketik
cout<<"Enter the number of characters = ";
cin>>l;
//input kata yg jumlahnya sesuai dengan karakter
cout<<"Enter word = ";
for (int m=0;m<l;m++)
cin>>abjad[m];
cout<<endl;

//proses perhitungan
for (m=0; m<l; m++)
{
    if ((int)abjad[m]==97 || (int)abjad[m]==105 || (int)abjad[m]==117 || (int)abjad[m]==101 || (int)abjad[m]==111)
    vokal=vokal+1;
    else if ((int)abjad[m]==65 || (int)abjad[m]==73 || (int)abjad[m]==85 || (int)abjad[m]==69 || (int)abjad[m]==79)
    vokal=vokal+1;
    else
    konsonan=konsonan+1;
}

//result
cout<<"Number of vowels = "<<vokal<<endl;
cout<<"Number of consonants = "<<konsonan<<endl;
return 0;
}