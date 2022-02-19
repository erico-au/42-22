/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 20:38:50 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/18 22:50:01 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	ft_iterative_factorial(int nb)
// {
// 	int	num;

// 	num = 1;
// 	if (nb < 0)
// 		return (0);
// 	while (nb >= 1)
// 		num = num * nb--;
// 	return (num);
// }

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
		num = num * nb--;
	return (num);
}
