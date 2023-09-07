void	ft_swap(int *a, int *b)
{
	int tmp; //on cree une valeur tmp qui sert de tampon (variable ou on stock une valeur avant de la reasigner)

	tmp = *a; //On met a dans le tampon. La valeur de a est stockee ailleurs donc on peut reutiliser a sans perdre son contenu 
	*a = *b; // On met b dans a 
	*b = tmp; // on recupere la valeur de a stockee dans tmp et on la met dans b. Le swap est fait
}
