/** ****************************************************************************************
* \mainpage esB_coppieOrdinate.c
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
* 
* @author alessandro santoro
* @date 02/12/2022
*/

#include <stdio.h>   //librerie    

int main() 
{
  int c,co;           
	
	
    for( c = 1; c < 8; c++)     //iterazione primo addendo con limite 8      
		
		
        for( co = 1; co < 15; co++ )    //iterazione secondo addendo     
			
			
            if( c + co == 15 )     //risultato è 15
					                    
              	printf("%d + %d \n", c, co);
            	
                
                
                
}
