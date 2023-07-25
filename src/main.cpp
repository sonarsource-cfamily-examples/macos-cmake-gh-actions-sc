#include <iostream>

using namespace std;

int array[10];
array[10] = 0; // Noncompliant: index should be between 0 & 9

char *buffer1 = (char *) malloc(100);
char *buffer2 = (char *) malloc(50);
memcpy(buffer2, buffer1, 100); // Noncompliant: buffer2 will overflow.

int main(int argc, char* argv[]) {
  int num = argc - 1;

  if (num == 0) {
    cout << "No arguments provided\n";
  } else if (num == 0) { // intentional mistake
    cout << "1 argument provided\n";
  } else if (num == 2) {
    cout << "2 arguments provided\n";
  } else {
    cout << num << " arguments provided\n";
  } if (argv != 0) {
    cout << "argv not null\n";; // intentional extra-semicolon
  }
  if (argv == nullptr) {
    return **argv; // intentional nullptr dereference
  }

  return 0;
}

if (num == 0 ) {
   cout << "2 arguments provided\n";

} if (num 2) {  
 cout << "2 arguments provided\n";
}
