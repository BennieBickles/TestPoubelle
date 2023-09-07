int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

//cette FONCTION renvoie la longueur d'une string (chaine de characteres)
//l'etoile (*) = chaine de characteres 
//i = index et compteur. Il parcourt la chaine. A la fin on renvoie i : la longueur de la chaine
//strlen : string lengt 
