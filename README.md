						LINGUAGEM DE PROGRAMAÇÃO I
	   							PROJETO C
					ALUNO: LUCAS MATHEUS MATIAS DA SILVA

	O projeto consiste na confecção de um programa que simula um sistema de pedidos de uma lanchonete que conta com dois perfis de usuário, o de cliente e o do gerente, que possibilita mudanças no cardápio e possui senha para ser acessado.
 	Para inicializar o programa corretamente e carregar a base de dados do cardápio é necessário que utilizando qualquer um dos dois perfis de usuário sejam executados os comando "listar todos os sanduíches cadastrados" e "listar todos os sucos cadastrados", pois assim os elementos que inicialmente estarão apenas nos arquivos txt de cada um deles poderá ser repassado para os maps auxiliares do programa e executará corretamente todas as opções propostas pelo menu de cada usuário.
  	O programa conta ainda com laços de repetição em cada interface a medida que o usuário seleciona as opções para tornar a execução mais fluída e para que não seja necessário rodar novamente depois de realizar os comandos.
   	Os itens do cardápio são armazenados em map's, cada alteração sofrida conforme comando do usuário primeiro é modificado dentro do map e depois repassado para o arquivo txt para manter o programa atualizado.
	A interface de cliente possui um map próprio para a realização dos pedidos, este conforme digitado pelo usuário é repassado para uma variável que posteriormente será cadastrada como chave do map que recebe o valor do map correspondente de mesma chave.
 	Em todas as funções que envolvem alterações no carrinho e mudança no cardápio os map's são passados por referência para que as modificações feitas dentro das funções possuam validade em todo o programa e para não precisar retornar de volta para o mesmo map.
  	Todo o programa conta com textos de saída para ajudar o usuário a navegar e entender corretamente o mesmo.