#include <iostream>
#include <string>

using namespace std;

int main (){
   
string x ;
int contador = 0;
int cantidadLetras = 0;
int primeraPalabra = 0;

const int mayus1 = 65, mayus2 = 90, minus1 = 97, minus2 = 122, espacio = 32;

//ASCII Mayusculas: 65 - 90  
// Minusculas: 97 - 122
// Espacio: 32 


cout << "Ingrese 2 palabras: \n" << endl;
//cin >> x;    ESTO NO FUNCIONA
getline (cin, x);  //nota: Acordarme cada vez que voy a ingresar mas de 2 palabras en un string se usa el getline.

   do
    {
        //cout << x[contador] << endl;
        contador ++;

        int letra;
        letra = x[contador];
       // cout << letra << endl;

        if ((letra >= mayus1 &&  letra <= mayus2) || (letra >= minus1 && letra <= minus2 || (letra == espacio)) )
        {
            cantidadLetras ++;
        }else 
        {
            cantidadLetras ++; //agregando esta linea para arreglar el bug de el reultado final.

            break;
        }

        if ((letra == espacio))
        {
                primeraPalabra = cantidadLetras;
        }

    }while (contador < 100);

    //cout << "La primera palabra es : " << primeraPalabra << endl;
    //cout << "cantidad de letras es : " << cantidadLetras << endl;
    
    cout << primeraPalabra << endl;

    cout << cantidadLetras << endl;


return 0;
}