/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:48:40 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/18 21:49:11 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	int		x;
	char	*argument;

	x = 1;
	if (argc > 0)
	{
		while (argv[x])
		{
			argument = argv[x];
			i = 0;
			while (argument[i])
			{
				write (1, &argument[i], 1);
				i++;
			}
			write (1, "\n", 1);
			x++;
		}
	}
	return (0);
}


///--------------------------------------------------------------------------------
// #include <unistd.h>

// int	main(int argc, char *argv[])
// {
// 	unsigned int	n;
// 	int				i;
// 	char			*str;

// 	i = 0;
// 	while (++i < argc)
// 	{
// 		n = 0;
// 		str = argv[i];
// 		while (*str++ != '\0')
// 			++n;
// 		write(1, argv[i], n);
// 		write(1, "\n", 1);
// 	}
// }