/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 22:48:29 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/15 22:55:50 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char dest[] = "Erico ";
	char src[] = "Augusto Rosa da Silva";

	printf("Ret = %s\n", ft_strcat(dest, src));
	return (0);
}
