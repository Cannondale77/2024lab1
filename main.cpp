#include "mbed.h"
#include <cstdio>

InterruptIn bluebtn(PC_13);

volatile int int_trig = 0;

void bttnFall(){
    int_trig = 2;
}

void bttnRise(){
    int_trig = 2;
}

// main() runs in its own thread in th os
int main()
{
    bluebtn.fall(&bttnFall);
    bluebtn.rise(&bttnRise);
 
// this is a program for lab 1 embedded system  module, its my first time coding it is a big learning experience
    while (true) {
        switch(int_trig){
        case 1:
            printf("bttnFall \r\n");
            break;
        case 2: 
        printf("hello \r\n"); 
        break;  
        }
        int_trig = 0;
        }
    }    
    


