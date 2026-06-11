#ifndef __key_H__
#define __key_H__
#include"Public.h"

//Define the control pin for the independent key
sbit KEY1 = P3 ^ 1;
sbit KEY2 = P3 ^ 0;
sbit KEY3 = P3 ^ 2;
sbit KEY4 = P3 ^ 3;

//Use macro definitions to independently determine the key value of the pressed key.
#define KEY1_PRESS	1
#define KEY2_PRESS	2
#define KEY3_PRESS	3
#define KEY4_PRESS	4
#define KEY_UNPRESS	0	

// Function Definition
u8 key_scan(u8 mode);

#endif 
