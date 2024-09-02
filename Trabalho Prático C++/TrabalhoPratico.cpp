#include <iostream>
#include <locale>

/*Cores*/
#define RESET         "\033[0m"
#define RED           "\033[31m"
#define CYAN          "\033[36m"
#define LIGHT_GREEN   "\033[92m"
#define LIGHT_CYAN    "\033[96m"
#define LIGHT_RED     "\033[91m"
#define WHITE   	  "\033[97m" 

using namespace std;

/*Estrutura das Variaveis dos Produtos/Servi�os*/
struct TProduto 
{
	string nome, codigo, desc, preco, quant_est;
};

int main()
{
	setlocale (LC_ALL,"portuguese");
	
	/* Declara��o de vari�veis */
	TProduto prods[1000];
	string pesquisa;                  /*pesquisa do �suario*/
	int x=1, op, op_pesquisa, op_alt; /*auxiliar referente as posi��es no vetor, op��o de  pesquisa e op��o de altera��o*/
	bool prod_n_cad;                  /*produtos n�o cadastrados*/
	char exps;                        /*excluir produtos*/
	do {
		 /* Menu de op��es */
		cout << CYAN << "\n------------++++++------------\n" << RESET;
		cout << CYAN << "\n       MENU DE OP��ES:\n" << RESET ;
		cout << "1 " << "- Cadastrar Produto/Servi�o\n" ;
		cout << "2 - Pesquisa Produto/Servi�o\n" ;
		cout << "3 - Alterar Produto/Servi�o\n" ;
		cout << "4 - Excluir Produto/Servi�o\n" ;
		cout << "5 - Sair\n" ;
		cout << CYAN << "> " << RESET; 
		cin >> op;
		cout << CYAN << "------------++++++------------\n" << RESET;
		cout << endl;
		
		
		switch(op)
		{
		case 1: 
			  /* Cadastro de Produto/Servi�o */
			cout << LIGHT_CYAN << "CADASTRO DE PRODUTO/SERVI�O\n" << RESET;
			if (x<=999)
			{
				cin.ignore();
				cout << "Nome do Produto/Servi�o: "; getline(cin,prods[x].nome);
				cout << "C�digo do Produto/Servi�o: "; getline(cin,prods[x].codigo);
				cout << "Descri��o: "; getline(cin,prods[x].desc);
				cout << "Pre�o (X.XX) R$: "; getline(cin,prods[x].preco);
				cout << "Quantidade em Estoque: "; getline(cin,prods[x].quant_est);
				x+=1;
			}
			else 
			{
				cout << RED <<"\nM�MORIA CHEIA\n" << RESET;
			}
			break;
		
		
		case 2:
			 /* Pesquisa de Produto/Servi�o */
			cout << LIGHT_CYAN << "PESQUISA POR PRODUTO/SERVI�O:\n" << RESET;
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por C�digo\n";
			cout << LIGHT_CYAN << "> " << RESET; 
			cin >> op_pesquisa;
			cout << endl;
			
			if (op_pesquisa==1)
			{
				cin.ignore();
				cout << "Digite o Nome do Produto/Servi�o: "; getline(cin,pesquisa);
				cout << endl;
				for(int n=0; n <x; n++)
				{
					if (pesquisa==prods[n].nome)
					{
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
					   	cout << WHITE << "C�digo do Produto/Servi�o: " << prods[n].codigo << RESET <<endl;
						cout << WHITE << "Descri��o: " << prods[n].desc  << RESET <<endl;
						cout << WHITE << "Pre�o R$: " << prods[n].preco  << RESET <<endl;
						cout << WHITE << "Quantidade em Estoque: " << prods[n].quant_est  << RESET <<endl;
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout << endl;
						prod_n_cad = true;
						break;
					}
					else 
					{
					   	prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
				   	cout << RED << "\nPRODUTO/SERVI�O N�O CADASTRADO\n" << RESET;	
					cout << endl;
				}
			}

			if (op_pesquisa==2)
   	        {	
			   	cin.ignore();
				cout << "Digite o C�digo do Produto/Servi�o: "; getline(cin,pesquisa);
				cout << endl;
				for(int c=0; c <x; c++)
				{
					if (pesquisa==prods[c].codigo)
					{
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
				   		cout << WHITE << "Nome do Produto/Servi�o: " << prods[c].nome << RESET <<endl;
						cout << WHITE << "Descri��o: " << prods[c].desc  << RESET <<endl;
						cout << WHITE << "Pre�o R$: " << prods[c].preco  << RESET <<endl;
						cout << WHITE << "Quantidade em Estoque: " << prods[c].quant_est  << RESET <<endl;
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout << endl;
						prod_n_cad = true;
						break;
					}
					else 
					{
				   		prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
					cout << RED << "\nPRODUTO/SERVI�O N�O CADASTRADO\n" << RESET;	
					cout << endl;
				}	
			
   	        }
			   
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << RED << "OP��O DE PESQUISA INV�LIDA!\n" << RESET;
				prod_n_cad = true;
			}
			break;	
		
		
		case 3:
			 /* Altera��o de Produto/Servi�o */
			cout << LIGHT_CYAN << "ALTERAR PRODUTO/SERVI�O\n" << RESET;
			cout << "Pesquise o  produto/servi�o que deja alterar\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por C�digo\n";
			cout << LIGHT_CYAN  << "> " << RESET; 
			cin >> op_pesquisa;
			cout << endl;
			
			if (op_pesquisa==1)
			{
				cin.ignore();
				cout << "Digite o Nome do Produto/Servi�o: "; getline(cin,pesquisa);
				cout << endl;
				for(int n=0; n <x; n++)
				{
					if (pesquisa==prods[n].nome)
					{
						cout << "O que deseja alterar\n";
						cout << "1 - Nome\n";
						cout << "2 - C�digo\n";
						cout << "3 - Descri��o\n";
						cout << "4 - Pre�o\n";
						cout << "5 - Quantidade em Estoque\n";
						cout << "6 - Todos os Campos\n";
						cout << "> "; 
						cin >> op_alt;
						switch(op_alt)
						{
						case 1:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE<< "Nome: "<< prods[n].nome  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Servi�o: "; getline(cin,prods[n].nome);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 2:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "C�digo: "<< prods[n].codigo  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo C�digo do Produto/Servi�o: "; getline(cin,prods[n].codigo);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 3:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "Descri��o: "<< prods[n].desc  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Nova Descri��o: "; getline(cin,prods[n].desc);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 4:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "Pre�o R$: "<< prods[n].preco  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Pre�o R$ (X.XX): "; getline(cin,prods[n].preco);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 5:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "Quantidade em Estoque: "<< prods[n].quant_est  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[n].quant_est);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 6:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campos:\n" << RESET;
							cout << WHITE << "Nome: "<< prods[n].nome  << RESET <<endl;
							cout << WHITE << "C�digo: "<< prods[n].codigo  << RESET <<endl;
							cout << WHITE << "Descri��o: "<< prods[n].desc  << RESET <<endl;
							cout << WHITE << "Pre�o R$: "<< prods[n].preco  << RESET<<endl;
							cout << WHITE << "Quantidade em Estoque: "<< prods[n].quant_est  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Servi�o: "; getline(cin,prods[n].nome);
							cout << "Novo C�digo do Produto/Servi�o: "; getline(cin,prods[n].codigo);
							cout << "Nova Descri��o: "; getline(cin,prods[n].desc);
							cout << "Novo Pre�o: "; getline(cin,prods[n].preco);
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[n].quant_est);
							cout << "CAMPOS ALTERADOS!!\n";
							break;
						default:
							cout << RED << "\nOP��O INV�LIDA\n" << RESET;
							break;
						}
						prod_n_cad = true;
						break;
						
					}
					else 
					{
					   	prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
				   	cout << RED << "\nPRODUTO/SERVI�O N�O CADASTRADO\n" << RESET;			
					cout << endl;
				}
			}
				
				
			if (op_pesquisa==2)
			{
				cin.ignore();
				cout << "Digite o C�digo do Produto/Servi�o: "; getline(cin,pesquisa);
				cout << endl;
				for(int c=0; c <x; c++)
				{
					if (pesquisa==prods[c].codigo)
					{
						cout << "O que deseja alterar\n";
						cout << "1 - Nome\n";
						cout << "2 - C�digo\n";
						cout << "3 - Descri��o\n";
						cout << "4 - Pre�o\n";
						cout << "5 - Quantidade em Estoque\n";
						cout << "6 - Todos os Campos\n";
						cout << "> "; 
						cin >> op_alt;
						switch(op_alt)
						{
						case 1:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "Nome: "<< prods[c].nome  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Servi�o: "; getline(cin,prods[c].nome);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 2:
						    cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "C�digo: "<< prods[c].codigo  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Novo C�digo do Produto/Servi�o: "; getline(cin,prods[c].codigo);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 3:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "Descri��o: "<< prods[c].desc  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Nova Descri��o: "; getline(cin,prods[c].desc);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 4:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "Pre�o R$: "<< prods[c].preco  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Novo Pre�o R$ (X.XX): "; getline(cin,prods[c].preco);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 5:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "Quantidade em Estoque: "<< prods[c].quant_est  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << endl;
							cin.ignore();
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[c].quant_est);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 6:
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout << WHITE <<  "Situa��o Atual do Campo:\n" << RESET;
							cout << WHITE << "Nome: "<< prods[c].nome  << RESET <<endl;
							cout << WHITE << "C�digo: "<< prods[c].codigo  << RESET <<endl;
							cout << WHITE << "Descri��o: "<< prods[c].desc  << RESET <<endl;
							cout << WHITE << "Pre�o R$: "<< prods[c].preco  << RESET <<endl;
							cout << WHITE << "Quantidade em Estoque: "<< prods[c].quant_est  << RESET <<endl;
							cout << LIGHT_CYAN << "------------------------------\n" << RESET;
							cout <<endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Servi�o: "; getline(cin,prods[c].nome);
							cout << "Novo C�digo do Produto/Servi�o: "; getline(cin,prods[c].codigo);
							cout << "Nova Descri��o: "; getline(cin,prods[c].desc);
							cout << "Novo Pre�o R$ (X.XX): "; getline(cin,prods[c].preco);
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[c].quant_est);
							cout << "CAMPOS ALTERADOS!\n";
							break;
						default:
							cout << RED << "\nOP��O INV�LIDA\n" << RESET;
							break;
						}
						prod_n_cad = true;
						break;
					}
					
					else 
					{
					   	prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
				   	cout << RED << "\nPRODUTO/SERVI�O N�O CADASTRADO\n" << RESET;	
					cout << endl;
				}
			}
			
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << RED << "OP��O DE PESQUISA INV�LIDA!\n" << RESET;
				prod_n_cad = true;
			}

			break;
		
		
		case 4:
			/* Exclus�o de Produto/Servi�o */
			cout << LIGHT_RED << "EXCLUIR PRODUTOS/SERVI�OS\n" << RESET;
			cout << "Pesquise o produto/servi�o que deseja excluir:\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por C�digo\n";
			cout << LIGHT_RED << "> " << RESET; 
			cin >> op_pesquisa;
			cout << endl;
			
			if (op_pesquisa==1)
			{
				cin.ignore();
				cout << "Digite o Nome do Produto/Servi�o: "; getline(cin,pesquisa);
				cout << endl;
				for(int n=0; n <x; n++)
				{
					if (pesquisa==prods[n].nome) 
					{
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout << WHITE << "Situa��o Atual dos Campos:\n"  << RESET;
						cout << WHITE << "Nome: "<< prods[n].nome  << RESET <<endl;
						cout << WHITE << "C�digo: "<< prods[n].codigo  << RESET <<endl;
						cout << WHITE << "Descri��o: "<< prods[n].desc  << RESET <<endl;
						cout << WHITE << "Pre�o R$: "<< prods[n].preco  << RESET <<endl;
						cout << WHITE << "Quantidade em Estoque: "<< prods[n].quant_est  << RESET <<endl;
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout <<endl;
						
						cout << RED << "ATEN��O!!!\n" << RESET;
						cout << "Deseja excluir o Produto/Servi�o?(S/N) "; 
						cin >> exps;
						if (toupper(exps)=='S') 
						{
							prods[n].nome = "";
							prods[n].codigo = "";
							prods[n].desc = "";
							prods[n].preco = "";
							prods[n].quant_est = "";
							cout << LIGHT_RED<< "\nPRODUTO/SERVI�O EXCLU�DO!!!\n" << RESET;
							prod_n_cad = true;
							break;
						}
						else 
						{
							cout << LIGHT_GREEN << "\nVoltando ao Menu...\n" << RESET;
							prod_n_cad = true;
							break;
						}
					}
					else 
					{
						prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
				   	cout << RED << "\nProduto/Servi�o n�o cadastrado\n" << RESET;	
					cout << endl;
				}	
			}
			
			if (op_pesquisa==2)
			{
				cin.ignore();
				cout << "Digite o C�digo do Produto/Servi�o: "; getline(cin,pesquisa);
				cout << endl;
				for(int c=0; c <x; c++)
				{ 	 	
					if (pesquisa==prods[c].codigo) 
					{
                        cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout << "Situa��o Atual dos Campos:\n";
						cout << "Nome: "<< prods[c].nome <<endl;
						cout << "C�digo: "<< prods[c].codigo <<endl;
						cout << "Descri��o: "<< prods[c].desc <<endl;
						cout << "Pre�o R$: "<< prods[c].preco <<endl;
						cout << "Quantidade em Estoque: "<< prods[c].quant_est <<endl;
						cout << LIGHT_CYAN << "------------------------------\n" << RESET;
						cout <<endl;
						cout << RED << "ATEN��O!!!\n" << RESET;
						cout << "Deseja excluir o Produto/Servi�o?(S/N) "; 
						cin >> exps;
						if (toupper(exps)=='S') 
						{
							prods[c].nome = "";
							prods[c].codigo = "";
							prods[c].desc = "";
							prods[c].preco = "";
							prods[c].quant_est = "";
							cout << LIGHT_RED<< "\nPRODUTO/SERVI�O EXCLU�DO!!!\n" << RESET;
							prod_n_cad = true;
							break;
						}
						else 
						{
							cout << LIGHT_GREEN<< "\nVoltando ao Menu...\n" << RESET;
							prod_n_cad = true;
							break;
						}
					}
					else 
					{
						prod_n_cad = false;
					}
				}
				if (prod_n_cad==false)
				{
					cout << RED << "\nPRODUTO/SERVI�O N�O CADASTRADO\n" << RESET;	
					cout << endl;
				}
			}
			
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << RED << "OP��O DE PESQUISA INV�LIDA!\n" << RESET;
				prod_n_cad = true;
			}
			break;
		
		case 5:
			/* Sair do programa */
			cout << LIGHT_CYAN << "\n----------------------------------------\n" << RESET;
    		cout << WHITE  << "Muito obrigado por utilizar o sistema!\n" << RESET;
    		cout << WHITE << "           At� a pr�xima.\n" << RESET;
    		cout << LIGHT_CYAN << "----------------------------------------\n" << RESET;
    		cout << LIGHT_GREEN<< "         Encerrando programa...\n" << RESET;
    		cout << LIGHT_CYAN << "----------------------------------------\n" << RESET;
			
			break;
		default:
			cout << RED << "\nOP��O INV�LIDA\n" << RESET;
			break;
		}
		
	}while(op!=5);
	
	
	return 0;
}