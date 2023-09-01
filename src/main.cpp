#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include "gerente.hpp"
#include "cliente.hpp"

using namespace std;

int main() {

	int comando;
	string senha;
	fstream sanduiches; //arquivo para fazer a listagem dos sanduiches
	fstream sucos; //arquivo para fazer a listagem dos sucos
	map<string, float> sand; //map que será usado para fazer a alteração dos txt e guarda todos os sanduiches adicionados
	map<string, float> suc; //map que será usado para fazer a alteração dos txt e guarda todos os sucos adicionados
	map<string, float> carrinho; //map que será usado para armazenar o lanche escolhido pelo cliente;

	while(comando != 3){ //laço que mantém a interface ativa até que o usuário resolva fechar o programa
		cout << "selecione o tipo de usuário:\n";
		cout << "(1) cliente\n";
		cout <<	"(2) gerente\n";
		cout << "(3) fechar\n";
		cin >> comando; //seleção do tipo de usuário ou saída do programa
		if (comando == 2){
			cout << "digite a senha de acesso:\n";
			cin >> senha;
			if (senha != "chefao123"){
				cout << "senha incorreta!\n";
			}
			else{
				while (comando != 9){ //laço que mantém o usuário 'gerente' dentro das opções selecionáveis do menu até que ele resolva voltar para o estado anterior
				    cout << "o que deseja fazer?\n";
				    cout << "(1) listar todos os sanduíches cadastrados\n";
				    cout << "(2) listar todos os sucos cadastrados\n";
				    cout << "(3) adicionar um novo sanduíche\n";
				    cout << "(4) adicionar um novo suco\n";
				    cout << "(5) alterar preço de um sanduíche\n";
				    cout << "(6) alterar preço de um suco\n";
				    cout << "(7) excluir um sanduíche\n";
				    cout << "(8) excluir um suco\n";
				    cout << "(9) sair\n";
				    cin >> comando;
				    if (comando == 1){
				        cout << "estes são os sanduíches disponíveis:\n";
				        listaSanduiche(sanduiches, sand);
				    }
				    else if (comando == 2){
				        cout << "estes são os sabores de suco disponíveis:\n";
				        listaSuco(sucos, suc);
				    }
				    else if (comando == 3){
				        addSanduiche(sanduiches, sand);
				    }
				    else if (comando == 4){
				        addSuco(sucos, suc);
				    }
				    else if (comando == 5){
				        mudaPrecoSanduiche(sanduiches, sand);
				    }
				    else if (comando == 6){
				        mudaPrecoSuco(sucos, suc);
				    }
				    else if (comando == 7){
				        delSanduiche(sanduiches, sand);
				    }
				    else if(comando == 8){
				        delSuco(sucos, suc);
				    }
				    else if(comando == 9){
				        break;
				    }
				    else{
				        cout << "operação inválida\n";
				    }
				}
			}
		}
		else if(comando == 1){
			while (comando != 7){ //laço que mantém o usuário 'cliente' dentro das opções selecionáveis do menu até que ele resolva voltar para o estado anterior
				cout << "olá, seja bem vindo(a), escolha uma opção:\n";
				cout << "(1) listar todos os sanduíches cadastrados\n";
				cout << "(2) listar todos os sucos cadastrados\n";
				cout << "(3) escolher o lanche\n";
				cout << "(4) calcular o valor do lanche\n";
				cout << "(5) ver elementos do carrinho\n";
				cout << "(6) excluir item do carrinho\n";
				cout << "(7) sair\n";
				cin >> comando;
				if (comando == 1){
					cout << "estes são os sanduíches disponíveis:\n";
					listaSanduiche(sanduiches, sand);
				}
				else if (comando == 2){
					cout << "estes são os sabores de suco disponíveis:\n";
					listaSuco(sucos, suc);
				}
				else if (comando == 3){
					escolheLanche(carrinho, sand, suc);
				}
				else if (comando == 4){
					calculaLanche(carrinho);
				}
				else if (comando == 5){
					verCarrinho(carrinho);
				}
				else if (comando == 6){
					delItem(carrinho);
				}
				else if (comando == 7){
					break;
				}
				else{
					cout << "operação inválida\n";
				}
			}
		}
		else if(comando == 3){
			cout << "programa encerrado.\n";
		}
		else{
			cout << "operação inválida.\n";
		}
	}		
}