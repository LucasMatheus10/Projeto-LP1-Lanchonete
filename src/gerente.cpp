#include <iostream>
#include <string>
#include <fstream>
#include <map>

using namespace std;

void listaSanduiche(fstream& sanduiches, map<string, float>& sand){

	//nessa função o arquivo é aberto para poder passar as informações do txt para o map que guarda todos os sanduiches e também printa todos os sanduiches disponíveis
	sanduiches.open("sanduiches.txt", ios::in);
    string linha;
    while (getline(sanduiches, linha)) {
        string nome = linha.substr(0, linha.find(":")); //converte o tipo do sanduiche em string
        float preco = stof(linha.substr(linha.find(": R$")+4)); //converte o preco em float
        sand[nome] = preco;
    }
    sanduiches.close();
    sanduiches.open("sanduiches.txt", ios::in);
    while(getline(sanduiches, linha)){
        cout << linha << endl;
    }
    sanduiches.close();
}

void listaSuco(fstream& sucos, map<string, float>& suc){

	//nessa função o arquivo é aberto para poder passar as informações do txt para o map que guarda todos os sucos e também printa todos os sucos disponíveis
	sucos.open("sucos.txt", ios::in);
	string linha;
	while (getline(sucos, linha)) {
    	string nome = linha.substr(0, linha.find(":")); //converte o sabor do suco em string
        float preco = stof(linha.substr(linha.find(": R$")+4)); //converte o preco em float
        suc[nome] = preco;
    }
	sucos.close();
	sucos.open("sucos.txt", ios::in);;
	while(getline(sucos, linha)){
		cout << linha << endl;
	}
	sucos.close();
}

void addSanduiche(fstream& sanduiches, map<string, float>& sand){

	//aqui o txt é aberto em modo de adição para poder acrescentar o novo sanduiche
	string tipoSandu;
	float preco;
	cout << "digite o nome do sanduíche:\n";
	cin >> tipoSandu;
	cout << "digite o preço:\n";
	cin >> preco;
	sand[tipoSandu] = preco;
	sanduiches.open("sanduiches.txt", ios::app);
	sanduiches << tipoSandu << ": R$" << preco << endl;
	sanduiches.close();
	cout << tipoSandu << " adicionado ao cardápio\n";
	
}

void addSuco(fstream& sucos, map<string, float>& suc){

	//aqui o txt é aberto em modo de adição para poder acrescentar o novo suco
	string saborSuco;
	float preco;
	cout << "diga o sabor do suco:\n";
	cin >> saborSuco;
	cout << "digite o preço:\n";
	cin >> preco;
	suc[saborSuco] = preco;
	sucos.open("sucos.txt", ios::app);
	sucos << saborSuco << ": R$" << preco << endl;
	sucos.close();
	cout << "suco de " << saborSuco << " adicionado ao cardápio\n";
		
}

void mudaPrecoSanduiche(fstream& sanduiches, map<string, float>& sand){

	//nessa função o txt é aberto em modo de escrita para zerar o arquivo e repassar os novos precos através dos sanduiches que estão guardados no map
	string tipoSandu;
	float preco;
	cout << "digite o nome do sanduíche que você quer mudar o preço:\n";
	cin >> tipoSandu;
	cout << "agora digite o novo preço:\n";
	cin >> preco;
	sand[tipoSandu] = preco;
	cout << "pronto, o preço já foi atualizado\n";
	sanduiches.open("sanduiches.txt", ios::out);
	for(auto it = sand.begin(); it != sand.end(); ++it) {
        sanduiches << it->first << ": R$" << it->second << endl;
    }
    sanduiches.close();
	
}

void mudaPrecoSuco(fstream& sucos, map<string, float>& suc){

	//nessa função o txt é aberto em modo de escrita para zerar o arquivo e repassar os novos precos através dos sucos que estão guardados no map
	string saborSuc;
	float preco;
	cout << "digite o sabor do suco que você quer mudar o preço:\n";
	cin >> saborSuc;
	cout << "agora digite o novo preço:\n";
	cin >> preco;
	suc[saborSuc] = preco;
	cout << "pronto, o preço já foi atualizado\n";
	sucos.open("sucos.txt", ios::out);
	for(auto it = suc.begin(); it != suc.end(); ++it) {
        sucos << it->first << ": R$" << it->second << endl;
    }
    sucos.close();
	
}

void delSanduiche(fstream& sanduiches, map<string, float>& sand){

	//nessa função o txt é aberto em modo de escrita para zerar o arquivo e repassar a lista de sanduiches guardados no map após a remoção do sanduiche selecionado pelo usuário
	string tipoSandu;
	cout << "digite o nome do sanduíche que você quer excluir:\n";
	cin >> tipoSandu;
	sand.erase(tipoSandu);
	cout << "pronto, sanduíche removido do cardápio\n";
	sanduiches.open("sanduiches.txt", ios::out);
	for(auto it = sand.begin(); it != sand.end(); ++it) {
        sanduiches << it->first << ": R$" << it->second << endl;
    }
	sanduiches.close();
	
}

void delSuco(fstream& sucos, map<string, float>& suc){

	//nessa função o txt é aberto em modo de escrita para zerar o arquivo e repassar a lista de sucos guardados no map após a remoção do suco selecionado pelo usuário
	string saborSuc;
	cout << "digite o sabor do suco que você quer excluir:\n";
	cin >> saborSuc;
	suc.erase(saborSuc);
	cout << "pronto, suco removido do cardápio\n";
	sucos.open("sucos.txt", ios::out);
	for(auto it = suc.begin(); it != suc.end(); ++it) {
        sucos << it->first << ": R$" << it->second << endl;
    }
    sucos.close();
	
}