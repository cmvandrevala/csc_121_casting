#include <iostream>

int main()
{
  float myFloat = 3.57;
  int myInt = static_cast<int>(myFloat);

  std::cout << "myFloat = " << myFloat << std::endl;
  std::cout << "myInt = " << myInt << std::endl;

  return 0;
}
