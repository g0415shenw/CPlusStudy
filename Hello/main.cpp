#include <iostream>

int main(int, char **)
{
  std::cout << "Hello, world!\n";
  char aa[33] = {0};
  sprintf(aa, "%d", 4294967295);
}
