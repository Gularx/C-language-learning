#include "stdio.h"
#include "string.h"


char *OUT(char *string_y)//取出函数
{
  int y;
  for (y=0;y<16;y++)
  {
    string_y[y] = '1';
  }
  string_y[15] = '\0';
  return string_y;
}

int main(int argc,char *argv[]){
  char str[20];
  OUT(str);

  printf("%s\n", str);
}