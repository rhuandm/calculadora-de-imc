#include <stdio.h>

int main() {

  char nome[50] = "";
  float altura = 0.0;
  int idade = 0;
  float peso = 0.0;
  float imc, imc1, imc2, imc3, imc4, imc5, imc6, tmbh, tmbf, altura2, tmbkcal, cutting, bulking, manter;
  int agua, tmbatv, tmbsx, alturacm;
  
  printf("***** CÁLCULO DE SAÚDE *****\n");
  printf("\nQual o seu nome?\n");
  scanf("%s", &nome);
  printf("\nPrazer, %s!\n", nome);
  printf("\nQuantos anos você tem?\n");
  scanf("%d", &idade);
  printf("\nQual a sua altura em metros? (Ex: 1.90)\n");
  scanf("%f", &altura);
  printf("\nQual o seu peso? (Ex: 70.2)\n");
  scanf("%f", &peso);

  alturacm = altura * 100;
  tmbh = 66.5 + (13.75 * peso) + (5.003 * alturacm) - (6.755 * idade);
  tmbf = 655.1 + (9.563 * peso) + (1.850 * alturacm) - (4.676 * idade);
  
  
  printf("\n Sexo: \n 1 - Feminino \n 2 - Masculino \n");
  scanf("%d",&tmbsx);

printf("\n===================================\n");
printf("\n========= RELATÓRIO FINAL =========\n");
printf("\n===================================\n");
  
  switch(tmbsx){

    case 1:
      tmbf = 655.1 + (9.563 * peso) + (1.850 * alturacm) - (4.676 * idade);
      printf("\nSua taxa de metabolismo basal é: %.3f\n", tmbf);
            printf("\n Qual o seu nível de atividade?\n \n 1 - Sedentário \n 2 - Exercício leve \n 3 - Exercício moderado \n 4 - Exercício pesado \n 5 - Exercício muito pesado \n ");
  scanf("%d",&tmbatv);

      
  switch(tmbatv){

    case 1:
      tmbkcal = tmbf * 1.2;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n");

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    case 2:
      tmbkcal = tmbf * 1.375;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n");

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    case 3:
      tmbkcal = tmbf * 1.55;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n");

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    case 4:
      tmbkcal = tmbf * 1.725;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n");

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    case 5:
      tmbkcal = tmbf * 1.9;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n");

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    default:
      printf("\nOpção inválida.\n");
      break;
    
  }
      break;

    //=================================================
    
    case 2:
      tmbh = 66.5 + (13.75 * peso) + (5.003 * alturacm) - (6.755 * idade);
      printf("\nSua taxa de metabolismo basal é: %.3f\n", tmbh);
      printf("\n Qual o seu nível de atividade?\n \n 1 - Sedentário \n 2 - Exercício leve \n 3 - Exercício moderado \n 4 - Exercício pesado \n 5 - Exercício muito pesado \n");
  scanf("%d",&tmbatv);
  
  switch(tmbatv){

    case 1:
      tmbkcal = tmbh * 1.2;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n", tmbkcal);

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    case 2:
      tmbkcal = tmbh * 1.375;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n", tmbkcal);

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    case 3:
      tmbkcal = tmbh * 1.55;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n", tmbkcal);

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    case 4:
      tmbkcal = tmbh * 1.725;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n", tmbkcal);

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    case 5:
      tmbkcal = tmbh * 1.9;
      printf("\nVocê gasta em média por dia: %.3f calorias.\n", tmbkcal);

      cutting = tmbkcal - 500;
      bulking = tmbkcal + 500;
      manter = tmbkcal;

      printf("\nOBJETIVOS:\n");
      printf("\nPara emagrecer, consuma por dia %.3f calorias.\n", cutting);
      printf("Para ganhar massa, consuma por dia %.3f calorias.\n", bulking);
      printf("Para manter o peso, consuma por dia %.3f calorias.\n", manter);
      
      break;

    default:
      printf("\nOpção inválida.\n");
      break;
    
  }
      break;
  }
  
  
  agua = peso * 35;
  altura2 = altura * altura;
  imc = peso / altura2;
  
  if(imc < 18.5){
    printf("\nO seu IMC é %.2f: Abaixo do peso\n", imc);
    
  }

  if(imc > 18.5 && imc <= 24.9){
    printf("\nO seu IMC é %.2f: Peso Normal\n", imc);
    
  }

  if(imc > 24.9 && imc <= 29.9){
    printf("\nO seu IMC é %.2f: Sobrepeso\n", imc);
    
  }

  if(imc > 29.9 && imc <= 34.9){
    printf("\nO seu IMC é %.2f: Obesidade I\n", imc);
    
  }

  if(imc  > 34.9 && imc <= 39.9){
    printf("\nO seu IMC é %.2f: Obesidade II\n", imc);
    
  }

  if(imc >= 40){
    printf("\nO seu IMC é %.2f: Obesidade Mórbida\n", imc);
    
  }
/*
    NÍVEIS DE IMC:
    imc < 18,5 : Abaixo do peso
    imc > 18,5 <=24,9 : Peso normal
    imc > 24,9 <= 29,9 : Sobrepeso
    imc > 29,9 <= 34,9 : Obesidade I
    imc  > 34,9 <= 39,9 : Obesidade II
    imc >= 40 : Obesidade Mórbida
*/
  
  printf("\n A quantidade ideal de água que você deve ingerir diariamente é: %d ml.\n", agua);

  printf("\nCódigo desenvolvido por Rhuan Vieira.\n");

  
  
  return 0;
}