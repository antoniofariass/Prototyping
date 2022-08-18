//---------------------------------------------------------------------------------------------------
//Questao 2
//----------------------------------------------------------------------------------------------------

#include "stm32f4xx.h"
#include "Utility.h"

int main(void){
	Configure_Clock();

	Delay_Start();

// Delay_us(); //delay mili
//	Delay_ms(); //delay micro

	RCC->AHB1ENR |= 1; //habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12); //seleciona modo de saida digital no pino

	while(4){
		GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
		Delay_ms(1000);
		GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
		Delay_ms(250);
	}
}

//------------------------------------------------------------------------------------------------------
//Questao 3 
//--------------------------------------------------------------------------------------------------------

#include "stm32f4xx.h"
#include "Utility.h"

int main(void){
	Configure_Clock();

	Delay_Start();

	RCC->AHB1ENR |= 1; //habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12); //seleciona modo de saida digital no pino

	while(1){

		GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
		Delay_ms(50);
		GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
		Delay_ms(50);

		Delay_ms(1500);

		GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
		Delay_ms(50);
		GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
		Delay_ms(50);

		GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
		Delay_ms(50);
		GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
		Delay_ms(50);

		Delay_ms(1500);


	}
}

//---------------------------------------------------------------------------------------------------------------
//Questao 4
//---------------------------------------------------------------------------------------------------------------

#include "stm32f4xx.h"
#include "Utility.h"

int main(void){
	Configure_Clock();

	Delay_Start();

// Delay_us(); //delay mili
//	Delay_ms(); //delay micro

	RCC->AHB1ENR |= 1; //habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12); //seleciona modo de saida digital no pino
	
	int tempoHertz = 1000;

	while(4){

		GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
		Delay_ms(50);
		GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
		Delay_ms(50);

		Delay_ms(tempoHertz);

		tempoHertz = tempoHertz-80;
	}
}


//---------------------------------------------------------------------------------------------------------------
//Questao 6
//---------------------------------------------------------------------------------------------------------------

#include "stm32f4xx.h"
#include "Utility.h"

int main(void) {
	Configure_Clock();

	Delay_Start();

	RCC->AHB1ENR |= 1; //habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12); //seleciona modo de saida digital no pino
	int j;
	while (1) {
		for (int k = 0; k < 20; k += 1) {
			for ( j = 0; j < 50; j++) {
				GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
				Delay_ms(k);
				GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
				Delay_ms(9);
			}
		}

	}
}


//---------------------------------------------------------------------------------------------------------------
//Questao 7
//---------------------------------------------------------------------------------------------------------------

#include "stm32f4xx.h"
#include "Utility.h"

int main(void) {
	Configure_Clock();

	Delay_Start();

	RCC->AHB1ENR |= 1; //habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12); //seleciona modo de saida digital no pino

	while (1) {
		for (int k = 0; k < 20; k += 1) {
			for (int j = 0; j < 50; j++) {
				GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
				Delay_ms(k);
				GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
				Delay_ms(5);
			}
		}

	}
}

//---------------------------------------------------------------------------------------------------------------
//Questao 8
//---------------------------------------------------------------------------------------------------------------


#include "stm32f4xx.h"
#include "Utility.h"

int main(void){
	Configure_Clock();

	Delay_Start();

// Delay_us(); //delay mili
//	Delay_ms(); //delay micro

	RCC->AHB1ENR |= 1; //habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12); //seleciona modo de saida digital no pino
	GPIOA->MODER |= (1 << 14); //seleciona modo de saida digital no pino


	while(4){

		GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
		GPIOA->ODR |= (1 << 7); //faz o estado do pino com HIGH
		Delay_ms(250);

		GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
		GPIOA->ODR &= ~(1 << 7); //faz o estado do pino com LOW
		Delay_ms(250);
	}
}


//---------------------------------------------------------------------------------------------------------------
//Questao 9
//---------------------------------------------------------------------------------------------------------------
	

#include "stm32f4xx.h"
#include "Utility.h"

int main(void){
	Configure_Clock();

	RCC->AHB1ENR |= 1; //habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12); //seleciona modo de saida digital no pino
	GPIOA->MODER |= (1 << 14); //seleciona modo de saida digital no pino


	while(4){

		GPIOA->ODR |= (1 << 7); //faz o estado do pino com HIGH
		GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
		Delay_ms(250);

		Delay_ms(1000);

		GPIOA->ODR |= (1 << 6); //faz o estado do pino com HIGH
		GPIOA->ODR &= ~(1 << 7); //faz o estado do pino com LOW
		Delay_ms(250);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
		GPIOA->ODR |= (1 << 7); //faz o estado do pino com HIGH
		Delay_ms(250);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 6); //faz o estado do pino com LOW
		GPIOA->ODR &= ~(1 << 7); //faz o estado do pino com LOW
		Delay_ms(250);

		Delay_ms(1000);


	}
}


//---------------------------------------------------------------------------------------------------------------
//Questao 10
//---------------------------------------------------------------------------------------------------------------
	

#include "stm32f4xx.h"
#include "Utility.h"

int main(void){
	Configure_Clock();

	Delay_Start();


	RCC->AHB1ENR |= 1; //habilita o clock do GPIOA

	GPIOA->MODER |= (1 << 12); //seleciona modo de saida digital no pino
	GPIOA->MODER |= (1 << 14); //seleciona modo de saida digital no pino

	int delay1 = 1;
	int delay2 = 500;

	while(1){

		GPIOA->ODR &= ~(1 << 6);	//faz o estado do pino como LOW
		Delay_us(delay1);
		GPIOA->ODR |= (1 << 6);
		Delay_us(delay2);


		GPIOA->ODR &= ~(1 << 7);	//faz o estado do pino como LOW
		Delay_us(delay2);
		GPIOA->ODR |= (1 << 7);
		Delay_us(delay1);

		delay1 += 1;
		delay2 -= 1;

		if(delay1 == 500){
			delay1 = 1;
			delay2 = 500;
		}
	}
}


//---------------------------------------------------------------------------------------------------------------
//Questao 14
//---------------------------------------------------------------------------------------------------------------

#include "stm32f4xx.h"
#include "Utility.h"

int main(void){
	Configure_Clock();

	Delay_Start();

	RCC->AHB1ENR |= (1 << 0);

	GPIOA->MODER |= (1 << 0);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 2);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 4);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 6);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 18);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 20);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 22);		//seleciona modo de sa da digital no pino

	while(1){
	GPIOA->ODR |= (1 << 0); //Vermelho 1 aceso
	GPIOA->ODR |= (1 << 9); // Verde 2 aceso
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 9); // Verde 2 apagado
	GPIOA->ODR |= (1 << 10); // Amarelo 2 aceso
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 10); // Amarelo 2 apagado
	GPIOA->ODR |= (1 << 11); // Vermelho 2 aceso
	GPIOA->ODR |= (1 << 2); // Verde 1 aceso
	GPIOA->ODR &= ~(1 << 0); //Vermelho 1 apagado
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 2); // Verde 1 apagado
	GPIOA->ODR |= (1 << 1); // Amarelo 1 aceso
	Delay_ms(1000);

	GPIOA->ODR &= ~(1 << 1); // Amarelo 1 apagado
	GPIOA->ODR |= (1 << 0); //Vermelho 1 aceso
	GPIOA->ODR |= (1 << 9); // Verde 2 aceso
	GPIOA->ODR &= ~(1 << 11); // Vermelho 2 apagado
	}
}


//---------------------------------------------------------------------------------------------------------------
//Questao 15
//---------------------------------------------------------------------------------------------------------------

#include "stm32f4xx.h"
#include "Utility.h"

int main(void){
	Configure_Clock();

	Delay_Start();

	RCC->AHB1ENR |= (1 << 0);

	GPIOA->MODER |= (1 << 0);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 2);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 4);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 6);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 18);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 20);		//seleciona modo de sa da digital no pino
	GPIOA->MODER |= (1 << 22);
		

	}
	void zero(void){
		GPIOA->ODR |= (1 << 1);
		GPIOA->ODR |= (1 << 2);
		GPIOA->ODR |= (1 << 3);
		GPIOA->ODR |= (1 << 9);
		GPIOA->ODR |= (1 << 10);
		GPIOA->ODR |= (1 << 11);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 1);
		GPIOA->ODR &= ~(1 << 2);
		GPIOA->ODR &= ~(1 << 3);
		GPIOA->ODR &= ~(1 << 9);
		GPIOA->ODR &= ~(1 << 10);
		GPIOA->ODR &= ~(1 << 11);
	}
	// 1

	void um(void){
		GPIOA->ODR |= (1 << 9); //acende
		GPIOA->ODR |= (1 << 1); //acende

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 9); //apaga
		GPIOA->ODR &= ~(1 << 1); //apaga
	}


	// 2
	void dois(void){
		GPIOA->ODR |= (1 << 10);
		GPIOA->ODR |= (1 << 9);
		GPIOA->ODR |= (1 << 0);
		GPIOA->ODR |= (1 << 3);
		GPIOA->ODR |= (1 << 2);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 10);
		GPIOA->ODR &= ~(1 << 9);
		GPIOA->ODR &= ~(1 << 0);
		GPIOA->ODR &= ~(1 << 3);
		GPIOA->ODR &= ~(1 << 2);
	}

	// 3
	void tres(void){
		GPIOA->ODR |= (1 << 10);
		GPIOA->ODR |= (1 << 9);
		GPIOA->ODR |= (1 << 0);
		GPIOA->ODR |= (1 << 1);
		GPIOA->ODR |= (1 << 2);


		Delay_ms(1000);

		GPIOA->ODR  &= ~(1 << 10);
		GPIOA->ODR  &= ~(1 << 9);
		GPIOA->ODR  &= ~(1 << 0);
		GPIOA->ODR  &= ~(1 << 1);
		GPIOA->ODR  &= ~(1 << 2);
	}

	// 4
	void quatro(void){
		GPIOA->ODR |= (1 << 11);
		GPIOA->ODR |= (1 << 0);
		GPIOA->ODR |= (1 << 9);
		GPIOA->ODR |= (1 << 1);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 11);
		GPIOA->ODR &= ~(1 << 0);
		GPIOA->ODR &= ~(1 << 9);
		GPIOA->ODR &= ~(1 << 1);
	}

	// 5
	void cinco(void){
		GPIOA->ODR |= (1 << 10);
		GPIOA->ODR |= (1 << 11);
		GPIOA->ODR |= (1 << 0);
		GPIOA->ODR |= (1 << 1);
		GPIOA->ODR |= (1 << 2);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 10);
		GPIOA->ODR &= ~(1 << 11);
		GPIOA->ODR &= ~(1 << 0);
		GPIOA->ODR &= ~(1 << 1);
		GPIOA->ODR &= ~(1 << 2);
	}
	//6
	void seis(void){
		GPIOA->ODR |= (1 << 10);
		GPIOA->ODR |= (1 << 11);
		GPIOA->ODR |= (1 << 0);
		GPIOA->ODR |= (1 << 1);
		GPIOA->ODR |= (1 << 2);
		GPIOA->ODR |= (1 << 3);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 10);
		GPIOA->ODR &= ~(1 << 11);
		GPIOA->ODR &= ~(1 << 0);
		GPIOA->ODR &= ~(1 << 1);
		GPIOA->ODR &= ~(1 << 2);
		GPIOA->ODR &= ~(1 << 3);
	}

	//7

	void sete(void){
		GPIOA->ODR |= (1 << 10);
		GPIOA->ODR |= (1 << 9);
		GPIOA->ODR |= (1 << 1);


		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 10);
		GPIOA->ODR &= ~(1 << 9);
		GPIOA->ODR &= ~(1 << 1);
	}

	//8
	void oito(void){
		GPIOA->ODR |= (1 << 0);
		GPIOA->ODR |= (1 << 1);
		GPIOA->ODR |= (1 << 2);
		GPIOA->ODR |= (1 << 3);
		GPIOA->ODR |= (1 << 9);
		GPIOA->ODR |= (1 << 10);
		GPIOA->ODR |= (1 << 11);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 0);
		GPIOA->ODR &= ~(1 << 1);
		GPIOA->ODR &= ~(1 << 2);
		GPIOA->ODR &= ~(1 << 3);
		GPIOA->ODR &= ~(1 << 9);
		GPIOA->ODR &= ~(1 << 10);
		GPIOA->ODR &= ~(1 << 11);
	}

	//9
	void nove(void){
		GPIOA->ODR |= (1 << 0);
		GPIOA->ODR |= (1 << 1);
		GPIOA->ODR |= (1 << 2);
		GPIOA->ODR |= (1 << 9);
		GPIOA->ODR |= (1 << 10);
		GPIOA->ODR |= (1 << 11);

		Delay_ms(1000);

		GPIOA->ODR &= ~(1 << 0);
		GPIOA->ODR &= ~(1 << 1);
		GPIOA->ODR &= ~(1 << 2);
		GPIOA->ODR &= ~(1 << 9);
		GPIOA->ODR &= ~(1 << 10);
		GPIOA->ODR &= ~(1 << 11);
	}


	zero();
	um();
	dois();
	tres();
	quatro();
	cinco();
	seis();
	sete();
	oito();

	nove();
	oito();
	sete();
	seis();
	cinco();
	quatro();
	tres();
	dois();
	um();
}

