#include <iostream>
#include <cctype>

int main()
{
  char a = 'a';
  char A = toupper(a);

  std::cout << a << std::endl;
  std::cout << A << std::endl;

  // Uh... what?
  // https://www.ascii-code.com/
  int f = 102;
  char F = toupper(f);

  std::cout << f << std::endl;
  std::cout << static_cast<char>(f) << std::endl;
  std::cout << F << std::endl;

  return 0;
}
