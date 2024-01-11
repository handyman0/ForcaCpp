#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <time.h>

using namespace std;

void limpatela(){
	system("clear");
}

string retornaPalavraAleatoria(){

	string palavras[3] = {"Abacaxi", "Manga", "Morango"};
	
	int indiceAleatorio = rand() % 3;

	return palavras[indiceAleatorio];
}

void jogarSozinho() {
	
	string palavra = retornaPalavraAleatoria();
	
	cout << "A palavra secreta e: " << palavra;

}

void menuInicial(){

	int opcao = 0;
	while(opcao < 1 || opcao > 3){
		limpatela();
		cout << "Bem vindo ao jogo";	
		cout << "\n1 - Jogar";		 
		cout << "\n2 - Sobre";		 
		cout << "\n3 - Sair";
		cout << "\nEscolha uma opcao e tecle ENTER!"; 
		cin >> opcao;
	
		switch(opcao){
			case 1:
				cout << "Jogo Iniciado";
				jogarSozinho();
				break;
			case 2:
				cout << "Informações do Jogo";
				break;
			case 3:
				cout << "Ate mais";
				break;
		}
	}

}

int main(){
	srand( (unsigned)time(NULL));	
	menuInicial();	
	return 0;
}
