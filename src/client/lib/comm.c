#include "comm.h"
#include "util.h"

// Taille max en chaine de caractères d'une adresse ip
const int TAILLE_ADRESSE_IP = 13;

void setResolution(struct CMDS_CLIENT cmds, int x, int y){
    char * charx = malloc(sizeof(4));
    char * chary = malloc(sizeof(4));
    sprintf(charx, "%d", x);
    sprintf(chary, "%d", y);

    char * res = concat(charx, chary);

    sendMessage(cmds.CMD_DEFINIR_RESOLUTION, res);
}

int initComm(){
    struct sockaddr_in informations;  //structure donnant les informations sur le serveur
 
    /*initialisation du protocole, TCP  l'adresse de connection 127.0.0.1 (en local) et du port du serveur (1400)*/
    informations.sin_family = AF_INET;
    informations.sin_port = htons(2500);

    char * ip = malloc(sizeof(TAILLE_ADRESSE_IP));
    // Recuperation de l'adresse ip
    printf("\nAdresse IP de la caméra IP: "); 
    scanf("%s", ip);

    informations.sin_addr.s_addr = inet_addr(ip);
 
    int socketID = socket(AF_INET, SOCK_STREAM, 0); // creation du socket propre au client
 
    if (socketID == -1)    //test de création du socket
    {
        perror("socket");
        exit (-1);
    }
 
    if ((connect(socketID, (struct sockaddr *) &informations, sizeof(struct sockaddr_in))) == -1)   //connexion au serveur
    {
        perror("connect");
        exit (-1);
    }

    return socketID;
}

void sendMessage(char commande, char * msg){
    printf("Evoi du message : %s", msg);

}