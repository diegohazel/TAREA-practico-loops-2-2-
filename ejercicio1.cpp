#include <iostream>
#include <string>

using namespace std;

int main (){
   
string x = "pruebaloco";
int contador = 0;

   do
    {
        cout << x[contador] << endl;
        contador ++;

        int letra;
        letra = x[contador];
        cout << letra << endl;
    }while (contador < 5);



return 0;
}