#include <iostream>
#include <locale>


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
	string pesquisa;                    /*pesquisa do �suario*/
	int x=1, op, op_pesquisa, op_alt;   /*auxiliar referente as posi��es do vetor, op��o pesquisa e op��o altera��o*/
	bool prod_n_cad;                    /*produtos n�o cadastrados*/
	char exps;                          /*excluir produtos*/
	do 
	{
		 /* Menu de op��es */
		cout << "\n------------++++++------------\n";
		cout << "\n       MENU DE OP��ES:\n" ;
		cout << "1 " << "- Cadastrar Produto/Servi�o\n" ;
		cout << "2 - Pesquisa Produto/Servi�o\n" ;
		cout << "3 - Alterar Produto/Servi�o\n" ;
		cout << "4 - Excluir Produto/Servi�o\n" ;
		cout << "5 - Sair\n" ;
		cout << "> "; 
		cin >> op;
		cout << "------------++++++------------\n";
		cout << endl;
		
		
		switch(op)
		{
		case 1: 
			  /* Cadastro de Produto/Servi�o */
			cout << "CADASTRO DE PRODUTO/SERVI�O\n" ;
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
				cout <<"\nM�MORIA CHEIA\n" ;
			}
			break;
		
		
		case 2:
			 /* Pesquisa de Produto/Servi�o */
			cout << "PESQUISA POR PRODUTO/SERVI�O:\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por C�digo\n";
			cout << "> "; 
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
						cout << "------------------------------\n";
					   	cout << "C�digo do Produto/Servi�o: " << prods[n].codigo <<endl;
						cout << "Descri��o: " << prods[n].desc <<endl;
						cout << "Pre�o R$: " << prods[n].preco <<endl;
						cout << "Quantidade em Estoque: " << prods[n].quant_est <<endl;
						cout << "------------------------------\n";
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
				   	cout << "\nPRODUTO/SERVI�O N�O CADASTRADO\n";	
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
						cout << "------------------------------\n";
				   		cout << "Nome do Produto/Servi�o: " << prods[c].nome <<endl;
						cout << "Descri��o: " << prods[c].desc  <<endl;
						cout << "Pre�o R$: " << prods[c].preco  <<endl;
						cout << "Quantidade em Estoque: " << prods[c].quant_est  <<endl;
						cout << "------------------------------\n" ;
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
					cout << "\nPRODUTO/SERVI�O N�O CADASTRADO\n" ;	
					cout << endl;
				}	
			
   	        }
			   
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << "OP��O DE PESQUISA INV�LIDA!\n";
				prod_n_cad = true;
			}
			break;	
		
		
		case 3:
			 /* Altera��o de Produto/Servi�o */
			cout << "ALTERAR PRODUTO/SERVI�O\n";
			cout << "Pesquise o  produto/servi�o que deja alterar\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por C�digo\n";
			cout << "> "; 
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
							cout << "------------------------------\n" ;
							cout <<  "Situa��o Atual do Campo:\n";
							cout << "Nome: "<< prods[n].nome <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Servi�o: "; getline(cin,prods[n].nome);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 2:
							cout << "------------------------------\n" ;
							cout <<  "Situa��o Atual do Campo:\n" ;
							cout << "C�digo: "<< prods[n].codigo <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Novo C�digo do Produto/Servi�o: "; getline(cin,prods[n].codigo);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 3:
							cout << "------------------------------\n" ;
							cout <<  "Situa��o Atual do Campo:\n" ;
							cout << "Descri��o: "<< prods[n].desc <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Nova Descri��o: "; getline(cin,prods[n].desc);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 4:
							cout << "------------------------------\n";
							cout <<  "Situa��o Atual do Campo:\n";
							cout << "Pre�o R$: "<< prods[n].preco <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Novo Pre�o R$ (X.XX): "; getline(cin,prods[n].preco);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 5:
							cout << "------------------------------\n" ;
							cout <<  "Situa��o Atual do Campo:\n" ;
							cout << "Quantidade em Estoque: "<< prods[n].quant_est <<endl;
							cout << "------------------------------\n";
							cout <<endl;
							cin.ignore();
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[n].quant_est);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 6:
							cout << "------------------------------\n" ;
							cout <<  "Situa��o Atual do Campos:\n" ;
							cout << "Nome: "<< prods[n].nome <<endl;
							cout << "C�digo: "<< prods[n].codigo <<endl;
							cout << "Descri��o: "<< prods[n].desc <<endl;
							cout << "Pre�o R$: "<< prods[n].preco  <<endl;
							cout << "Quantidade em Estoque: "<< prods[n].quant_est <<endl;
							cout << "------------------------------\n";
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
							cout << "\nOP��O INV�LIDA\n";
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
				   	cout << "\nPRODUTO/SERVI�O N�O CADASTRADO\n";			
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
							cout << "------------------------------\n" ;
							cout <<  "Situa��o Atual do Campo:\n" ;
							cout << "Nome: "<< prods[c].nome <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Novo Nome do Produto/Servi�o: "; getline(cin,prods[c].nome);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 2:
						    cout << "------------------------------\n";
							cout <<  "Situa��o Atual do Campo:\n" ;
							cout << "C�digo: "<< prods[c].codigo  <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Novo C�digo do Produto/Servi�o: "; getline(cin,prods[c].codigo);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 3:
							cout << "------------------------------\n";
							cout <<  "Situa��o Atual do Campo:\n";
							cout << "Descri��o: "<< prods[c].desc <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Nova Descri��o: "; getline(cin,prods[c].desc);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 4:
							cout << "------------------------------\n";
							cout <<  "Situa��o Atual do Campo:\n";
							cout << "Pre�o R$: "<< prods[c].preco  <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Novo Pre�o R$ (X.XX): "; getline(cin,prods[c].preco);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 5:
							cout << "------------------------------\n";
							cout <<  "Situa��o Atual do Campo:\n";
							cout << "Quantidade em Estoque: "<< prods[c].quant_est <<endl;
							cout << "------------------------------\n";
							cout << endl;
							cin.ignore();
							cout << "Nova Quantidade em Estoque: "; getline(cin,prods[c].quant_est);
							cout << "CAMPO ALTERADO!\n";
							break;
						case 6:
							cout << "------------------------------\n";
							cout <<  "Situa��o Atual do Campo:\n";
							cout << "Nome: "<< prods[c].nome <<endl;
							cout << "C�digo: "<< prods[c].codigo <<endl;
							cout << "Descri��o: "<< prods[c].desc <<endl;
							cout << "Pre�o R$: "<< prods[c].preco <<endl;
							cout << "Quantidade em Estoque: "<< prods[c].quant_est <<endl;
							cout << "------------------------------\n";
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
							cout << "\nOP��O INV�LIDA\n";
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
				   	cout << "\nPRODUTO/SERVI�O N�O CADASTRADO\n";	
					cout << endl;
				}
			}
			
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << "OP��O DE PESQUISA INV�LIDA!\n";
				prod_n_cad = true;
			}

			break;
		
		
		case 4:
			/* Exclus�o de Produto/Servi�o */
			cout << "EXCLUIR PRODUTOS/SERVI�OS\n";
			cout << "Pesquise o produto/servi�o que deseja excluir:\n";
			cout << "Tipo de Pesquisa:\n";
			cout << "1 - Por Nome\n";
			cout << "2 - Por C�digo\n";
			cout << "> "; 
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
						cout << "------------------------------\n" ;
						cout << "Situa��o Atual dos Campos:\n";
						cout << "Nome: "<< prods[n].nome <<endl;
						cout << "C�digo: "<< prods[n].codigo <<endl;
						cout << "Descri��o: "<< prods[n].desc <<endl;
						cout << "Pre�o R$: "<< prods[n].preco <<endl;
						cout << "Quantidade em Estoque: "<< prods[n].quant_est <<endl;
						cout << "------------------------------\n";
						cout <<endl;
						
						cout << "ATEN��O!!!\n";
						cout << "Deseja excluir o Produto/Servi�o?(S/N) "; 
						cin >> exps;
						if (toupper(exps)=='S') 
						{
							prods[n].nome = "";
							prods[n].codigo = "";
							prods[n].desc = "";
							prods[n].preco = "";
							prods[n].quant_est = "";
							cout << "\nPRODUTO/SERVI�O EXCLU�DO!!!\n" ;
							prod_n_cad = true;
							break;
						}
						else 
						{
							cout << "\nVoltando ao Menu...\n";
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
				   	cout << "\nProduto/Servi�o n�o cadastrado\n";	
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
                        cout << "------------------------------\n";
						cout << "Situa��o Atual dos Campos:\n";
						cout << "Nome: "<< prods[c].nome <<endl;
						cout << "C�digo: "<< prods[c].codigo <<endl;
						cout << "Descri��o: "<< prods[c].desc <<endl;
						cout << "Pre�o R$: "<< prods[c].preco <<endl;
						cout << "Quantidade em Estoque: "<< prods[c].quant_est <<endl;
						cout << "------------------------------\n" ;
						cout <<endl;
						cout << "ATEN��O!!!\n";
						cout << "Deseja excluir o Produto/Servi�o?(S/N) "; 
						cin >> exps;
						if (toupper(exps)=='S') 
						{
							prods[c].nome = "";
							prods[c].codigo = "";
							prods[c].desc = "";
							prods[c].preco = "";
							prods[c].quant_est = "";
							cout << "\nPRODUTO/SERVI�O EXCLU�DO!!!\n";
							prod_n_cad = true;
							break;
						}
						else 
						{
							cout << "\nVoltando ao Menu...\n";
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
					cout << "\nPRODUTO/SERVI�O N�O CADASTRADO\n";	
					cout << endl;
				}
			}
			
			if (op_pesquisa!=1 && op_pesquisa!=2) 
			{
				cout << "OP��O DE PESQUISA INV�LIDA!\n";
				prod_n_cad = true;
			}
			break;
		
		case 5:
			/* Sair do programa */
			cout << "\n----------------------------------------\n";
    		cout << "Muito obrigado por utilizar o sistema!\n";
    		cout << "           At� a pr�xima.\n";
    		cout << "----------------------------------------\n";
    		cout << "         Encerrando programa...\n" ;
    		cout << "----------------------------------------\n" ;
			
			break;
		
		default:
			cout << "\nOP��O INV�LIDA\n" ;
			break;
		}
		
	}while(op!=5);
	
	
	return 0;
}