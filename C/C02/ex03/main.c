/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 22:41:26 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/10 22:41:28 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;
	int		return_function;

	str = (char *)calloc(6, sizeof(char));
	str = "";
	return_function = ft_str_is_numeric(str);
	printf("return_function = %d\n", return_function);
	return (0);
}
