#include <iostream>
using namespace std;
int main(){
  //inisialisasi variable dan tipe data
  char input[1000], result[1000];
  int i, longstring, total = 0;
  
  printf("------------- \n");
  printf("REVERSE WORD \n");
  printf("------------- \n");

  printf("Input some word: ");

  //proses mengambil data dan melakukan pembalikan
  fgets(input, sizeof(input), stdin);
  while (input[total] != '\0'){
    total++;
  }
  longstring = total - 1;
  for (i = 0; i < total; i++){
    result[i] = input[longstring];
    longstring--;
  }
  result[i] = '\0';

  //print result yang telah dikonversi
  printf("result reverse: %s", result);
  printf("\n\nProgram Success");
  return 0;
}