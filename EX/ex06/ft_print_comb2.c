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
	int		n1;
	int		n2;

	n1 = n / 10 + 48;
	n2 = n % 10 + 48;
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_comb2(void)
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
