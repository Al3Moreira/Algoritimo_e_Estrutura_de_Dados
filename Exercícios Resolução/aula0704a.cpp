/*
1- Crie um programa que leia um valor entre 5 e 155(CERTIFIQUE-SE que o valor 
est� nesse intervalo) ao final informe o dobro.

2- Fa�a um programa que liste 5 op��es e execute a fun��o definida em cada op��o.
    Programa Tabajara
    1- Soma de 2 valores
    2- Produto de 2 valores
    3- Diferen�a entre 2 valores
    4- Divis�o entre 2 n�meros(quociente)
    5- Sair
 OBS: Programa somente ser� encerrado quando o usu�rio escolher a op��o 5.
 
3- Crie um programa que leia a quantidade de alunos de uma turma, leia a idade 
de cada um e ao final imprima a m�dia das idades.
*/
#include <iostream>
using namespace std;

int main()
{
	/*
	int valor=0;
	while(valor<5 || valor >155)
	{
		cout<< "Informe um valor entre 5 e 155: ";
		cin >> valor;
	}
	cout <<"Dobro = "<<(valor*2);	
	*/
    int valor;
    cout<< "Informe um valor entre 5 e 155: ";
    cin >> valor;
	while(valor<5 || valor >155)
	{
		cout<< "Valor inv�lido. Informe um valor entre 5 e 155: ";
		cin >> valor;
	}
	cout <<"Dobro = "<<(valor*2);	
	return 0;
}









