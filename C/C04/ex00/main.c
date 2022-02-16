/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 00:09:11 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/16 00:11:53 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int main(void)
{
	char str[] = "Erico Augusto";

	printf("ret = %d\n", ft_strlen(str));
	return (0);
}
