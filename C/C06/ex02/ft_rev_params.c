/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:06:03 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/18 22:07:53 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		i;
	int		x;
	char	*argument;

	if (argc > 0)
	{
		i = 0;
		while (argv[i])
			i++;
		//printf("i = %d\n", i);
		i--;
		while (i > 0)
		{
			argument = argv[i];
			//printf("argument = %s\n", argument);
			x = 0;
			while (argument[x])
			{
				write (1, &argument[x], 1);
				x++;
			}
			//printf("i = %d\n", i);
			write (1, "\n", 2);
			i--;
		}
	}
	return (0);
}

// #include <unistd.h>

// int	main(int argc, char *argv[])
// {
// 	unsigned int	n;
// 	char			*str;

// 	while (--argc > 0)
// 	{
// 		n = 0;
// 		str = argv[argc];
// 		while (*str++ != '\0')
// 			++n;
// 		write(1, argv[argc], n);
// 		write(1, "\n", 1);
// 	}
// }



// #include <unistd.h>

// void	ft_putchar(char c)
// {
// 	write(1, &c, 1);
// }

// int		main(int argc, char *argv[])
// {
// 	char	*pargv;
// 	int		i;
// 	int		j;

// 	pargv = 0;
// 	i = 1;
// 	while (i < argc)
// 	{
// 		pargv = argv[argc - i];
// 		j = 0;
// 		while (pargv[j] != '\0')
// 		{
// 			ft_putchar(pargv[j]);
// 			j++;
// 		}
// 		ft_putchar('\n');
// 		i++;
// 	}
// 	return (0);
// }