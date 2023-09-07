/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtortrot <mtortrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 17:12:48 by mtortrot          #+#    #+#             */
/*   Updated: 2022/09/17 17:12:49 by mtortrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int n)
{
	int		n1; //On cree deux variables dans lesquelles on va stocker des valeurs
	int		n2;
//Pour afficher un nombre, on part du principe qu'il faut deux chiffres (37 = 3 et 7)
//Il n'y a pas de nombres dans la table ascii d'ou cette necessite 
	n1 = n / 10 + 48; //Pour decomposer notre nombre, on commence par diviser le nombre par 10 pour obtenir le premier chiffre de notre nombre. Ici en locurence, avec 37 --> 37/10 = 3x10 + 7 (on ne garde que les entiers). Le "48" permet a la machine de comprendre qu'il s'agit d'une valeur chiffre. 48 dans la table ascii c'est 0. On aurait aussi pu ecrire la ligne comme ca : 
			  //n1 = n / 10 + '0'; 
	n2 = n % 10 + 48; //Meme logique sauf que ce n'est pas "/" de la division mais % (on appelle ca modulo). Le modulo c'est le reste de l'opperation de la division. Dans mon exemple : 37 / 10 = 3 mais il reste le 7. Le modulo correspond au reste d'une division. DONC 37 % 10 = 7
			  //On stocke donc dans n2 le deuxieme chiffre qu'on veut afficher. Ici le 48 ou '0' permet toujours a la machine d'attribuer la valeur chiffre au resultat de l'operation. 
	write(1, &n1, 1); //Apres, tu connais, on affiche les deux valeurs qu'on a recuperees precedement
	write(1, &n2, 1);
}

void	ft_print_comb2(void) //Meme logique que le precedent mais en plus simple dans l'absolu 
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_number(a);
			write (1, " ", 1);
			ft_print_number(b);
			if (a < 98 || b < 99)
				write(1, ", ", 2);
			++b;
		}
		++a;
	}
}

//Pour tester 
//
int	main(void)
{
	ft_print_comb2(void);
	return (0);
}
