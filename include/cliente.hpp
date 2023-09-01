#ifndef CLIENTE_HPP
#define CLIENTE_HPP

void escolheLanche(std::map<std::string, float>& carrinho, std::map<std::string, float> sand, std::map<std::string, float> suc);
void calculaLanche(std::map<std::string, float> carrinho);
void verCarrinho(std::map<std::string, float> carrinho);
void delItem(std::map<std::string, float>& carrinho);

#endif