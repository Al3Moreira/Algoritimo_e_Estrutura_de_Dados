
#include <iostream>
using namespace std;
 
int main()
{
	float v1, v2;
	int opcao;
	
	while(opcao !=5)
	{
	    cout<<"Programa Tabajara"<< endl;
	    cout<<"1- Soma  "<<endl;
	    cout<<"2- Produto "<<endl;
	    cout<<"3- Diferen�a "<<endl;
	    cout<<"4- Divis�o "<<endl;
	    cout<<"5- Sair"<<endl;
		cout<<"Informe a op��o desejada: ";
		cin >> opcao;
		while(opcao<1 || opcao>5)
		{
			cout<<"op��o � inv�lida."<<endl;
			cout<<"Informe outra op��o: ";
		    cin >> opcao;
		}
		switch(opcao)
		{
		case 1:
			cout<<"Digite o valor1: "; cin >> v1;
			cout<<"Digite o valor2: "; cin >> v2;
			cout<<"Soma = "<<(v1+v2)<<endl;
			break;
		case 2:
			cout<<"Digite o valor1: "; cin >> v1;
			cout<<"Digite o valor2: "; cin >> v2;
			cout<<"Produto = "<<(v1*v2)<<endl;
			break;
		case 3:
			cout<<"Digite o valor1: "; cin >> v1;
			cout<<"Digite o valor2: "; cin >> v2;
			cout<<"Dieren�a = "<<(v1-v2)<<endl;
			break;
	    case 4:
			cout<<"Digite o valor1: "; cin >> v1;
			cout<<"Digite o valor2: "; cin >> v2;
			cout<<"Divis�o = "<<(v1/v2)<<endl;
			break;		
		default:
			cout<<"Encerrando o programa";
			break;
		}	
	}
	return 0;
}