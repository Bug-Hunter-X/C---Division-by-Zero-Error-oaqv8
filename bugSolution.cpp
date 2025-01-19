#include <iostream>

int main() {
  int a = 5;
  int b = 0;

  if (b == 0) {
    std::cerr << "Error: Division by zero!" << std::endl;
    return 1; // Indicate an error
  }

  int c = a / b;
  std::cout << "Result: " << c << std::endl;
  return 0;
}
