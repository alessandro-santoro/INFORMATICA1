/** ****************************************************************************************
* \mainpage esD_1_100.c
*
* @brief Scrivere un programma che stampi tutti i numeri primi compresi tra 1 e 100. 
*        Un numero è primo quando ha come divisore uno e sé stesso. Quindi è primo ciascun 
*        numero naturale maggiore di 1 che sia divisibile solamente per 1 e per sé stesso.
* 
* @author alessandro santoro
* @date 05/12/2022
*/

#include <stdio.h>      

int main()  
{

    
    int i, i1, cont=1;        

    for(i=2; i<101; i++) {     
        
        for(i1 = 2; i1<i; i1++) {     
        	
           
            if(i % i1 == 0) 
                cont=0;          
  
        }
     
        if(cont) 
            printf("%d e' un numero primo \n", i);
         
        cont=1;
    }
}
