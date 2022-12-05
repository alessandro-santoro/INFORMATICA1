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

    
    int c, c1, contr=1;        

    for(c=2; c<101; c++) 
    {     
        
        for(c1 = 2; c1<c; c1++) 
        {     
        	
           
            if(c % c1 == 0) 
                contr=0;          
  
        }
     
        if(contr) 
            printf("%d e' un numero primo \n", c);
         
        contr=1;
    }
}
