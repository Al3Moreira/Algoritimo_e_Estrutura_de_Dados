#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"portuguese");
	int quicas=185, ze=140, anos=0;
	while(ze < quicas)
	{
		quicas +=1;
		ze +=3;
		anos ++;
	}	
	cout << "Levar� " << anos << " anos pra Z� Lel� ser mais alto que Quicas";
	return 0;
}
