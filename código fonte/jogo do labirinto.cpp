#include <stdio.h>
void jogo()//Fun��o principal do jogo
{
	do
	{
		
	}
	while(1);
}
int sorteio_passos()//Fun��o para calcular quantos passos poder�o ser realiazdos pelos jogadores
{
	int passos;
	return passos;
}
void mensagens(int situacao_agora, int player, int passos)
//situacao_agora == recebera um valor inteiro para determinar qual mensagem ser� mostrada || player == int p/ identificar qual player || quantos passos ser�o dados e quantos restam
{
	switch(situacao_agora)
	{
		case 1:
		{	printf("Player %d pode dar: %d passos",player,passos);
			break;
		}
		case 2:
		{	printf("Player %d encontrou uma tocha!",player);
			break;
		}
		case 3:
		{	printf("Player %d perdeu 1 Health Point",player);
			break;
		}
		case 4:
		{	printf("Player %d encontrou o tesouro!",player);
			break;
		}
		case 5:
		{	printf("Player %d GANHOU!! PARAB�NS",player);
			break;
		}
	}
}
char mapa()			//Ainda estou com muitas duvida sobre como  utilizar vetores e matrizes
{	
	int linhas=12,colunas=12;
	char mapa1[linhas][colunas]	// Modelo do labirito a ser percorrido, os caracteres 'X' s�o as paredes que n�o poder�o ser atravessadas
	{
	'X','X','X','X','X','X','X','X','X','X','X','X',
	'X','*','*','*','*','*','*','*','*','*','*','X',
	'X','*','*','*','*','*','*','*','*','*','*','X',	
	'X','*','*','*','*','*','*','*','*','*','*','X',	
	'X','*','*','*','*','*','*','*','*','*','*','X',	
	'X','*','*','*','*','*','*','*','*','*','*','X',
	'X','*','*','*','*','*','*','*','*','*','*','X',
	'X','*','*','*','*','*','*','*','*','*','*','X',
	'X','*','*','*','*','*','*','*','*','*','*','X',
	'X','*','*','*','*','*','*','*','*','*','*','X',
	'X','*','*','*','*','*','*','*','*','*','*','X',
	'X','X','X','X','X','X','X','X','X','X','X','X'
	};
	
} 
int main()
{
	jogo();
	return 1;
}
