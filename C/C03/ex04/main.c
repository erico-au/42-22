/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 23:28:39 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/15 23:29:47 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char str[] = "Erico Augusto Rosa da Silva";
	char to_find[] = "Rosa";

	printf("ret = %s\n", ft_strstr(str, to_find));

	return (0);
}
