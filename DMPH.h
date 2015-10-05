 /**
  * ========================================================================================================================
  * @ Software: DMPH_L298N  
  * @ Description: Ajuda na implementação de tarefas usando o Driver Motor Ponte H L298N.
  * @ Version: 1.0.2 / Data: 25 de setembro de 2015
  * @ Developer Rodrigues F. A. S.
  * @ Site: rodriguesfas.github.io / E-mail: franciscosouzaacer@gmail.com 
  * ========================================================================================================================
  * @ Histórico Version
  * 
  * @ 09 de agosto de 2015 Version 1.0.0 - Construção da lib.
  * 
  * @ 14 de agosto de 2015 Version 1.1.0 - Atualização da função ligar(), antes funcionava com 
  * o uso de dois, parâmetros um com a orientação da rotação do motor e outro como valor da 
  * velocidade. Consequentimente utilisando duas variaveis. Foi substituído para usar apenas uma 
  * variavel que já informa o valor da velocidade e a orientação da rotação da seguinte forma:
  * o valor informado já é a velocidade de rotação do motor propriamente dita, porem se o valor 
  * for positívo, a rotação é horária se o valor for negativo a rotação é antihorária. Assim 
  * obten-se uma sintáxi mais simples que a anterior e economia de memória.
  *
  * @ 25 de setembro de 2015 - remoção do método desligar, renomedo o metodo ligar para move,
  * e alterado para quando recebe por parametro valor 0 ele desliga o motor. Tambem foi alterado
  * o nome de algumas variaveis de português para ingles.
  * ========================================================================================================================
  */

/**
 * Diretivas de Compilação - Elas não deixam as declarações/definições da bliblioteca serem inseridas 
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

  public:
 	/* Construtor recebe os parâmetros os pinos correspondente a saída. (pin_Motor, pin_Motor, pin_Veloidade_Motor) */
  	DMPH(int pin1, int pin2, int pinVel); 

 	// Método move, quer recebe o sentido da rotação do motor e o valor da velocidade.
  	void move(int vel);
  };
  
  
#endif
