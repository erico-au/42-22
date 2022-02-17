/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:48:40 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/17 19:06:32 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		x;
	char	*file;

	x = 1;
	if (argc > 0)
	{
		while (argv[x])
		{
			file = argv[x];
			i = 0;
			while (file[i])
			{
				write (1, &file[i], 1);
				i++;
			}
			write (1, "\n", 1);
			x++;
		}
	}
	return (0);
}
