#include <stdio.h>

int test_letter(char letter, char* string)
{
  int character = string[0];
  int i = 0;
  while(character != '\0') {
    if(character == letter) {
      return 1;
    }

    i++;
    character = string[i];
  }

  return 0;
}

int main(){
  char string[100];
  printf("Enter a word:");
  gets(string);
  printf("%s", string);
  if (test_letter('e', string) && test_letter('l', string) && test_letter('f', string))
  {
    printf("The word is a elfish word\n");
  }
  return 0;
}
