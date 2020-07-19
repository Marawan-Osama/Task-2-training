#include "Task2.h"



uint8_t array[100];
int location = -1;

int main(){
uint8_t* a = balancedParantheses("(({}))");   /* This is to call the function*/

printf("%s",a);
}

void push(uint8_t u8_data){
    location++; 
    array[location] = u8_data;
    
}

uint8_t pull(){
    return array[location--];
}

void printStack(){
    for (int i = location; i > -1; i--) /*loops all elements*/
    {
        printf("%c",array[i]); /*prints elements one by one*/
    }
    
}

int PairUp(uint8_t bracket1 , uint8_t bracket2){
    if (bracket1 == '(' && bracket2 == ')') 
        return 1;
    else if (bracket1 == '{' && bracket2 == '}') 
        return 1;
    else
        return 0;
        /*checks for the validity of conditions*/
}       

uint8_t* balancedParantheses(uint8_t* expression){
    for (int i = 0; i < strlen(expression); i++)
    {
        if(expression[i] == '(' || expression[i] == '{') /*Checks if the expressions are the open brackets needed to push*/
        {
            push(expression[i]);
        }
        if(expression[i] == ')' || expression[i] == '}')
        {
        
                char temp = pull(); /*creates new temp variable to store last pushed character*/
                if(!PairUp(temp,expression[i])) /*if the two variables do not pair up, it will return not balanced*/
                {
                    return "Not balanced";
                }
        
        }
    }
    if(location == -1) /*if the index returns to -1 then that is the end of the pushed array so the number of brackets end*/
    {
        return "Balanced";
    }
    else{
        return "Not balanced"; /* there are still brackets in the push array so it is not balanced*/
    }
}
