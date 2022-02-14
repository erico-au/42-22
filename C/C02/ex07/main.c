/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:44:57 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/11 00:14:46 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[] = "ErIcO aUgUsTo 2022";
	char	*return_function;

	return_function = ft_strupcase(str);
	printf("return_function = %s\n", return_function);
	return (0);
}
