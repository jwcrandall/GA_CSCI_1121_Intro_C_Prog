#include<stdio.h>
#include<string.h>
struct Books{
  char title[50];
  char author[50];
  char subject[100];
  int book_id;
};
//function declaration
void printBook(struct Books *book );
int main() {
  struct Books Book1; //Declare Book1 of type Book
  struct Books Book2; //Declare Book2 of type Book
  //book 1 specification
  strcpy( Book1.title, "C Programming");
  strcpy( Book1.author, "Kernighan");
  strcpy( Book1.subject, "Programming");
  Book1.book_id = 6495407;
  //book 2 specification
  strcpy( Book2.title, "Differential Equations");
  strcpy( Book2.author, "Zill");
  strcpy( Book2.subject, "Applied Science");
  Book2.book_id = 6495700;
  //print Book1 info by passing address of Book1
  printBook( &Book1 );
  //print Book2 ifro by passing address of Book2
  printBook( &Book2);
  return 0;
}
void printBook( struct Books *book ){
  printf( "Book title: %s\n", book->title);
  printf( "Book author : %s\n", book->author);
  printf( "Book subject : %s\n", book ->subject);
  printf( "Book book_id : %d\n", book ->book_id);
}


