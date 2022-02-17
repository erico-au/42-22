/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:06:03 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/17 19:38:08 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		x;
	char	*file;

	if (argc > 0)
	{
		i = 0;
		while (argv[i])
			i++;
		//printf("i = %d\n", i);
		i--;
		while (i > 0)
		{
			file = argv[i];
			//printf("file = %s\n", file);
			x = 0;
			while (file[x])
			{
				write (1, &file[x], 1);
				x++;
			}
			//printf("i = %d\n", i);
			write (1, "\n", 2);
			i--;
		}
	}
	return (0);
}
