/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraugust <eraugust@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:38:26 by eraugust          #+#    #+#             */
/*   Updated: 2022/02/14 13:14:46 by eraugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alph(char str)
{
	if (((str >= 'A' && str <= 'Z')
			|| (str >= 'a' && str <= 'z'))
		|| (str >= '0' && str <= '9'))
		return (1);
	else
		return (0);
}

int	is_lowcase(char str)
{
	if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}

int	is_uppercase(char str)
{
	if (str >= 'A' && str <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		if (is_alph(str[c - 1]) == 1)
		{
			if (is_uppercase(str[c]) == 1)
				str[c] += ('a' - 'A');
		}
		else if ((is_alph(str[c - 1]) == 0 && is_alph(str[c + 1]) == 0)
			|| (is_alph(str[c - 1]) == 0 && is_alph(str[c + 1]) == 1))
		{
			if (is_lowcase(str[c]) == 1)
				str[c] -= ('a' - 'A');
		}
		c++;
	}
	return (str);
}
