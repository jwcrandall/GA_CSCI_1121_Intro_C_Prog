#include <stdio.h>
int main(void){
  printf("\a"); //Audible alert//
  printf("This\b\b\b is a text\n");
  printf("\75\n");//The octal number 75 corresponds to the '=' character.
  printf("This\tis\ta\x9text\n"); //The hexadecminal number 9 correspodns to the horizontal tab.
  printf("This is a \"text\'\n");
  printf("This is a \\text\\\n");
  printf("Sample\rtext\n"); //the \r moves the cursor back to the beginning of the line. Samp is overwritten and text is print. As a result, the output is textle.
  printf("This printf uses three lines, but the \
      text will appear \
      on one line\n");
  return 0;
}
