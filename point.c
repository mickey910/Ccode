#include <stdio.h>
int main() {
  int i = 42;
  int *p;       //* 跟在一個型別，且是宣告的一部份，所以p是一個pointer
  p = &i;       //p指向i

  printf("i: %d\n", i);
  printf("*p: %d\n", *p);
  printf("p: %p\n", p);
  printf("&i: %p\n", &i);
  return 0;
}
