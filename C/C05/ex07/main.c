/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 22:33:17 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/18 22:38:32 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime2(int nb);

int	ft_find_next_prime(int nb);

int	main()
{
	int	x;
	
	x = 10;
	printf("numero = %d proximo = %d \n ", x, ft_find_next_prime(x));
}

int	ft_is_prime2(int nb)
{
	int	a;
	int	test;

	test = 0;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	else
	{
		a = nb;
		while (a > 1)
		{
			if (nb % a == 0)
				test++;
			if (test > 1)
				return (0);
			a--;
		}
	}
	return (1);
}

// int	ft_find_next_prime(int nb)
// {
// 	int	n;

// 	n = nb;
// 	if (nb >= 2147483630)
// 		return (2147483647);
// 	if (nb < 3)
// 		return (2);
// 	while (ft_is_prime2(n) != 1)
// 		n++;
// 	return (n);
// }
