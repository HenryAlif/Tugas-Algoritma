#include <iostream>
#include <conio.h>

using namespace std;
int main()
{
    int a, b, c;
    const int MAX = 20;
    cout<<"===================\n";
    gotoxy(1,2);
    cout<<"x\n";
    gotoxy(9,2);
    cout<<"y\n";
    gotoxy(17,2);
    cout<<"z\n";
    cout<<"===================\n";
    for(a=0;a<=MAX; a++)
    {
       for(b=0;b<=MAX;b++)
       {
          for(c=0;c<=MAX;c++)
          {
             if( (a + b + c) == MAX)<br />
             {
                cout<<a<<"\t"<<b<<"\t"<<c;
                cout<<endl;
                getch();
             }
          }
       }
    }
    getch();
}

