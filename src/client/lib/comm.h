#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "util.h"

/*
* Définit la résolution de la capture
*
*/
void setResolution(struct CMDS_CLIENT cmds, int x, int y);

/*
* Envoyer un message au serveur
*
*/
void sendMessage(char commande, char * msg);

/**
 * Initialise la connexion avec le serveur
 * @return socketID
 */

int initComm();