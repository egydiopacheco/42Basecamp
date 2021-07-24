/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:55:00 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/24 17:19:55 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	j;
	int	flag;

	flag = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] > 64 && str[j] < 91) && str[j] != 0)
		{
			flag = 0;
			break ;
		}
		j++;
	}
	return (flag);
}
