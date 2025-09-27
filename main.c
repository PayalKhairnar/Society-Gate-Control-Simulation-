//C Program for society gate control simulation
#include<stdio.h>
void main(){
    int switch_value; 
    //switch:1=open , switch:0=close
    printf("==Society Gate Control Simulation==\n");
    //Step 1: Enter Switch Value
    printf("Enter switch value:\n");
    scanf("%d",&switch_value);
    
    if(switch_value==1){
        printf("Vehicle detected.\n");
        printf("Gate is OPENING.\nPlease let the vehicle pass.\n");
    }
    else if(switch_value==0){
        printf("Gate is CLOSING.\nGate is now closed.\n");
    }
    else{
        printf("Invalid switch value.\nPlease enter 1 or 0 only!\n");
    }

}


