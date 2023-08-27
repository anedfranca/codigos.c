#include <stdio.h>
#include <stdlib.h>

main () 
{
int idade;
char nome [20];
  
printf ("Bom dia!");
printf ("Digite sua idade: ");
  scanf ("%d" , &idade);
printf ("Digite o seu nome: ");
  scanf ("%s" , &nome);

printf ("Nome digitado: %s \n", nome);
printf ("Idade digitada: %d \n", idade);

if (idade<= 18){
  printf ("Você é menor de idade!");
}else {
    
  printf ("Você é maior de idade");
}
  
  system("PAUSE");
}



//comentario//

#include <stdio.h>
#include <stdlib.h>

int main ()
{
char nome [15];
float av1, av2, media;


printf ("Digite o seu nome: ");
  scanf ("%s" , &nome);
printf("Digite a primeira nota do aluno: ");
  scanf("%f",&av1);
printf("Digite a segunda nota do aluno: ");
  scanf("%f",&av2);


if (av1<4){
  printf ("Precisa fazer a av3.");
 
}else {
 media = (av1 + av2) / 2;
if (media<6){
  printf ("precisa fazer a av3. media informada!  %.1f" ,media);
  
}else {
  printf ("Aprovado!! Sua média foi: %.1f \n" ,media );

}

}
}
 
