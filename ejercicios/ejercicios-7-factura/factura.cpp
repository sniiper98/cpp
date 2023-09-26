#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    //DATOS DE ENTRADA
    double subtotal =0;
    double total =0;
    double impuestos = 0.15;

    cout<< "ingrese el subtotal de la factura:";
    cin>>subtotal;
    //PROCESO
total= subtotal+(subtotal*0.15);

    // DATOS DE SALIDA
cout<<endl;
    cout<<"total a pagar es :"<<total;
    return 0;
}

