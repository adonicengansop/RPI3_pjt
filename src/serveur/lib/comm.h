#include <string.h>

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
*  
*
*/
void envoyerMessage(char commande, char * msg);

/**
*
*
*/
void envoyerDonnee(char * data);

char * concat(char * dest, char * source);

void envoyerResolution(int x, int y);