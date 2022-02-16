/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:35:49 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/16 00:54:16 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	// char	s1[] = "abcdefghi";
	// char	s2[] = "abcdefghi";
	// char	s3[] = "abcdEfghi";
	// char	s4[] = "ab0defghi";
	
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	
	s1 = malloc(10 * sizeof(char));
	s2 = malloc(8 * sizeof(char));
	s3 = malloc(10 * sizeof(char));
	s4 = malloc(10 * sizeof(char));
	s1 = "abcdefghi";
	s2 = "abcdefghi";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	printf("s1: %s, s2: %s, s3: %s, s4: %s\n", s1, s2, s3, s4);
	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	return (0);
}
