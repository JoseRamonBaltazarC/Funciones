#include <iostream>
#include<stdlib.h>
using namespace std;

void max (int a,int b);

int main()
{
    int N1,N2;
    cout << "introduzca el valor del primer numero" << endl;
    cin>>N1;
    cout<<"introduce el segundo valor"<<endl;
    cin>>N2;
    max(N1,N2);
    return 0;
}

void max(int a,int b){

if(a>b){
    cout<<"el numero mayor es "<<a<<endl;
}
else if (a<b){
    cout<<"el numero mayor es:"<<b<<endl;
}
else cout<<"error"<<endl;
}
