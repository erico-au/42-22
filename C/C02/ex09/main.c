/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 23:44:57 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/14 12:55:48 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "erIcO aUgUsTo 2022erico +erico -coisa";
	char	*return_function;

	return_function = ft_strcapitalize(str);
	printf("return_function = %s\n", return_function);
	return (0);
}
