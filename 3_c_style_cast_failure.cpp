#include <iostream>

int main()
{
  char myChar = 10;

  // C++ style casts are checked by the compiler.
  // C-style casts aren't and can fail at runtime.
  int *myPointer = (int *)&myChar;

  std::cout << "myChar = " << myChar << std::endl;
  std::cout << "myPointer = " << myPointer << std::endl;

  return 0;
}
