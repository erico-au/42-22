/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:48:29 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/15 22:56:03 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char dest[] = "Erico ";
	char src[] = "Augusto";
	unsigned int nb = 3;
	
	printf("Ret = %s\n", ft_strncat(dest, src, nb));
	return (0);
}
