#include "Public.h"
#include "key.h"
#include "Note.h"
#include "Song.h"

sbit BEEP = P2^5;


volatile u8 TH0_val = 0x40; //Initial value for timer 0 high byte
volatile u8 TL0_val = 0x00; //Initial value for timer 0 low byte 
volatile u8 play_switch = 0x01; 
volatile u8 key_time = 0;

int main()
{
    exti1_init();
    time0_init();
    while(1)
    {
        LED_0 = LED_1 = LED_2 = LED_3 = LED_4 = LED_5 = LED_6 = 0; //Turn on all LEDs to indicate that the system is ready
        BEEP = 0; //Turn off the BEEP pin to indicate that the system is ready to play music
        if (key_scan(1) == 1) //If the button is pressed
        {
            Song_of_the_Irish_Whistle(); //Play the song of the Irish Whistle
            TR0 = 0; //Stop timer 0 after playing the song
        }
        else if (key_scan(1) == 2)
        {
            Always_With_Me(); //Play the song Always With Me
            TR0 = 0; //Stop timer 0 after playing the song
        }
        else if (key_scan(1) == 3)
        {
            If_I_can_stop_one_heart_from_breaking(); //Play the song Always With Me
            TR0 = 0; //Stop timer 0 after playing the song
        }
    }
}

void time0() interrupt 1
{
    TH0 = TH0_val; //Reload the initial value of the timer high byte
    TL0 = TL0_val; //Reload the initial value of the timer low byte
    BEEP = ~BEEP; //Toggle the state of the BEEP pin
}

void exti1() interrupt 2 
{
	delay_10us(500);
	if(KEY4 == 0 && key_time == 0)
    {        
        play_switch = 0x00;
        key_time++;
    }
    else
    {
        play_switch = 0x01;
        key_time = 0;
    }
}
