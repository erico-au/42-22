/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:28:14 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/10 19:50:38 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*source;
	char	*destination;
	char	*return_function;

	source = (char *)calloc(6, sizeof(char));
	source = "erico";
	destination = (char *)calloc(6, sizeof(char));
	return_function = ft_strcpy(destination, source);
	printf("return_function = %s\n", return_function);
	return (0);
}
