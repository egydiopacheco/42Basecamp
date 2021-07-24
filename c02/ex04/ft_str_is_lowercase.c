/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:54:57 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/24 17:11:58 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	j;
	int	flag;

	flag = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (!(str[j] > 96 && str[j] < 123) && str[j] != 0)
		{
			flag = 0;
			break ;
		}
		j++;
	}
	return (flag);
}
