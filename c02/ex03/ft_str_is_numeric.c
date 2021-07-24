/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:54:52 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/24 17:00:18 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	flag;
	int	j;

	flag = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] > 57 || (str[j] < 48 && str[j] != 0))
		{
			flag = 0;
			break ;
		}
		j++;
	}
	return (flag);
}
