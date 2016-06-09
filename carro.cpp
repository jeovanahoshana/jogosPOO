#include <iostream> //biblioteca
#include <string>//  usar o tipo dado string
#include <ctime>//  tempo para ser a semente
using namespace std;

void imprimir_espacos(int total1); //função que foi criada

int main(int argc, char* args[])// função principal
{

	bool sair = false; // variavel que tem o valor de verdadeiro ou falso para o while

	string jog1, jog2; // nome dos jogadores

	int total1 = 0, total2 = 0;// quantidade de espaços de cada carrinho e ir adicionando os espaços

	cout << "Digite o nome do primeiro piloto:" << endl; // imprime na tela para o jogador digitar o nome
	cin >> jog1; // recebe o nome do primeiro jogador

	cout << "Digite o nome do segundo piloto:" << endl; //imprime na tela para o jogador digitar o nome
	cin >> jog2; // revebe o nome do jogador

	//usar o while para saber quando parar usando o true ou false (bool)
	while (sair == false)
	{


		//  tamanho da pista
		int total_espacos = 80;

		//mecanismo que gera número aleatorio no computador 
		srand((int)time(0));

		//gera número aleatorio para o primeiro jogador entre um e trÊs
		total_espacos = rand() % 3 + 1;

		total1 = total1 + total_espacos;

		//gera número aleatorio para o segundo jogador entre um e três
		total_espacos = rand() % 3 + 1;

		total2 = total2 + total_espacos;


		// NOME DO JOGO
		cout << "HOX'S ROAD'  :" << endl;
		// onde é a partida e a chegada
		cout << "START:                                                               FINISH:" << endl;

		cout << "Piloto 1:" << jog1 << endl; // o primeiro jogador é o primeiro piloto
		imprimir_espacos(total1);//usa o número aleatorio para definir a quantidade de espaços que tem que imprimir
		cout << "  _  " << endl;// capô do carro
		imprimir_espacos(total1);// usa o número aleatorio para definir a quantidade de espaços que tem que imprimir
		cout << "-o-o>" << endl;// carroceria do carro e rodas
		cout << "_______________________________________________________________________________" << endl;//pista 


		cout << "Valor que andou: " << total1 << endl;  // quantidade de espaços que o primeiro piloto andou


		cout << "Piloto 2:" << jog2 << endl;// o segundo jogador é o segundo piloto
		imprimir_espacos(total2);//usa o número aleatorio para definir a quantidade de espaços que tem que imprimir
		cout << "  _  " << endl;// capô do carro
		imprimir_espacos(total2);//usa o número aleatorio para definir a quantidade de espaços que tem que imprimir
		cout << "-o-o>" << endl;// carroceria do carro e rodas
		cout << "_______________________________________________________________________________" << endl;// pista 


		cout << "Valor que andou: " << total2 << endl;  //quaniidade de espaços que o segundo piloto andou

		//limpa tudo para a proxima rodada
		system("cls");



		if (total1 >= 80 || total2 >= 80) //se for falso o jogo para e imprime o total de espaços
		{
			sair = true; //continua o jogo

		}

		// se não for verdade (o sair) limpa a tela e continua
		else system("cls");


	}

	//quando sair imprime na tela que o jogo acabou
	cout << "Fim de jogo!" << endl;

	// dix o jogador vencedor(na tela) ou se empatou
	if (total1 >= 80) cout << jog1 << ", Parabens, voce venceu a corrida!" << endl;

	else if (total2 >= 80) cout << jog2 << ", Parabens, voce venceu a corrida!" << endl;

	else cout << "EMPATE!" << endl;
	system("pause");
	return 0; // volta para para o inicio para quem quiser jogar outras vezes

}



void imprimir_espacos(int rodada)//Função que vai imprimir os espaços.
{
	for (int qnt_atual = 0; qnt_atual < rodada; qnt_atual++)
	{
		cout << " ";//Imprime os espaços.
	}
}
