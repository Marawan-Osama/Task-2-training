#include<stdio.h>
#include<string.h>

typedef unsigned char uint8_t;

void push(uint8_t u8_data);

uint8_t pull();

void printStack();

uint8_t* balancedParantheses(uint8_t* expression);

int PairUp(uint8_t bracket1 , uint8_t bracket2);
