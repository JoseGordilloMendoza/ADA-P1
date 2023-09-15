#include <iostream>
using namespace std;
int main()
{   
    int cantidadNums=0;
    cout << "Bienvenido, por favor ingresa la cantidad de datos: ";
    cin >> cantidadNums;
    int numeros[cantidadNums];
    int multiplicacion = 1;
    for (int i=0;i<=cantidadNums-1;i++)
    {   
        cout << "Ingrese el número " << i + 1 << ": ";   
        cin >> numeros[i];
        multiplicacion *= numeros[i];
    }
    cout<<"La multiplicacion es: "<<multiplicacion;
    printf("\n");
    return 0;
}
