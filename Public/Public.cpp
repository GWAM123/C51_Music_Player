#include "Public.h"

unsigned char data i, j;

// Function Definition
void delay_10us(u16 ten_us)
{
	while (ten_us--);
}

void Delay_1ms(void)	//@11.0592MHz
{
	_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
}

void delay_ms(u16 ms)
{
	while (ms--)
	{
		Delay_1ms();
	}

}

void Delay50ms(void)	//@11.0592MHz
{
	i = 90;
	j = 163;
	do
	{
		while (--j);
	} while (--i);
}


void delay_s(u16 s)
{
	while (s--)
	{
		Delay50ms();
	}
}

void exti0_init(void) //External interrupt 0 initialization function
{
	IT0 = 1; //Configure external interrupt 0 to be triggered on the falling edge
	EX0 = 1; //Enable external interrupt 0
	EA = 1; //Enable global interrupts
}

void exti1_init(void) //External interrupt 1 initialization function
{
	IT1 = 1; //Configure external interrupt 1 to be triggered on the falling edge
	EX1 = 1; //Enable external interrupt 1
	EA = 1; //Enable global interrupts
}

void time0_init(void) //Timer 0 initialization function
{
	TMOD |= 0X01; //Configure timer 0 to operate in mode 1 (8-bit auto-reload timer mode)
	TH0 = 0x00;	 //Set the initial value of the timer to the provided value
	TL0 = 0x00;	 //Set the initial value of the timer to the provided value
	ET0 = 1; //Enable timer 0 interrupt
	EA = 1;  //Enable global interrupts
	TR0 = 0; //Stop timer 0 until it is needed to play the musical notes
}