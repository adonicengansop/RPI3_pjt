#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define SUCCESS '0'
#define ERROR '1'
#define TAILLE_IMAGE '5'

#define CMD_PRENDRE_PHOTO '2'
#define CMD_DEFINIR_RESOLUTION '3'
#define INFO '4'

/**
 * Initialise la connexion avec le serveur
 * @return socketID
 */

int initComm();

/**
* Définit la résolution de la capture
*
*/
void definirResolution(int x, int y);

/**
* Envoyer un message au serveur
*
*/
void envoyerMessage(char commande, char * msg);

char * concat(char * dest, char * source);