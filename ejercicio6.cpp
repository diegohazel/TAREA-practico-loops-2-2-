#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int numero;
cout << "Ingrese un numero: ";
  do {
    cin >>numero;

      if (numero <= 9)
      {
       cout << "Numero debe tener almenos 2 digitos" << endl;
      }
  }while (numero <= 9);

    int numTemp = numero, num1, num2;

  num1 = numTemp % 10;
  num2 = numTemp / 10;

  numTemp = num1 + num2;

  cout << "Su numero sumado es :" << numTemp << endl;







  return 0;
}