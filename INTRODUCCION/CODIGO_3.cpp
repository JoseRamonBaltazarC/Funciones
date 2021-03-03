#include <iostream>
#include <stdlib.h>

using namespace std;

int max(int a,int b);
int main()
{
    int N1,N2,N3;
    cout<<"INTRODUZCA EL VALOR DEL PRIMER NUMERO"<<endl;
    cin>>N1;
    cout<<"INTRODUZCA EL VALOR DEL SEGUNDO NUMERO"<<endl;
    cin>>N2;
    cout<<"INTRODUZCA EL VALOR DEL TERCER NUMERO"<<endl;
    cin>>N3;
    int max1=max(N1,N2);
    int max2=max(max1,N3);
   cout<<"EL NUMERO MAYOR ES:"<<max2<<endl;
    return 0;
}
int max(int a,int b){
int c;
if(a>b){
    c=a;
}
else{
    c=b;
}
return c;
}
