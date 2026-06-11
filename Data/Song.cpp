#include "Public.h"
#include "Song.h"
#include "Note.h"


//Array to store the musical notes for the song
//Song_of_the_Irish_Whistle
const unsigned char code Song_of_the_Irish_Whistle_Notes[112] = {12, 14, 16, 14, 12, 14, 16, 19, 21, 19,
                                                                 24, 19, 21, 19, 16, 14, 12, 14, 16, 12,
                                                                 14, 16, 14, 12, 14, 16, 19, 21, 19, 24,
                                                                 19, 21, 19, 16, 14, 12, 12, 19, 24, 23,
                                                                 19, 21, 24, 21, 23, 19, 16, 19, 21, 19,
                                                                 16, 19, 21, 24, 26, 28, 19, 24, 23, 19,
                                                                 21, 24, 21, 23, 19, 16, 19, 21, 19, 16,
                                                                 19, 21, 24, 26, 24, 12, 14, 16, 14, 12, 
                                                                 14, 16, 19, 21, 19, 24, 19, 21, 19, 16,
                                                                 14, 12, 14, 16, 12, 14, 16, 14, 12, 14, 
                                                                 16, 19, 21, 19, 24, 19, 21, 19, 16, 14,
                                                                 12, 12};

const unsigned char code Song_of_the_Irish_Whistle_Note_values[112] = {5, 5, 4, 5, 5, 4, 5, 5, 2, 4,
                                                                       5, 5, 4, 5, 5, 4, 5, 5, 1, 5,
                                                                       5, 4, 5, 5, 4, 5, 5, 2, 4, 5,
                                                                       5, 4, 5, 5, 3, 5, 1, 4, 4, 5, 
                                                                       5, 4, 5, 5, 2, 4, 5, 5, 4, 5, 
                                                                       5, 5, 5, 5, 5, 1, 4, 4, 5, 5,
                                                                       4, 5, 5, 2, 4, 5, 5, 4, 5, 5,
                                                                       5, 5, 5, 5, 1, 5, 5, 4, 5, 5,
                                                                       4, 5, 5, 2, 4, 5, 5, 4, 5, 5,
                                                                       4, 5, 5, 1, 5, 5, 4, 5, 5, 4,
                                                                       5, 5, 2, 4, 5, 5, 4, 5, 5, 3,
                                                                       5, 0};

const unsigned char code Song_of_the_Irish_Whistle_Rest_values[112] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                       0, 0};

const unsigned char code Song_of_the_Irish_Whistle_Tone = 0; //Variable to store the current tone C being played

const float code Song_of_the_Irish_Whistle_Time = 1; // Speed of the song (120)

//Always With me
//Section 1
const unsigned char code Always_With_Me_Notes_1[70] = { 7, 12, 16,  7, 12, 16,  7, 12, 16,  7,
                                                       12, 12, 14, 16, 12, 19, 16, 14, 19, 14,
                                                       12,  9, 16, 12, 11, 11,  9, 11, 12, 14,
                                                        7, 12, 14, 16, 17, 17, 16, 14, 12, 14,
                                                       12, 14, 16, 12, 19, 16, 14, 19, 14, 12,
                                                        9,  9, 11, 12,  7,  7,  9, 11, 12, 14,
                                                        7, 12, 14, 16, 17, 17, 16, 14, 12, 12};

const unsigned char code Always_With_Me_Note_values_1[70] = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
                                                             4, 5, 5, 5, 5, 3, 5, 4, 4, 4,
                                                             5, 5, 3, 5, 2, 4, 4, 4, 5, 5,
                                                             4, 4, 5, 5, 4, 5, 5, 5, 5, 2,
                                                             5, 5, 5, 5, 3, 5, 4, 4, 4, 5,
                                                             5, 4, 5, 5, 3, 5, 4, 4, 5, 5,
                                                             4, 4, 5, 5, 4, 5, 5, 5, 5, 1};

const unsigned char code Always_With_Me_Rest_values_1[70] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
                                              
const unsigned char code Always_With_Me_Tone = 5; //Variable to store the current tone F being played

const float code Always_With_Me_Time_1 = 0.5; // Speed of the song

//Section 2
const unsigned char code Always_With_Me_Notes_2[67] = {16, 17, 19, 19, 19, 19, 19, 21, 19, 17,
                                                       16, 16, 16, 16, 16, 17, 16, 14, 12, 12,
                                                       12, 11,  9,  9, 11, 12, 14, 14, 14, 16,
                                                       14, 16, 14, 16, 17, 19, 19, 19, 19, 19,
                                                       21, 19, 17, 16, 16, 16, 16, 17, 16, 14,
                                                       12, 11,  9,  9, 11, 12, 14, 7, 12, 14,
                                                       16, 14, 14, 14, 12, 12, 12};

const unsigned char code Always_With_Me_Note_values_2[67] = {5, 5, 4, 4, 4, 4, 5, 5, 5, 5,
                                                             4, 4, 4, 4, 5, 5, 5, 5, 4, 4,
                                                             5, 5, 4, 5, 5, 5, 5, 4, 5, 5, 
                                                             5, 5, 2, 5, 5, 4, 4, 4, 4, 5,
                                                             5, 5, 5, 4, 4, 4, 5, 5, 5, 5,
                                                             5, 5, 5, 5, 5, 5, 5, 4, 4, 5,
                                                             5, 3, 5, 5, 5, 1, 1};

const unsigned char code Always_With_Me_Rest_values_2[67] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 1, 1};

const float code Always_With_Me_Time_2 = 0.40; // Speed of the song

//Section 3
const unsigned char code Always_With_Me_Notes_3[62] = {12, 14, 16, 12, 19, 16, 14, 19, 14, 12,
                                                        9, 16, 12, 11, 12, 11,  9, 11, 12, 14,
                                                        7, 12, 14, 16, 17, 17, 16, 14, 12, 14,
                                                       12, 14, 16, 12, 19, 16, 14, 19, 14, 12,
                                                        9,  9, 11, 12,  7,  7,  7,  9, 11, 12,
                                                       14,  7, 12, 14, 16, 17, 17, 16, 14, 12, 
                                                       12, 12};

const unsigned char code Always_With_Me_Note_values_3[62] = {5, 5, 5, 5, 3, 5, 4, 4, 4, 5, 
                                                             5, 3, 5, 2, 5, 5, 4, 4, 5, 5,
                                                             4, 4, 5, 5, 4, 5, 5, 5, 5, 2,
                                                             5, 5, 5, 5, 3, 5, 4, 4, 4, 5,
                                                             5, 4, 5, 5, 3, 5, 5, 4, 4, 5, 
                                                             5, 4, 4, 5, 5, 4, 5, 5, 5, 5,
                                                             1, 1};

const unsigned char code Always_With_Me_Rest_values_3[62] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             1, 1};

const float code Always_With_Me_Time_3 = 0.50; // Speed of the song

//Section 4
const unsigned char code Always_With_Me_Notes_4[65] = {16, 17, 19, 19, 19, 19, 19, 21, 19, 17,
                                                       16, 16, 16, 16, 16, 17, 16, 14, 12, 12,
                                                       12, 11,  9, 11, 11, 12, 14, 14, 16, 14,
                                                       16, 14, 16, 17, 19, 19, 19, 19, 19, 21,  
                                                       19, 17, 16, 16, 16, 16, 17, 16, 14, 12, 
                                                       11,  9,  9, 11, 12, 14,  7, 12, 14, 16, 
                                                       14, 14, 12, 12, 12};

const unsigned char code Always_With_Me_Note_values_4[65] = {5, 5, 4, 4, 4, 4, 5, 5, 5, 5,
                                                             4, 4, 4, 4, 5, 5, 5, 5, 4, 4,
                                                             5, 5, 4, 4, 5, 5, 4, 5, 5, 5, 
                                                             5, 2, 5, 5, 4, 4, 4, 4, 5, 5,
                                                             5, 5, 4, 4, 4, 5, 5, 5, 5, 5,
                                                             5, 5, 5, 5, 5, 5, 4, 4, 5, 5,
                                                             2, 5, 5, 1, 1};

const unsigned char code Always_With_Me_Rest_values_4[65] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 1, 1};

const float code Always_With_Me_Time_4 = 0.40; // Speed of the song

//Section 5
const unsigned char code Always_With_Me_Notes_5[59] = {12, 14, 16, 12, 19, 16, 14, 19, 14, 12,
                                                        9, 16, 12, 11, 11,  9, 11, 12, 14,  7,
                                                       12, 14, 16, 17, 17, 16, 14, 12, 14, 12,
                                                       14, 16, 12, 19, 16, 14, 19, 14, 12,  9,
                                                        9, 11, 12,  7,  7,  9, 11, 12, 14,  7,
                                                       12, 14, 16, 17, 17, 16, 14, 12, 12};

const unsigned char code Always_With_Me_Note_values_5[59] = {5, 5, 5, 5, 3, 5, 4, 4, 4, 5,
                                                             5, 3, 5, 2, 4, 4, 4, 5, 5, 4,
                                                             4, 5, 5, 4, 5, 5, 5, 5, 2, 5,
                                                             5, 5, 5, 3, 5, 4, 4, 4, 5, 5,
                                                             4, 5, 5, 3, 5, 4, 4, 5, 5, 4,
                                                             4, 5, 5, 4, 5, 5, 5, 5, 1};

const unsigned char code Always_With_Me_Rest_values_5[59] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0};
                                                             
const float code Always_With_Me_Time_5 = 0.50; // Speed of the song

//Section 6
const unsigned char code Always_With_Me_Notes_6[65] = {16, 17, 19, 19, 19, 19, 19, 21, 19, 17,
                                                       16, 16, 16, 16, 16, 17, 16, 14, 12, 12,
                                                       12, 11,  9, 11, 11, 12, 14, 14, 16, 14,
                                                       16, 14, 16, 17, 19, 19, 19, 19, 19, 21,  
                                                       19, 17, 16, 16, 16, 16, 17, 16, 14, 12, 
                                                       11,  9,  9, 11, 12, 14,  7, 12, 14, 16, 
                                                       14, 14, 12, 12, 12};

const unsigned char code Always_With_Me_Note_values_6[65] = {5, 5, 4, 4, 4, 4, 5, 5, 5, 5,
                                                             4, 4, 4, 4, 5, 5, 5, 5, 4, 4,
                                                             5, 5, 4, 4, 5, 5, 4, 5, 5, 5, 
                                                             5, 2, 5, 5, 4, 4, 4, 4, 5, 5,
                                                             5, 5, 4, 4, 4, 5, 5, 5, 5, 5,
                                                             5, 5, 5, 5, 5, 5, 4, 4, 5, 5,
                                                             2, 5, 5, 1, 1};

const unsigned char code Always_With_Me_Rest_values_6[65] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 1, 1};

const float code Always_With_Me_Time_6 = 0.40; // Speed of the song

//Section 7
const unsigned char code Always_With_Me_Notes_7[75] = {12, 14, 16, 12, 19, 16, 14, 19, 14, 12,
                                                        9, 16, 12, 11, 12, 11,  9, 11, 12, 14,
                                                        7, 12, 14, 16, 17, 17, 16, 14, 12, 14,
                                                       12, 14, 16, 12, 19, 16, 14, 19, 14, 12,
                                                        9,  9, 11, 12,  7,  7,  9, 11, 12, 14,
                                                        7, 12, 12,  9, 11, 12, 14,  7, 12, 11, 
                                                        9, 11, 12, 14,  7, 12, 14, 16, 17, 17,
                                                       16, 14, 12, 12, 12};

const unsigned char code Always_With_Me_Note_values_7[75] = {5, 5, 5, 5, 3, 5, 4, 4, 4, 5,
                                                             5, 3, 5, 2, 5, 5, 4, 4, 5, 5,
                                                             4, 4, 5, 5, 4, 5, 5, 5, 5, 2,
                                                             5, 5, 5, 5, 3, 5, 4, 4, 4, 5, 
                                                             5, 4, 5, 5, 3, 5, 4, 4, 5, 5, 
                                                             4, 4, 5, 5, 4, 5, 5, 2, 5, 5,
                                                             4, 4, 5, 5, 4, 4, 5, 5, 4, 5,
                                                             5, 5, 5, 1, 1};

const unsigned char code Always_With_Me_Rest_values_7[75] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 4, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 1, 1};
                                                             
const float code Always_With_Me_Time_7 = 0.50; // Speed of the song

//Section 8
const unsigned char code Always_With_Me_Notes_8[65] = {16, 17, 19, 19, 19, 19, 19, 21, 19, 17,
                                                       16, 16, 16, 16, 16, 17, 16, 14, 12, 12,
                                                       12, 11,  9, 11, 11, 12, 14, 14, 16, 14,
                                                       16, 14, 16, 17, 19, 19, 19, 19, 19, 21,  
                                                       19, 17, 16, 16, 16, 16, 17, 16, 14, 12, 
                                                       11,  9,  9, 11, 12, 14,  7, 12, 14, 16, 
                                                       14, 14, 12, 12, 12};

const unsigned char code Always_With_Me_Note_values_8[65] = {5, 5, 4, 4, 4, 4, 5, 5, 5, 5,
                                                             4, 4, 4, 4, 5, 5, 5, 5, 4, 4,
                                                             5, 5, 4, 4, 5, 5, 4, 5, 5, 5, 
                                                             5, 2, 5, 5, 4, 4, 4, 4, 5, 5,
                                                             5, 5, 4, 4, 4, 5, 5, 5, 5, 5,
                                                             5, 5, 5, 5, 5, 5, 4, 4, 5, 5,
                                                             2, 5, 5, 1, 1};

const unsigned char code Always_With_Me_Rest_values_8[65] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                             0, 0, 0, 1, 1};

const float code Always_With_Me_Time_8 = 0.40; // Speed of the song


//If_I_can_stop_one_heart_from_breaking_Notes
//Section 1
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_1[55] = {12, 24, 23, 24, 19, 24, 17, 24, 16, 24,
                                                                              14, 24, 16, 24, 17, 24, 12, 24, 23, 24,
                                                                              31, 24, 29, 24, 28, 24, 26, 24, 28, 24,
                                                                              29, 12, 24, 23, 24, 31, 24, 29, 24, 28,
                                                                              24, 26, 24, 28, 24, 29, 24, 12, 24, 23,
                                                                              24, 31, 24, 29, 24};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_1[55] = {6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
                                                                                    6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
                                                                                    6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
                                                                                    5, 6, 6, 6, 6, 6, 6, 6, 6, 6,
                                                                                    6, 6, 6, 6, 6, 6, 6, 6, 6, 6,
                                                                                    6, 6, 6, 6, 6};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_1[55] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                                    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                                    0, 0, 0, 0, 0};

const int code If_I_can_stop_one_heart_from_breaking_Tone_1 = -1; //Variable to store the current tone B being played

const float code If_I_can_stop_one_heart_from_breaking_Time = 0.75; // Speed of the song

//Section 2
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_2[15] = {16, 16, 16, 16, 19, 19, 17, 16, 4, 16,
                                                                              16, 16, 16, 17, 17};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_2[15] = {4, 4, 4, 5, 5, 4, 5, 3, 5, 4,
                                                                                    4, 4, 5, 5, 2};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_2[15] = {0, 0, 0, 0, 1, 0, 0, 0, 3, 0,
                                                                                    0, 0, 0, 1, 0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_2 = -1; //Variable to store the current tone B being played

//Section 3
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_3[11] = {16, 16, 16, 16, 19, 19, 17, 16, 17, 19, 19};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_3[11] = {4, 4, 4, 5, 5, 4, 5, 3, 5, 5, 4};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_3[11] = {0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_3 = -1; //Variable to store the current tone B being played

//Section 4
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_4[6] = {12, 12, 12, 14, 12, 12};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_4[6] = {6, 6, 6, 5, 6, 4};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_4[6] = {0, 1, 0, 0, 1, 0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_4 = -1; //Variable to store the current tone B being played
                                               
//Section 5
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_5[29] = {16, 17, 17, 17, 16, 17, 17, 17, 16, 17,
                                                                              17, 17, 16, 16, 17, 17, 16, 12, 14, 12,
                                                                              14, 14, 14, 14, 14, 14, 14, 16, 16};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_5[29] = {5, 5, 5, 5, 6, 6, 6, 4, 5, 5,
                                                                                   5, 6, 6, 6, 6, 6, 5, 5, 5, 6,
                                                                                   6, 5, 5, 5, 6, 6, 5, 5, 2};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_5[29] = {0, 0, 0, 0, 0, 1, 0, 3, 0, 0,
                                                                                   0, 1, 0, 0, 1, 0, 3, 0, 1, 1,
                                                                                   1, 0, 0, 0, 0, 1, 0, 0, 0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_5 = -1; //Variable to store the current tone B being played

//Section 6
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_6[26] = {21, 21, 23, 23, 19, 19, 19, 28, 28, 28,
                                                                              28, 29, 28, 28, 24, 24, 24, 24, 24, 24,
                                                                              23, 24, 24, 28, 28, 28};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_6[26] = {5, 5, 5, 5, 6, 6, 6, 5, 6, 4,
                                                                                    5, 6, 6, 6, 5, 6, 4, 6, 6, 5,
                                                                                    6, 6, 6, 5, 6, 1};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_6[26] = {0, 0, 0, 0, 0, 1, 0, 0, 1, 0,
                                                                                    0, 0, 1, 0, 0, 1, 0, 0, 1, 0,
                                                                                    0, 1, 0, 0, 1, 0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_6 = -4; //Variable to store the current tone ♭A being played

//Section 7
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_7[38] = {21, 21, 23, 23, 19, 19, 19, 28, 28, 28,
                                                                              28, 29, 31, 31, 24, 31, 31, 31, 29, 29,
                                                                              28, 28, 29, 28, 28, 24, 24, 24, 26, 27,
                                                                              28, 26, 24, 24, 26, 27, 28, 29};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_7[38] = {5, 5, 5, 5, 6, 6, 6, 5, 6, 4,
                                                                                    5, 6, 6, 6, 5, 6, 4, 6, 6, 6,
                                                                                    6, 5, 6, 6, 5, 6, 6, 2, 6, 5,
                                                                                    4, 4, 4, 6, 6, 5, 4, 4};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_7[38] = {0, 0, 0, 0, 0, 1, 0, 0, 1, 0,
                                                                                    0, 0, 1, 0, 0, 1, 1, 1, 1, 1,
                                                                                    1, 0, 0, 1, 0, 1, 0, 2, 0, 0,
                                                                                    0, 0, 0, 0, 0, 0, 0, 0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_7 = -4; //Variable to store the current tone ♭A being played

//Section 8
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_8[230] = {16, 17, 17, 17, 16, 17, 17, 17, 16, 17,
                                                                              17, 17, 16, 16, 17, 17, 16, 12, 14, 12,
                                                                              14, 14, 14, 14, 14, 14, 14, 16, 16, 16};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_8[30] = {5, 5, 5, 5, 6, 6, 6, 4, 5, 5,
                                                                                   5, 6, 6, 6, 6, 6, 5, 5, 5, 6,
                                                                                   6, 5, 5, 5, 6, 6, 5, 5, 0, 2};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_8[30] = {0, 0, 0, 0, 0, 1, 0, 3, 0, 0,
                                                                                   0, 1, 0, 0, 1, 0, 3, 0, 1, 1,
                                                                                   1, 0, 0, 0, 0, 1, 0, 0, 1, 0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_8 = -1; //Variable to store the current tone B being played

//Section 9
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_9[85] = {21, 21, 23, 23, 19, 19, 19, 28, 28, 28,
                                                                              28, 29, 28, 28, 24, 24, 24, 24, 24, 24,
                                                                              23, 24, 24, 28, 28, 28, 28, 26, 28, 26,
                                                                              26, 26, 21, 21, 23, 23, 19, 19, 19, 28,
                                                                              28, 28, 28, 29, 31, 31, 24, 31, 31, 31,
                                                                              29, 29, 28, 28, 29, 28, 28, 23, 24, 29,
                                                                              31, 31, 29, 24, 31, 32, 32, 31, 27, 27,
                                                                              29, 36, 31, 29, 28, 24, 24, 19, 24, 26,
                                                                              26, 24, 21, 23, 23};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_9[85] = {5, 5, 5, 5, 6, 6, 6, 5, 6, 4,
                                                                                    5, 6, 6, 6, 5, 6, 4, 6, 6, 5,
                                                                                    6, 6, 6, 5, 6, 2, 6, 6, 6, 6,
                                                                                    5, 5, 5, 5, 5, 5, 6, 6, 6, 5,
                                                                                    6, 4, 5, 6, 6, 6, 5, 6, 4, 6,
                                                                                    6, 6, 6, 5, 6, 6, 5, 5, 2, 4,
                                                                                    5, 6, 4, 4, 4, 5, 6, 5, 6, 6,
                                                                                    4, 5, 5, 5, 4, 6, 5, 5, 3, 5, 
                                                                                    2, 5, 5, 5, 2};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_9[85] = {0, 0, 0, 0, 0, 1, 0, 0, 1, 0,
                                                                                    0, 0, 1, 0, 0, 1, 0, 0, 1, 0,
                                                                                    0, 1, 0, 0, 1, 1, 1, 1, 1, 1,
                                                                                    1, 3, 0, 0, 0, 0, 0, 1, 0, 0, 
                                                                                    1, 2, 0, 0, 1, 0, 0, 1, 1, 1,
                                                                                    1, 1, 1, 0, 0, 1, 0, 0, 0, 0,
                                                                                    1, 0, 0, 0, 0, 1, 0, 0, 1, 0,
                                                                                    3, 0, 0, 0, 0, 1, 0, 0, 0, 1,
                                                                                    3, 0, 0, 1, 0};
const int code If_I_can_stop_one_heart_from_breaking_Tone_9 = -4; //Variable to store the current tone ♭A being played

//Section 10
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_10[58] = {21, 21, 23, 23, 19, 19, 19, 28, 28, 28,
                                                                               28, 29, 28, 28, 24, 24, 24, 24, 24, 24,
                                                                               23, 24, 24, 28, 28, 28, 28, 31, 28, 21,
                                                                               21, 23, 23, 19, 19, 19, 28, 28, 28, 28,
                                                                               29, 31, 31, 24, 31, 31, 31, 29, 29, 28, 
                                                                               28 ,29, 28, 28, 28, 23, 24, 24};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_10[58] = {5, 5, 5, 5, 6, 6, 6, 5, 6, 4,
                                                                                     5, 6, 6, 6, 5, 6, 4, 6, 6, 5,
                                                                                     6, 6, 6, 5, 6, 2, 5, 4, 5, 5,
                                                                                     5, 5, 5, 6, 6, 6, 5, 6, 4, 5,
                                                                                     6, 6, 6, 5, 6, 4, 6, 6, 6, 6,
                                                                                     5, 6, 6, 5, 2, 5, 5, 1};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_10[58] = {0, 0, 0, 0, 0, 1, 0, 0, 1, 0,
                                                                                     0, 0, 1, 0, 0, 1, 0, 0, 1, 0,
                                                                                     0, 1, 0, 0, 1, 1, 1, 1, 3, 0,
                                                                                     0, 0, 0, 0, 1, 0, 0, 1, 2, 0,
                                                                                     0, 1, 0, 0, 1, 1, 1, 1, 1, 1,
                                                                                     0, 0, 1, 1, 2, 1, 0, 0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_10 = -4; //Variable to store the current tone ♭A being played

//Section 11
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_11[16] = {12, 24, 23, 24, 19, 24, 17, 24, 16, 24,
                                                                              14, 24, 16, 24, 17, 24};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_11[16] = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
                                                                                     5, 5, 5, 5, 5, 4};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_11[16] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
                                                                                     0, 0, 0, 0, 0, 3};

const int code If_I_can_stop_one_heart_from_breaking_Tone_11 = -1; //Variable to store the current tone B being played

//Section 12
const unsigned char code If_I_can_stop_one_heart_from_breaking_Notes_12[2] = {23,24};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Note_values_12[2] = {4,0};

const unsigned char code If_I_can_stop_one_heart_from_breaking_Rest_values_12[2] = {0,0};
                                               
const int code If_I_can_stop_one_heart_from_breaking_Tone_12 = -4; //Variable to store the current tone ♭A being played



// Function Definition
u8 Fre_TH_selection(u8 Note, u8 Tone)
{
    Note = Note + Tone; //Calculate the offset for the current note
    if (Note < 12) //If the note is in the low octave
    {
        LED_1 = 1; //Turn off LED_1 to indicate that the note is in the low octave
        TH0_val = NoteC_L_TH[Note]; //Set the initial value for timer 0 high byte based on the current note
    }
    else if (Note < 24) //If the note is in the middle octave
    {
        LED_2 = 1; //Turn off LED_2 to indicate that the note is in the middle octave
        TH0_val = NoteC_M_TH[Note - 12]; //Set the initial value for timer 0 high byte based on the current note
    }
    else if (Note < 36) //If the note is in the middle octave
    {
        LED_3 = 1; //Turn off LED_3 to indicate that the note is in the middle octave
        TH0_val = NoteC_H_TH[Note - 24]; //Set the initial value for timer 0 high byte based on the current note
    }
    else //If the note is in the high octave
    {
        LED_4 = 1; //Turn off LED_4 to indicate that the note is in the high octave
        TH0_val = NoteC_HH_TH[Note - 36]; //Set the initial value for timer 0 high byte based on the current note
    }
    return TH0_val; //Return the selected high byte value for the current note
}

u8 Fre_TL_selection(u8 Note, u8 Tone)
{
    Note = Note + Tone; //Calculate the offset for the current note
    if (Note < 12) //If the note is in the low octave
    {
        TL0_val = NoteC_L_TL[Note]; //Set the initial value for timer 0 low byte based on the current note
    }
    else if (Note < 24) //If the note is in the middle octave
    {
        TL0_val = NoteC_M_TL[Note - 12]; //Set the initial value for timer 0 low byte based on the current note
    }
    else if (Note < 36) //If the note is in the middle octave
    {
        TL0_val = NoteC_H_TL[Note - 24]; //Set the initial value for timer 0 low byte based on the current note
    }
    else //If the note is in the high octave
    {
        TL0_val = NoteC_HH_TL[Note - 36]; //Set the initial value for timer 0 low byte based on the current note
    }
    return TL0_val; //Return the selected low byte value for the current note
}

void music_play(char Song[], char Song_Note_values[], char Song_Rest_values[], u8 Tone, float Time, u8 length)
{
    static u8 Note_i = 0; //Variable to store the index for musical notes
    static u8 Continue_check = 0; 
    for (Note_i = 0; Note_i < length; Note_i++) //Loop through the musical notes
    {
        if (play_switch == 0x00)
        {
            TR0 = 0; //shut down timer 0
            break;
        }
        else if (play_switch == 0x01 && Continue_check == 0)
        {
            TR0 = 1; //Start timer 0 before updating the values
        }
        TH0_val = Fre_TH_selection(Song[Note_i], Tone); //Set the initial value for timer 0 high byte based on the current note
        TL0_val = Fre_TL_selection(Song[Note_i], Tone); //Set the initial value for timer 0 low byte based on the current note
        
        delay_s(Note_values[Song_Note_values[Note_i]] * Time); //Delay to allow the note to play for a certain duration
        if (Rest_values[Song_Rest_values[Note_i]] != 0)
        {
            TR0 = 0; //Stop timer 0 after playing all the notes
            delay_ms(Rest_values[Song_Rest_values[Note_i]] * Time); //Delay between notes
            Continue_check = 0;
        }
        else
        {
            Continue_check = 1;
        }
        LED_1 = LED_2 = LED_3 = LED_4 = 0; //Turn on all LEDs to indicate that the system is ready for the next note
    }
}

void Song_of_the_Irish_Whistle()
{
    music_play(Song_of_the_Irish_Whistle_Notes, Song_of_the_Irish_Whistle_Note_values, Song_of_the_Irish_Whistle_Rest_values, Song_of_the_Irish_Whistle_Tone, Song_of_the_Irish_Whistle_Time, 112); //Play the song of the Irish Whistle
}

void Always_With_Me()
{
    music_play(Always_With_Me_Notes_1, Always_With_Me_Note_values_1, Always_With_Me_Rest_values_1, Always_With_Me_Tone, Always_With_Me_Time_1, 70);
    delay_s(10); //Delay for 0.5 second after playing the song
    music_play(Always_With_Me_Notes_2, Always_With_Me_Note_values_2, Always_With_Me_Rest_values_2, Always_With_Me_Tone, Always_With_Me_Time_2, 67);
    delay_s(10); 
    music_play(Always_With_Me_Notes_3, Always_With_Me_Note_values_3, Always_With_Me_Rest_values_3, Always_With_Me_Tone, Always_With_Me_Time_3, 62);
    delay_s(10); 
    music_play(Always_With_Me_Notes_4, Always_With_Me_Note_values_4, Always_With_Me_Rest_values_4, Always_With_Me_Tone, Always_With_Me_Time_4, 65);
    delay_s(10); 
    music_play(Always_With_Me_Notes_5, Always_With_Me_Note_values_5, Always_With_Me_Rest_values_5, Always_With_Me_Tone, Always_With_Me_Time_5, 59);
    delay_s(10); 
    music_play(Always_With_Me_Notes_6, Always_With_Me_Note_values_6, Always_With_Me_Rest_values_6, Always_With_Me_Tone, Always_With_Me_Time_6, 65);
    delay_s(10);
    music_play(Always_With_Me_Notes_7, Always_With_Me_Note_values_7, Always_With_Me_Rest_values_7, Always_With_Me_Tone, Always_With_Me_Time_7, 75);
    delay_s(10);
    music_play(Always_With_Me_Notes_8, Always_With_Me_Note_values_8, Always_With_Me_Rest_values_8, Always_With_Me_Tone, Always_With_Me_Time_8, 65);
}

void If_I_can_stop_one_heart_from_breaking()
{
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_1, If_I_can_stop_one_heart_from_breaking_Note_values_1, If_I_can_stop_one_heart_from_breaking_Rest_values_1, If_I_can_stop_one_heart_from_breaking_Tone_1, If_I_can_stop_one_heart_from_breaking_Time, 55);
    delay_s(10);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_2, If_I_can_stop_one_heart_from_breaking_Note_values_2, If_I_can_stop_one_heart_from_breaking_Rest_values_2, If_I_can_stop_one_heart_from_breaking_Tone_2, If_I_can_stop_one_heart_from_breaking_Time, 15);
    delay_s(10);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_3, If_I_can_stop_one_heart_from_breaking_Note_values_3, If_I_can_stop_one_heart_from_breaking_Rest_values_3, If_I_can_stop_one_heart_from_breaking_Tone_3, If_I_can_stop_one_heart_from_breaking_Time, 11);
    delay_s(10);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_4, If_I_can_stop_one_heart_from_breaking_Note_values_4, If_I_can_stop_one_heart_from_breaking_Rest_values_4, If_I_can_stop_one_heart_from_breaking_Tone_4, If_I_can_stop_one_heart_from_breaking_Time, 6);
    delay_s(7);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_5, If_I_can_stop_one_heart_from_breaking_Note_values_5, If_I_can_stop_one_heart_from_breaking_Rest_values_5, If_I_can_stop_one_heart_from_breaking_Tone_5, If_I_can_stop_one_heart_from_breaking_Time, 29);
    delay_s(10);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_6, If_I_can_stop_one_heart_from_breaking_Note_values_6, If_I_can_stop_one_heart_from_breaking_Rest_values_6, If_I_can_stop_one_heart_from_breaking_Tone_6, If_I_can_stop_one_heart_from_breaking_Time, 26);
    delay_s(10);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_7, If_I_can_stop_one_heart_from_breaking_Note_values_7, If_I_can_stop_one_heart_from_breaking_Rest_values_7, If_I_can_stop_one_heart_from_breaking_Tone_7, If_I_can_stop_one_heart_from_breaking_Time, 38);
    delay_s(20);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_2, If_I_can_stop_one_heart_from_breaking_Note_values_2, If_I_can_stop_one_heart_from_breaking_Rest_values_2, If_I_can_stop_one_heart_from_breaking_Tone_2, If_I_can_stop_one_heart_from_breaking_Time, 15);
    delay_s(10);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_3, If_I_can_stop_one_heart_from_breaking_Note_values_3, If_I_can_stop_one_heart_from_breaking_Rest_values_3, If_I_can_stop_one_heart_from_breaking_Tone_3, If_I_can_stop_one_heart_from_breaking_Time, 11);
    delay_s(10);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_4, If_I_can_stop_one_heart_from_breaking_Note_values_4, If_I_can_stop_one_heart_from_breaking_Rest_values_4, If_I_can_stop_one_heart_from_breaking_Tone_4, If_I_can_stop_one_heart_from_breaking_Time, 6);
    delay_s(12);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_8, If_I_can_stop_one_heart_from_breaking_Note_values_8, If_I_can_stop_one_heart_from_breaking_Rest_values_8, If_I_can_stop_one_heart_from_breaking_Tone_8, If_I_can_stop_one_heart_from_breaking_Time, 30);
    delay_s(12);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_9, If_I_can_stop_one_heart_from_breaking_Note_values_9, If_I_can_stop_one_heart_from_breaking_Rest_values_9, If_I_can_stop_one_heart_from_breaking_Tone_9, If_I_can_stop_one_heart_from_breaking_Time, 85);
    delay_s(5);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_10, If_I_can_stop_one_heart_from_breaking_Note_values_10, If_I_can_stop_one_heart_from_breaking_Rest_values_10, If_I_can_stop_one_heart_from_breaking_Tone_10, If_I_can_stop_one_heart_from_breaking_Time, 58);
    delay_s(10);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_11, If_I_can_stop_one_heart_from_breaking_Note_values_11, If_I_can_stop_one_heart_from_breaking_Rest_values_11, If_I_can_stop_one_heart_from_breaking_Tone_11, If_I_can_stop_one_heart_from_breaking_Time, 16);
    music_play(If_I_can_stop_one_heart_from_breaking_Notes_12, If_I_can_stop_one_heart_from_breaking_Note_values_12, If_I_can_stop_one_heart_from_breaking_Rest_values_12, If_I_can_stop_one_heart_from_breaking_Tone_12, If_I_can_stop_one_heart_from_breaking_Time, 2);
}