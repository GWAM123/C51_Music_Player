#ifndef __public_H__
#define __public_H__

#include <reg52.h>
#include <intrins.h>

typedef unsigned char u8;
typedef unsigned int u16;

extern volatile u8 TH0_val; //Initial value for timer 0 high byte
extern volatile u8 TL0_val; //Initial value for timer 0 low byte
extern volatile u8 play_switch; // Setting play on/off

sbit LED_0 = P2^0;
sbit LED_1 = P2^1;
sbit LED_2 = P2^2;
sbit LED_3 = P2^3;
sbit LED_4 = P2^4;
sbit LED_5 = P2^6;
sbit LED_6 = P2^7;



// Function Declarations
void delay_10us(u16 ten_us);
void delay_ms(u16 ms);
void delay_s(u16 s);
void exti0_init(void);
void exti1_init(void);
void time0_init();



#endif