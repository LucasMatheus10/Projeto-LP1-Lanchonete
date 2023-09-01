#ifndef GERENTE_HPP
#define GERENTE_HPP

void listaSanduiche(std::fstream& sanduiches, std::map<std::string, float>& sand);
void listaSuco(std::fstream& sucos, std::map<std::string, float>& suc);
void addSanduiche(std::fstream& sanduiches, std::map<std::string, float>& sand);
void addSuco(std::fstream& sucos, std::map<std::string, float>& suc);
void mudaPrecoSanduiche(std::fstream& sanduiches, std::map<std::string, float>& sand);
void mudaPrecoSuco(std::fstream& sucos, std::map<std::string, float>& suc);
void delSanduiche(std::fstream& sanduiches, std::map<std::string, float>& sand);
void delSuco(std::fstream& sucos, std::map<std::string, float>& suc);

#endif