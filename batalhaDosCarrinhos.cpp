#include <iostream> // inclui o arquivo iostream que cont�m as defini��es e declara��es-padr�o de entrada e sa�da
#include <ctime> // inclui a biblioteca para o uso do tempo/hora 
using namespace std; // namespace � uma regi�o que agrega um identificador a todos s nomes declarados dentro dela e a diretiva using permite que os nomes dentro de um namespace possam ser usados sem explicitar o qualificador 

void imprimir_espacos(int total); // Identificador da fun��o 'imprimir_espa�os'.

int main(int argc, char* args[]) // fun��o que inicia o programa 
{
	int total_espacos = 70; // Quantidade Total de Espa�os.
	int rodada = 0; // vari�vel para uma nova rodada acontecer ap�s o carro ter andado 
	int carro1 = 0; // vari�vel do primeiro carro
	int carro2 = 0; // vari�vel para o segundo carro

	while (carro1 < total_espacos && carro2 < total_espacos) // enquanto carro1 e carro2 for menor que a quantidade de espa�os executar o bloco de c�digo
	{
		cout << "Jogo de Corrida" << endl; // Mostra em tela o Letreiro do Jogo.
		// Mostra no final da partida a chegada dos carros 
		imprimir_espacos(total_espacos);
		cout << "|CHEGADA|" << endl;

		srand((int)time(0)); // Usa o tempo atual como "semente" do gerador

		// Imprime na tela do usu�rio a quantidade de espa�os sortiados em cada corrada e os carros
		carro1 = rand() % 3 + 1 + carro1;
		imprimir_espacos(carro1);
		cout << "  _  " << endl;
		imprimir_espacos(carro1);
		cout << "-o-o>" << endl;
		cout << "-------------------------------------------------------------------------" << endl;

		// Imprime na tela do usu�rio a quantidade de espa�os sortiados em cada corrada e os carros
		carro2 = rand() % 3 + 1 + carro2;
		imprimir_espacos(carro2);
		cout << "  _  " << endl;
		imprimir_espacos(carro2);
		cout << "-o-o>" << endl;
		cout << "-------------------------------------------------------------------------" << endl;

		system("cls"); 	// Limpa a tela para mostrar a pr�xima rodada.
		rodada++; 	// Limpa a tela para mostrar a pr�xima rodada.
	}

	// Mostra ao usu�rio quem ganho. Caso o carro1 atinja os espa�os primeiro ele ser� o vencedor caso contrario o carro2 ir� ganhar 
	if (carro1 > carro2) cout << "O carro1 venceu" << endl;
	else cout << "O carro2 ganhou" << endl;
	system("pause"); // pausa a fun��o
	return 0;
}

/*
*	A fun��o serve pra mostrar espa�os em branco na tela.
*	int total : Quantidade de espa�os que ser�o mostrados.
*/
void imprimir_espacos(int total)
{
	// Imprime espa�os de 'qntd_atual' at� 'total'.
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++)
	{
		cout << " ";
	}
}


