#include <iostream>

using namespace  std;

int main()
{
	setlocale (LC_ALL, "portuguese");
	int op, a, b, operador, result;
	do 
	{
		cout << "Deseja: \n";
		cout << "1 - Iniciar opera��o\n";
		cout << "2 - Sair\n";
		cin >> op;
		cout << "----------------------\n";
		cout << endl;
		switch(op)
		{
		case 1:
			cout << "Valor 1: "; cin >> a;
			cout << "Opera��o: \n";
			cout << "1 - Adi��o '+'\n";
			cout << "2 - Subtra��o '-'\n";
			cout << "3 - Multiplica��o '*'\n";
			cout << "4 - Divis�o '/'\n";
			cin >> operador;
			cout << "Valor 2: "; cin >> b;
			switch(operador)
			{
			case 1:
				result = a + b;
				break;
			case 2:
				result = a - b;
				break;
			case 3:
				result = a * b;
				break;
			case 4:
				result = a / b;
				break;
			default: 
				cout << "Operador Inv�lido";
				break;
			}
			cout << "Resultado: " << result << endl;
			cout << "----------------------\n";
			break;
		case 2: 
			cout << "Encerrando programa...\n";
			cout << "----------------------\n";
			break;
		default:
			cout << "Op��o Inv�lida";
			break;
		}
	}while (op!=2);
	return 0;
}