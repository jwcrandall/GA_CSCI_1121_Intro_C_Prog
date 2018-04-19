#include <stdio.h>
#include <string.h>
/* typedef can be used with structure to define a new data type
   and then use that data type to define strucutre variables directly */
typedef struct Books {
  char title[30];
  char author[30];
  char subject[50];
  int book_id;
}Book;
int main(){
  Book book;
  //book 1 specification
  strcpy( book.title, "C Programming");
  strcpy( book.author, "Kernighan");
  strcpy( book.subject, "Programming");
  book.book_id = 6495407;
  printf( "Book title : %s\n", book.title);
  printf( "Book author : %s\n", book.author);
  printf( "Book subject : %s\n", book.subject);
  printf( "Book book_id: %d\n", book.book_id);
  return 0;
}

