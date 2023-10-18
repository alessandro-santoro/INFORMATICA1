#include <stdio.h>
#include <unistd.h>


int main()
{
	char a;
	int i;
	
	printf("\n ALESSANDRO SANTORO\n\n\n");
	
	printf("\n inserisci comando \n v per verde \n g per giallo \n r per rosso\n\n");
	scanf("%c",&a);
	
	int pid = fork();
	
	if (pid == 0)
	{
		switch(a)
		{
			case'v':
					for(i=0;i<10;i++)
					{
						printf("\n led verde acceso");
						usleep(300000);
						printf("\n led verde spento");
					}
			break;
			case'g':
					for(i=0;i<10;i++)
					{
						printf("\n led giallo acceso");
						usleep(700000);
						printf("\n led giallo spento");
					}
			break;
			case'r':
					for(i=0;i<10;i++)
					{
						printf("\n led rosso acceso");
						usleep(1200000);
						printf("\n led rosso spento");
					}
			case'q':
					printf("\n fine programma");
			break;
			
			default:printf("\n hai sbagliato");
					
		}
	}
}