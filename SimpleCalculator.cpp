# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Enter operator: a, s, m, d: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch(op) {

    case 'a':
      cout << num1 << " + " << num2 << " = " << num1 + num2<<endl;
      break;

    case 's':
      cout << num1 << " - " << num2 << " = " << num1 - num2<<endl;
      break;

    case 'm':
      cout << num1 << " * " << num2 << " = " << num1 * num2<<endl;
      break;

    case 'd':
      cout << num1 << " / " << num2 << " = " << num1 / num2<<endl;
      break;

    default:
      
      cout << "Error! operator is not correct";
      break;
  }

  return 0;
}
