/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:55:06 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/24 19:08:15 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	j;
	int	flag;

	flag = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] == 127 || str[j] < 32)
		{
			flag = 0;
			break ;
		}
		j++;
	}
	return (flag);
}
