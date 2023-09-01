#include <iostream>
#include <string>
#include <map>

using namespace std;

void escolheLanche(map<string, float>& carrinho, map<string, float> sand, map<string, float> suc){

	//nessa função o cliente escolhe o lanche digitando o nome do sanduiche ou suco de sua preferência e essa escolha é armazenada no map específico para isso
	int comando;
	string sanduiche;
	string suco;

	while (comando != 3){
		cout << "escolha o seu pedido:\n";
		cout << "(1) escolher sanduiche\n";
		cout << "(2) escolher suco\n";
		cout << "(3) voltar\n";
		cin >> comando;
		if (comando == 1){
			cout << "escolha qual sanduiche deseja:\n";
			cin >> sanduiche;
			carrinho[sanduiche] = sand[sanduiche]; //o map com a escolha do sanduiche recebe o valor de mesma chave vindo do map que guarda todos os sanduiches
			cout << sanduiche << "adicionado ao carrinho\n";
		}
		else if (comando == 2){
			cout << "escolha o sabor do suco:\n";
			cin >> suco;
			carrinho[suco] = suc[suco]; //o map com a escolha do suco recebe o valor de mesma chave vindo do map que guarda todos os sucos
			cout << "suco de " << suco << " adicionado ao carrinho\n";
		}
	}	
	
}

void calculaLanche(map<string, float> carrinho){

	//nessa função apenas é usado um for que itera o map do carrinho e põe os valores numa variável para calcular o custo do lanche
	float total;
	if (carrinho.empty()){
		cout << "o carrinho está vazio\n";
	}
	else{
	for(auto it = carrinho.begin(); it != carrinho.end(); it++){
    	total += it->second;
	}
	cout << "o seu lanche deu R$ " << total << endl; 
	}
	
}

void verCarrinho(map<string, float> carrinho){
	
	//aqui são listados os itens escolhidos pelo cliente que estão atualmente no carrinho
	if (carrinho.empty()){
		cout << "o carrinho está vazio\n";
	}
	else{
		for(auto it = carrinho.begin(); it != carrinho.end(); it++){
			cout << it->first << ": R$" << it->second << std::endl;
		}
	}
	
}

void delItem(map<string, float>& carrinho){

	//nessa função é removido do carrinho o item passado pelo cliente através da interface ou então remove todos os itens do carrinho
	string escolha;
	if (carrinho.empty()){
		cout << "o carrinho está vazio\n";
	}
	else{
	cout << "qual item você quer remover? digite 'limpa' para remover tudo\n";
	cin >> escolha;
	if (escolha == "limpa"){
		carrinho.clear();
	}
	else{
		carrinho.erase(escolha);
		cout << "item removido com sucesso\n";
	}
	}
	
}
