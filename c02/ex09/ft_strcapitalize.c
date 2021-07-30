/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 04:09:24 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/26 13:13:40 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_conditions(int i, char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	x;

	i = 0;
	while (str[i])
	{
		x = check_conditions(i, str);
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		else if (x == 1)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	check_conditions(int i, char *str)
{
	if (str[0] >= 'a' && str[0] <= 'z'
		|| ((str[i] >= 'a' && str[i] <= 'z')
			&& (str[i - 1] < '0' || (str[i - 1] > '9' && str[i - 1] < 'A')
				|| (str[i - 1] > 'Z' && str[i - 1] < 'a') || str[i - 1] > 'z')))
	{
		return (1);
	}
	return (0);
}
