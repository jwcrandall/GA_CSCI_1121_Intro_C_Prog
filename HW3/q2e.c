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
  char first_word[100], second_word[100];
  char chars[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  printf("Enter the first word:");
  gets(first_word);
  printf("%s\n", first_word);
  printf("Enter the second word: ");
  gets(second_word);
  printf("%s\n", second_word);

int i;
  for (i=0; i<26; i++)
  {
    if (test_letter(chars[i], first_word) == test_letter(chars[i], second_word))
    {
      printf("The two words you entered are X-ish\n");
    }
    else
    {
      printf("The two words are not X-ish\n");
    }

  }


}
