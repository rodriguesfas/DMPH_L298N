/**
 * ========================================================================================== 
 * @ Software: DMPH_L298N  
 * @ Description: Consiste em ligar o motor no sentido horario, antiorario e desligar.
 * @ Version: 1.1.0 / Data: 14 de agosto de 2015
 * @ Developer Rodrigues F. A. S.
 * @ Site: rodriguesfas.github.io / E-mail: franciscosouzaacer@gmail.com 
 * ==========================================================================================
 */

 /* importe da lib. */
 #include <DMPH.h>

/**
 * Instância dois objetos chamados motor1 e motor2, passando por parametros os pinos de conexão 
 * onde esta ligado cada um nas portas do Arduíno (motor, motor, Pino velocidade).
 */
 DMPH motor1(2, 4, 3);
 DMPH motor2(6, 7, 5);

 void setup(){}

 void loop() {
 	motor1.move(100); // valores positivos liga motor no sentido horário.
 	motor2.move(100);

 	delay(5000); // espera 5 segundos
 	
 	motor1.move(0);
 	motor2.move(0);
 	
 	delay(5000);

 	motor1.move(-100); // valores negativos liga motor no sentido antiorário.
 	motor2.move(-100);

 	delay(5000);
 	
 	motor1.move(0);
 	motor2.move(0);

 	delay(5000);
 }