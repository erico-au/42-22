/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:46:59 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/16 13:27:35 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			c;
	unsigned int	div;
	unsigned int	num;

	if (nb < 0)
		write(1, "-", 1);
	if (nb < 0)
		num = nb * (-1);
	else
		num = nb;
	div = 1;
	while (nb / 10)
	{
		nb = nb / 10;
		div *= 10;
	}
	while (div)
	{
		c = '0' + num / div;
		write(1, &c, 1);
		num = num % div;
		div = div / 10;
	}
}
