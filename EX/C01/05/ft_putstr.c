#include <unistd.h>

void	ft_putstr(char *str)
{
	int i; //index

	i = 0; // on le fait partir au debut de la chaine 
	while (str[i]) //Tant que la chaine de characteres existe
	{ 
		write(1, &str[i], 1); //on ecrit le charactere de la chaine 
		i++; //et on fait avancer l'index
	}

}

// putstr : put on screen string 
// Permet d'afficher une chaine de charactere 
// revient a un gros write ou un printf
