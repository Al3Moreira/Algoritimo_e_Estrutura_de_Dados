#include <iostream>

using namespace std;

int main()
{
	setlocale (LC_ALL,"portuguese");
	int inicio, fim, soma=0;
	cout << "Valor In�cial: "; cin >> inicio;
	cout << "Valor final: "; cin >> fim;
	if (inicio <= fim)
	{
		for (int x=inicio; x < fim; x++)
		{
			if (x%2==1)
			{
				soma +=x;
			}
		}
		cout << "Soma dos �mpares desse intervalo: " << soma;
	}
	else 
	{
		cout << "Valor inv�lido!!";
	}
	return 0;
}