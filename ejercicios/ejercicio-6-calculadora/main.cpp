#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv) {
//entrada
int a =0;
int  b= 0;
int resultado1 = 0;
int resultado2 = 0;
int resultado3 = 0;
int resultado4 = 0;

cout<<"ingrese el valor de a";
cout<<endl;
cin>>a;
cout<<endl;
cout<<"ingrese el valor de b";
cin>>b;

//proceso
resultado1=a+b;
resultado2=a-b;
resultado3=a*b;
resultado4=a/b;
//salida
cout<<"resultado de suma:" <<resultado1<<endl;
cout<<"resultado de resta:" <<resultado2<<endl;
cout<<"resultado de multiplicacion:" <<resultado3<<endl;
cout<<"resultado de division:" <<resultado4<<endl;



	return 0;
}
