// Hello world
#include <iostream> //bibliotecas
 #include <string>
 #include <ctime>

using namespace std;

int main(int argc, char* args[]) //função principal
 {
	bool sair = false; //variavel booleana
	string jog1, jog2; // variavel dos jogadores
	int vida1 = 20, vida2 = 20; // vidas iniciais
	int A = 4, D = 2; // ataque e defesa
	
		
		cout << "Digite o nome do jogador 1:" << endl; //imprime na tela o nome do jogador
	cin >> jog1; // entrada de dados
	
		cout << "Digite o nome do jogador 2:" << endl; // imprime o nome do jogador 2
	cin >> jog2; // entrada de dados
	while (sair == false) {//enquanto sair é falso continua o jogo
		
			
			cout << " o                       o" << endl;// o desenho dos bonecos
		cout << ".T./                   \\.T." << endl;
		cout << " ^                       ^" << endl;//
		cout << jog1 << "             " << jog2 << endl;//
		cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;// imrpimr a vida deles
		cout << "A:" << A << "           " << "A:" << A << endl; //imprimir o ataque
		cout << "D:" << D << "           " << "D:" << D << endl;// imprimir a defesa
		
			
			system("pause"); //para o programa na tela
		
		    int dado6;
		
					//Adiciona uma "semente" ao gerador de numeros
			srand((int)time(0));
				//Gera um número aletorio
			dado6 = rand() % 6 + 1;
				//Gera um dano no jogador 1
			if (dado6 > 4)
			 {
			vida1 = vida1 - dado6; //semente
			cout << jog1 << "Dano:" << -dado6 << endl; // dano dependendo do numero aleatorio
			cout << jog2 << "Acertou!" << endl; //se acertar
			cout << "Proxima jogada (Digite enter):" << endl; // digitar enter na proxima rodada
			cin.get(); // enter
			}
		
			else if (dado6 <= 4)//se for maior que 4
			 {
			
				cout << jog2 << "Errou!" << endl; // imprimir que errou
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
			
				}
					//Mesma coisa para o jogador 2
			dado6 = rand() % 6 + 1;
		
			if (dado6 > 4)
			 {
			
				vida2 = vida2 - dado6;
			cout << jog2 << "Dano:" << -dado6 << endl;
		    cout << jog1 << "Acertou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
			}
		else if (dado6 <= 4) {
			
				cout << jog1 << "Errou!" << endl;
			cout << "Proxima jogada (Digite enter):" << endl;
			cin.get();
			
				
		}
		
					//cout << "Vida:" << vida1 << "           " << "Vida:" << vida2 << endl;
			
			system("cls"); // limpar
		
					// se sair não limpa a tela
			if (vida1 <= 0 || vida2 <= 0)
			 {
			
				sair = true; // se sair for verdade limpar a tela e acabar
			}
				// se continuar entao limpa a tela
			else system("cls");
		
	}
	
		
		cout << "Fim de jogo!" << endl; // imprimir que é fim de jogo
	
		if (vida1 > 0) cout << jog1 << "Venceu!" << endl; //se jogador 1 vencer, imprimir na tela
	else if (vida2 > 0) cout << jog2 << "Venceu!" << endl;//se jogador 2 vencer, imprimir na tela
	else cout << "Os dois perderam!" << endl; // se os dois ganharem imprimir na tela
	return 0;
	
		
		}
