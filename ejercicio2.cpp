#include <iostream>
#include <string>

using namespace std;

int main(){

string x="red pepper";
string word;
string wordprint = "[";
char temp = 0;

int contador = 0;

const int mayus1 = 65, mayus2 = 90, minus1 = 97, minus2 = 122, espacio = 32;


cout << "Ingrese sus dos palabras: "<< endl;
//getline(cin, palabras);

do
{
temp = x[contador];
contador++;
word += temp;
if (x[contador] == espacio)
{
    word += "]";
    wordprint += word;
    wordprint += "\n";
    word = "";
    wordprint += "[";
}
}while(temp != 0);

cout << wordprint << endl;

/*do
{
    contador ++;

    int letra;
    letra = x[contador];

    if ((letra >= mayus1 &&  letra <= mayus2) || (letra >= minus1 && letra <= minus2 || (letra == espacio)) )
    {
        cantidadLetras ++;
    }else 
    {
        cantidadLetras ++;
        
        break;
    }

    if ((letra == espacio))
    {
            primeraPalabra = cantidadLetras;
    }

}while (contador < 100);


*/

    return 0;
}