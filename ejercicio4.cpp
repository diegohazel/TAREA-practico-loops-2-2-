#include <iostream>
#include <string>

using namespace std;

int main(){

    int numero;

    cout << "Bienvenido al programa para CALCULAR SU FACTORIAL" << endl;
    
    do
    {
        
        cout << "Ingrese su numero:" << endl;
        cin >> numero;

        if (numero < 0)
        {
            cout << "  El numero es negativo. Intentelo de nuevo" << endl;
        }else if (numero > 14)
        {
            cout << "El numero es muy grande. Intentelo de nuevo" << endl;
        }else if (numero == 0)
        {
            cout << "El numero es 0, tu resultado dara 0. Intentelo de nuevo" << endl;

        }
    }while(numero <= 0 || numero > 14);

    


    return 0;
}