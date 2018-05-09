#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
//using namespace std;

void resposta1 (){
	printf("a resposta esta correta, ganhou mas um ponto\n ");	
}

void resposta2 (){
	printf("a resposta esta incorreta, voce perdeu 2 pontos \n ");	
}
void resposta3 (){
	printf("deseja continuar? para sim digite 0 para nao 1? \n");
}	

void resposta4(){
	printf(" Incorreto! Game over \n ");	
}

int main (void)

{

/*"um jogo de sobrevivência "
cada resposta correta você ganha 2 pontos e cada errada você perde 3.
há várias enquetes de assuntos váriados. O objetivo deste jogo é lhe trazer conhecimento 
desafios:
1-bíblicos;
2-filmes e séries;
3-astronomia;
4-história geral;*/

char nome [20];
char sexo[10];
char dsexo[]= "feminino";
int cont=10,total=0,resultado, questao;

printf("Qual é seu nome  ? \n ");
scanf("%s",&nome);
printf ("sexo ?");
scanf ("%s",&sexo);

	if (strcmp(sexo,dsexo)==0){
	 printf("meu nome e Stark, prazer em conhece voce %s\n  ", nome );
	 printf("te desejo uma longa vida neste game companheira!\n ");	
	 printf("\n");	
	}
			
	else{
	 printf("meu nome e Stark, prazer em conhece voce %s\n  ", nome );
	 printf(" te desejo uma longa vida neste game companheiro!\n ");
	 printf("\n");	
	}
     
printf ("aperte o 1 para QUIS ou 2 para modo heroi");
scanf("%d",&questao);
if (questao==1){
  	
do 	
{
	printf("\n");
	printf ("-----------------------------------------------------------------\n" );
	printf ("Muito tempo depois da criacao DEUS viu que o homem era peverso,\n" );
	printf ("por isso resolveu destuir tudo que habitava a terra.\n" );
	printf ("O que impediu a destruição total de todas as especies?\n ");
	printf ("1-O ARREPENDIMENTO DE CAIM? \n");
	printf ("2-O CORAÇAO JUSTO E TEMENTE A DEUS DE NOE? \n");
	printf ("3-O CORAÇAO JUSTO E TEMENTE A DEUS DE MATUSALEM? \n");
	printf ("4-O ARREPENDIMENTO DE TODO POVO? \n");
	printf ("qual das alternativas esta correta? \n");
	
	scanf("%d",&resultado);
	if (resultado== 2) {
	resposta1 ();
	cont=cont+1;
	total=cont;
		resposta3 ();
 		scanf  ("%d",&questao);	
		if (questao == 1){
		break;	
		}
		}
		
	else{
	resposta2 ();
	cont=cont-2;
	total=cont;	
	    resposta3 ();
 	    scanf  ("%d",&questao);	
		if (questao == 1){
		break;	
		}
	}		

	printf ("-----------------------------------------------------------------\n" );
	printf ("Quais das opcoes abaixo pertence ao grupo das 10 pragas do egito?,\n" );
	printf ("1-Morte de todos os primogênitos e diluvio? \n");
	printf ("2-Gafanhotos e peregrinacao no deserto ? \n");
	printf ("3-chagas e  Água em sangue? \n");
	printf ("4-Agua em sangue e diluvio? \n");
	
	scanf("%d",&resultado);
	if (resultado== 3) {
		resposta1 ();
		cont=cont+1;
		total=cont;
		  resposta3 ();
		  scanf  ("%d",&questao);
		  if (questao == 1){
		  break;	
		}	
		}
			
		else{
		resposta2 ();
		cont=cont-2;
		total=cont;
		   resposta3 ();
		   scanf  ("%d",&questao);
		   if (questao == 1){
	       break;	
		}	
		}
		
	printf ("-----------------------------------------------------------------\n" );
	printf ("Apos a morte de Moises quem Deus nomeou como sucessor?,\n" );
	printf ("1-Josué filho de Num? \n");
	printf ("2-Saloman filho de Davi? \n");
	printf ("3-Miria irma de moises? \n");
	printf ("4-Lameque paide noe? \n");	
		scanf("%d",&resultado);
	if (resultado== 1) {
	resposta1 ();
	cont=cont+1;
	total=cont;
		resposta3 ();
 		scanf  ("%d",&questao);	
		if (questao == 1){
		break;	
		}
		}
	else{
		resposta2();
		cont=cont-2;
		total=cont;
		resposta3();
		scanf("%d",&questao);
		if(questao==1){
		break;
		}
	}
	
		total=cont;
		
	
	}while (questao== 0);
		system ("cls");
		printf ("sua pontuacao final= %d \n", total);
		system ("pause");
		
	}
	
	else if (questao==2){
		do{
	printf ("Estamos no Egito, ano 1526 AC. Farao vendo o aumento populacional dos hebreus \n");
	printf ("ordena uma matanca a todos os recem nascidos homens  \n");
	printf ("Joquebebe precisa livrar seu bebe da morte  \n");
	printf ("1-Joquebebe deve esconder seu bebe debaixo da cama?  \n");
	printf ("2-Joquebebe deve esconde-lo na tenda de sua vizinha?  \n");
	printf ("3-Joquebebe deve coloca-lo em uma cesta e deixa-lo na margem do rio ?  \n");
	scanf  ("%d",&questao);
	system("cls");
	if (questao==3){
	printf ("Quando a filha de farao desceu ao rio para lavar-se, avistou a cesta  na margem do rio e pediu para uma de suas criadas pega-la \n");
	printf ("Miria, filha de Joquebebe e irma do menino, havia ficado observando o que aconteceria ao irmao ao ser colocado nas margens do rio,");
	printf ("e quando percebeu que a filha de farao tinha pegado o menino ela se ofereceu para buscar uma ama entre as hebreias que pudesse criar-lo. \n");
	printf ("Entao Miria foi buscar Joquebede, e ela acabou sendo contratada para criar o próprio filho como ama ate que ele crescesse (ex 2:10)  \n");
	}
	else{
	system("cls");	
	resposta4();
	cont=0;	
	}
	printf ("Tendo o menino crescido, ela o levou a filha do farao, que lhe deu o nome moises. \n");
	printf ("Sendo Moises ja adulto, foi ao lugar onde estava os hebreus e descobriu como era pesado seu trabalho \n");
	printf ("viu tambem um egpicio espancar um hebreu.  \n");
	printf ("O que moises deve fazer?.  \n");
	printf ("1-	Matar o Egipcio e o esconder sob a areia?  \n");
	printf ("2-Ajudar com o castigo?  \n");
	printf ("3-Matar o egpcio e o hebreu ?  \n");
	scanf  ("%d",&questao);
	if(questao==1){
	printf ("Quando farao soube disso, procurou matar Moises, \n");
	printf ("mas este fugiu e foi morar  na terra de midia. \n");
	printf ("viu tambem um egpicio espancar um hebreu.  \n");
	printf ("Ali acentou-se a beira de um poço.  \n");
		
	}
	else{
	system("cls");
	resposta4();
	cont=0;	
	}
	
	}while (cont!= 0);


	
}
		
		
	}
	
	
	
	
	
