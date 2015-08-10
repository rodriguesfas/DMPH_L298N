/**
 * ========================================================================================== 
 * @Software: DMPH_L298N  
 * @Description: Consiste em ligar o motor no sentido horario, antiorario e desligar.
 * @Version: 1.0.0 / Data: 09 de agosto de 2015
 * @Developer Rodrigues F. A. S.
 * @Site: rodriguesfas.github.io / E-mail: franciscosouzaacer@gmail.com 
 * ==========================================================================================
 */

 /* importe da lib. */
 #include <DMPH.h>

/**
 * Instancia um objeto chamado motor, passando por parametros os pinos de conexão 
 * onde esta ligado o motor (motor, motor, Pino velocidade).
 */
 DMPH motor1(2, 4, 3);
 DMPH motor2(6, 7, 5);

 void setup(){}

 void loop() {
 	motor1.ligar('h', 100); // liga motor no sentido horário
 	motor2.ligar('h', 100);

 	delay(5000); // espera 5 segundos
 	
 	motor1.desligar( );
 	motor2.desligar( );
 	
 	delay(5000);

 	motor1.ligar('a', 100); // liga motor no sentido antiorário
 	motor2.ligar('a', 100);

 	delay(5000);
 	
 	motor1.desligar( );
 	motor2.desligar( );

 	delay(5000);
 }