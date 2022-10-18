#include "constants.h"
#include "mbed.h"


DigitalOut myled(LED1);


void Long()
{
    myled = 1;
    wait(LONG);
    myled = 0;
    wait(WAITAFTER);

}

void Short()
{
    myled = 1;
    wait(SHORT);
    myled = 0;
    wait(WAITAFTER);
}


int main() {  

    while(1) {

        Long(); 
        Long(); // M

        Short();
        Long(); // A

        Long(); // T

        Long();
        Short();
        Long();
        Long(); // Y

        Short();
        Long(); // A

        Short();
        Short();
        Short(); // S




    }


}


