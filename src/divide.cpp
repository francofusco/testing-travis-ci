#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {
  // check number of inputs
  if(argc < 3) {
    std::cerr << "Expected two arguments, got " << (argc-1) << std::endl;
    return 1;
  }
  // parse the values
  int a = std::atoi(argv[1]);
  int b = std::atoi(argv[2]);
  // check division by zero
  if(b == 0)
    throw std::runtime_error("Cannot divide by zero");
  std::cout << a << "/" << b << " = " << (a/b) << std::endl;
  return 0;
}
