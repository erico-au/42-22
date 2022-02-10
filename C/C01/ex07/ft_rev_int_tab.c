/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 21:33:21 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/09 22:44:15 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	y;

	y = 0;
	size--;
	while (y < size)
	{
		x = tab[y];
		tab[y] = tab[size];
		tab[size] = x;
		size--;
		y++;
	}
}
