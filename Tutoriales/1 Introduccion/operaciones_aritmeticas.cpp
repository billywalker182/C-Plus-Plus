#include<iostream>

using namespace std;

int main(){
	
	int n1,n2, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	cout<<"Digite un Numero: ";
	cin>>n1;
	cout<<"Digite otro Numero: ";
	cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	multiplicacion = n1 * n2;
	division = n1 / n2;
	
	
	cout<<"\nLa suma es: "<<suma<<endl;
	cout<<"La resta es: "<<resta<<endl;
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
	cout<<"La divisi�n es: "<<division<<endl;
	
	
	
	return 0;
}
