#include "Task2.h"



uint8_t array[100];
int location = -1;

int main(){
uint8_t* a = balancedParantheses("(({}))");
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
    for (int i = location; i > -1; i--)
    {
        printf("%c",array[i]);
    }
    
}

int PairUp(uint8_t bracket1 , uint8_t bracket2){
    if (bracket1 == '(' && bracket2 == ')') 
        return 1;
    else if (bracket1 == '{' && bracket2 == '}') 
        return 1;
    else
        return 0;
}       

uint8_t* balancedParantheses(uint8_t* expression){
    for (int i = 0; i < strlen(expression); i++)
    {
        if(expression[i] == '(' || expression[i] == '{'){
            push(expression[i]);
        }
        if(expression[i] == ')' || expression[i] == '}'){
        
                char temp = pull();
                if(!PairUp(temp,expression[i])){
                    return "Not balanced";
                }
        
        }
    }
    if(location == -1){
        return "Balanced";
    }
    else{
        return "Not balanced";
    }
}