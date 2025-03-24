#include <iostream>
#include <string>

using namespace std;

int main(){

    int numero;
    bool diego;

    cout << "Bienvenido al programa para CALCULAR SU FACTORIAL" << endl;
    
    do
    {
        
        cout << "Ingrese su numero:" << endl;
        cin >> numero;

        diego = true;
        if (numero < 0)
        {
            cout << "  El numero es negativo. Intentelo de nuevo" << endl;
            diego = false;
        }else if (numero > 14)
        {
            cout << "El numero es muy grande. Intentelo de nuevo" << endl;
            diego = false;
        }else if (numero == 0)
        {
            cout << "El numero es 0, tu resultado dara 0. Intentelo de nuevo" << endl;
                diego = false;
        }
    }while(diego == false);

int resultado = 1;
int factorial;
int numero2 = numero;
int control = 1; 
int control2 = numero - control;
//resultado tiene que multiplicar por -1 hasta que CONTROL 2 == 0


while(numero != control)
{
numero2 = numero2 * (numero - control);
//resultado += factorial;
//numero2 --;
control++;
resultado = numero2;
}

cout<< "El factorial de :\n "<< numero << " Es : \n" << resultado << endl;

    return 0;
}