/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:53:44 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/17 19:07:11 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*file;

	i = 0;
	if (argc > 0)
	{
		file = argv[i];
		while (file[i])
		{
			write(1, &file[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
