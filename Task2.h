#include<stdio.h>
#include<string.h>

typedef unsigned char uint8_t;

void push(uint8_t u8_data); /* Pushes variable to the top of the stack*/

uint8_t pull(); /*pulls back the top variable in the stack and decreases the index in the stack array by 1*/

void printStack(); /*Prints all the elements in the stack array*/

uint8_t* balancedParantheses(uint8_t* expression); /*Checks to see if the string inserted has equal number and shapes of parantheses on both sides*/

int PairUp(uint8_t bracket1 , uint8_t bracket2); /*Checks to see if the shape of the brackets are correct in both shape and respective position on either side*/
