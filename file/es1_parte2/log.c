/** ****************************************************************************************
* 
* @author Tommaso Sollo
* @date 13/09/2023
*
*/

#include <stdio.h>
#include <time.h>

void writeLog(const char *);


int main()
{
    writeLog("messaggio log");
}


void writeLog(const char *message) {

    FILE *logFile;
    logFile = fopen("log.txt", "a");

    // Otteniamo il timestamp corrente
    time_t currentTime;
    struct tm *localTime;
    time(&currentTime);
    localTime = localtime(&currentTime);

    // Scriviamo il messaggio di log nel formato desiderato
    fprintf(logFile, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
            localTime->tm_year + 1900, localTime->tm_mon + 1, localTime->tm_mday,
            localTime->tm_hour, localTime->tm_min, localTime->tm_sec, message);
}