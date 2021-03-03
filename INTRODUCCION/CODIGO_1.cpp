#include <iostream>
#include <stdlib.h>
using namespace std;

void suma (int a,int b);

int main()
{
   int N1,N2;
   cout << "INTRODUZCA EL PRIMER VALOR OPERADO" << endl;
   cin>>N1;
   cout<<("INTRODUZCA EL VALOR DEL SEGUNDO OPERADOR")<< endl;
   cin>>N2;

suma(N1,N2);
    return 0;
}
void suma (int a,int b){
int c=a+b;

printf("el resultado de la suma de %d + %d es igual a %d",a,b,c);
}
