/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 04:09:24 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/24 19:09:33 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != ' ')
		{
			if (i == 0 && (str[i] >= 'a' || str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if ((str[i] >= 'A' || str[i] <= 'Z'))
				str[i] = str[i] + 32;
			i++;
		}
		i++;
	}
	return (str);
}
