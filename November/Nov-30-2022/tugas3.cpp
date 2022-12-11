#include <iostream> 
using namespace std;  
int main() {

cout<<"-----------------"<<endl;
cout<<"x\ty\tz"<<endl;
cout<<"-----------------"<<endl;

for(int x=0;x<=20;x++)
   {
      for(int y=0;y<=20;y++)
         {
            while(20-x-y>=0)
            {cout<<x<<"\t"<<y<<"\t"<<20-x-y<<endl;  
            break;
            }
         }
   }
cout<<endl<<endl;
system("Pause"); }  