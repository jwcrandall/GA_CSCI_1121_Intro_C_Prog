#include<stdio.h>
#include<limits.h>
int main(){
  printf("int max = %d\n", INT_MAX);
  printf("int min = %d\n", INT_MIN);
  printf("unsigned int max = %u\n", UINT_MAX);
  printf("long max = %ld\n", LONG_MAX);
  printf("long min = %ld\n", LONG_MIN);
  printf("unsigned long max = %lu\n", ULONG_MAX);
  printf("long long max = %lld\n", LLONG_MAX);
  printf("long long min = %lld\n", LLONG_MIN);
  printf("unsigned long long max = %llu\n", ULLONG_MAX);
  printf("Bits in char = %d\n", CHAR_BIT);
  printf("char max = %d\n", CHAR_MAX);
  printf("char min = %d\n", CHAR_MIN);
  printf("signed char max = %d\n", SCHAR_MAX);
  printf("signed char min = %d\n", SCHAR_MIN);
  printf("unsigned char max = %u\n", UCHAR_MAX);
  return 0;
}
