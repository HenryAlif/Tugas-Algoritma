#include <iostream>
using namespace std;
int main(){
  char input[1000], result[1000];
  int i, longstring, total = 0;
  printf("Input some word: ");
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
  printf("result reverse: %s \n", result);
  return 0;
}