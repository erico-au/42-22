/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:44:51 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/10 23:09:04 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;
	int		return_function;

	str = (char *)calloc(200, sizeof(char));
	str = "";
	return_function = ft_str_is_printable(str);
	printf("return_function = %d\n", return_function);
	return (0);
}
