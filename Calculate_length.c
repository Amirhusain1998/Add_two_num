#include <stdio.h>

int main() {
  char str[20];
  int i;
  printf("Enter your Name\n");
 gets(str);
  for(i=0;str[i];i++);
  printf("%d",i);
  
  return 0;
}
