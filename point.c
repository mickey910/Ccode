#include <stdio.h>
int main() {
  int i = 42;
  int *p;       //* ��b�@�ӫ��O�A�B�O�ŧi���@�����A�ҥHp�O�@��pointer
  p = &i;       //p���Vi

  printf("i: %d\n", i);
  printf("*p: %d\n", *p);
  printf("p: %p\n", p);
  printf("&i: %p\n", &i);
  return 0;
}
