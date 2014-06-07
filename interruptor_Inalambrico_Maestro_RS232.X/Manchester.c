#include "Manchester.h"
#include <string.h>


 int  Manchester (char cadena_v) {
        // Devuelve 2 cuando hay se�al positiva
        // Devuelve 0 cuando hay se�al negativa
        // si es cero devuelve se�al + y se�al -
        // si es uno devuelve se�al - y se�al +

       int temporal=0;

        for (int i=0; i <=7; i++) {
            if ((cadena_v&(0x01<<i)) == 0) {
                            
               temporal = temporal+ 0b10;
               
            }
            else {
                
               temporal = temporal+ 0b01;
                

            }
            if (i<=6){
                temporal=temporal<<2;
            }}
        //System.out.println(temporal);
        return temporal;
    }