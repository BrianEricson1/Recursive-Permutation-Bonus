#include <stdio.h>
#include <string.h>

char * move(char str[], int i, int j){
  char temp = str[i];
  str[i] = str[j];
  str[j] = temp;
  return str;
}

int fact(int j){
  if(j == 1)
    return 1;
  return j * fact(j-1);
}

void permute(char str[], int k){
  int j = (k%(strlen(str)-1));
  if(k == fact(strlen(str)))
    return;
  strcpy(str, move(str, j, j+1));
  printf("%s\n", str);
  permute(str, k+1);
}

void main(void){
  char str[] = "cat";
  permute(str, 0);
}