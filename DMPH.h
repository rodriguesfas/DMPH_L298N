/**
 * ========================================================================================== 
 * @Software: DMPH_L298N  
 * @Description: Ajuda na implementação de tarefas usando o Driver Motor Ponte H L298N.
 * @Version: 1.0.0 / Data: 09 de agosto de 2015
 * @Developer Rodrigues F. A. S.
 * @Site: rodriguesfas.github.io / E-mail: franciscosouzaacer@gmail.com 
 * ==========================================================================================
 */

/**
 * Diretivas de Compilação - Elas não deixão as declarações/definições da bliblioteca serem inseridas 
 * mais de uma vez em um projeto. 
 */
#ifndef DMPH_H
#define DMPH_H

/* Permite fazer uso, ter acesso as funções do Arduíno. */
#include <Arduino.h>
 
 /**
  * Class DMPH - Possue os atributos e métodos.
  */
  class DMPH {
  private:
 	// Atributos
  	int pino1;
  	int pino2;
  	int pinoVel;
  	char orientacao;
  	int velocidade;

  public:
 	/* Construtor recebe os parâmetros os pinos correspondente a saída. (pin_Motor, pin_Motor, pin_Veloidade_Motor) */
  	DMPH(int pin1, int pin2, int pinVel); 

 	// Método ligar, quer recebe o sentido da rotação do motor e o valor da velocidade.
  	void ligar(char orient, int vel);

 	// Método desliga motor.
  	void desligar( ); 
  };
  
  
#endif