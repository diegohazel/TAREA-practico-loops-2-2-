#include <iostream>
#include <string>

using namespace std;

int main(){

    int numero;

    
    do
    {
        
        cin >> numero;

        if (numero < 0)
        {
            cout << "  El numero es negativo. Intentelo de nuevo" << endl;
        }else if (numero > 14)
        {
            cout << "El numero es muy grande. Intentelo de nuevo" << endl;
        }
    }while(numero < 0 || numero > 14);


    return 0;
}