/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 21:22:21 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/19 03:27:32 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 0;
	if (nb >= x)
	{
		if (nb == 1)
			return (nb);
		while (x < nb)
		{
			if (x * x == nb)
				return (x);
			else if (x * x > nb)
				return (0);
			x++;
		}
	}
	return (0);
}



int	ft_bisec(int nb);

int	ft_sqrt(int nb)
{	
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	return (ft_bisec(nb));
}

/// - - ok s/ time out
// int	ft_bisec(int nb)
// {
// 	int	end;
// 	int	beg;
// 	int	g;

// 	end = nb;
// 	beg = 0;
// 	g = (end + beg) / 2;
// 	while (g * g != nb)
// 	{
// 		if (g * g > nb)
// 		{
// 			end = g;
// 			beg = beg;
// 			g = (end + beg) / 2;
// 		}
// 		if (g * g < nb)
// 		{
// 			end = end;
// 			beg = g;
// 			g = (end + beg) / 2;
// 		}
// 		if (((end - beg) == 1) && ((g == end) || (g == beg)))
// 			return (0);
// 	}
// 	return (g);
// }
