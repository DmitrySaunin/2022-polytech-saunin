#include <iostream>
#include <cmath>

int main() {
  float n1, n2, res;
  char op;
  std:: cout << " > ";
  std::cin >> n1 >> op >> n2;
  switch(op) {
    case '+': res = n1 + n2; break;
    case '-': res = n1 - n2; break;
    case '*': res = n1 * n2; break;
    case '/': res = n1 / n2; break;
    case '^': res = pow(n1, n2); break;
    default: return 1; break;
  }
  std::cout << res << std::endl;
  return main();
}
