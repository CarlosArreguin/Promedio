#include <iostream>


using namespace std;

int main(int argc, char *argv[]) /// Definir los argumentos y matrices utilizadas en las lienas de comandos
{
    int cantidad = 0; /// Definir la variable 'cantidad' tipo entero
    int i = 0; /// Definir la variable 'i' tipo entero
    int j = 0; /// Definir la variable 'j' tipo entero
    int numero = 0; /// Definir la variable 'numero' tipo entero
    float prom = 0; /// Definir la variable 'prom' tipo float
    float may = 0; /// Definir la variable 'may' tipo float
    float men = 0; /// Definir la variable 'men' tipo float
    float suma = 0; /// Definir la variable 'suma' tipo float
    cout << "Carlos Ivan Arreguin Cabrera" << endl;
    cout << "4to B" << endl;
    cout << "Tecnologias de la Informacion" << endl;
    cout << "Este programa calcula el promedio, el numero mayor y menor de la siguiente serie de numeros" << endl;
    cout<<"Ingrese la cantidad de numeros: " << endl;
    cin>>cantidad; /// Pide al usuario el numero de datos a promediar

    int numeros[cantidad]; /// Declarar variable numeros aplicando el arreglo
    for (i=0; i<cantidad; i++) /// Se crea un ciclo for para ingresar los numeor spedidos por el usuario
    {
        cout<<"Ingrese el numero:"<< i+1 << endl; /// Imprime la instruccion de pantalla
        cin>>numeros[i]; /// Pide al usuario el valor
        (suma = suma + numeros[i]); /// Aplica la suma de dichos valores
    }
    for(i=0; i<cantidad; i++) /// Este ciclo for da funcionamiento para llevar el calculo de numeor mayor
    {
        for(j=i+1; j<cantidad; j++) /// Se abre nuevamente otro ciclo para calcluar el numero menor
        {
            if(numeros[j]<numeros[i]) /// Se aplica la igualacion de condiciones
            {
                numero=numeros[j];
                numeros[j]=numeros[i];
                numeros[i]=numero;
            }
        }
    }
    men = numeros[0]; /// Se calcula el numero mayor de la serie de numeros
    may = numeros[cantidad-1]; /// Se calcula el numero menor de la serie de numeros

    (prom = suma/cantidad); /// Se calcula el promedio total

    cout<< "El promedio total es: "<< prom << endl; /// Imprime el promedio final
    cout<< "El numero mayor es: "<< may << endl; /// Imprime numero mayor
    cout<< "El numero menor es: "<< men << endl; /// Imprime numero menor


    return 0;
}
