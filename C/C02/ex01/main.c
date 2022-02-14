/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:28:14 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/11 15:35:28 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char			*source;
	char			*destination;
	char			*return_function;
	unsigned int	n;

	n = 28;
	source = (char *)malloc(n * sizeof(char));
	source = "erico augusto rosa da silva";
	destination = (char *)malloc(50 * sizeof(char));
	return_function = ft_strncpy(destination, source, n);
	printf("return_function = %s\n", return_function);
	free(source);
	free(destination);
	return (0);
}
