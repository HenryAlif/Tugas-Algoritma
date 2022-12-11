#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
char i[26];
int j,k,l,m;
j=0;
k=0;
cout<<"Masukan jumlah karakter = ";
cin>>l;
cout<<"Masukan kata = ";
for (int m=0;m<l;m++)
cin>>i[m];
cout<<endl;

for (m=0; m<l; m++)
{
if ((int)i[m]==97 || (int)i[m]==105 || (int)i[m]==117 || (int)i[m]==101 || (int)i[m]==111)
j=j+1;
else if ((int)i[m]==65 || (int)i[m]==73 || (int)i[m]==85 || (int)i[m]==69 || (int)i[m]==79)
j=j+1;
else
k=k+1;
}
cout<<"Jumlah huruf vokal = "<<j<<endl;
cout<<"Jumlah huruf konsonan = "<<k<<endl;
return 0;
}