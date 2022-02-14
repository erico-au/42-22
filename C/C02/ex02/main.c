/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 18:28:14 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/10 21:07:08 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;
	int		return_function;

	str = (char *)calloc(6, sizeof(char));
	str = "eric2";
	return_function = ft_str_is_alpha(str);
	printf("return_function = %d\n", return_function);
	return (0);
}
