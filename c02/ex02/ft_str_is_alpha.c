/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 18:54:49 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/23 04:01:52 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	flag;
	int	j;

	flag = 1;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] < 65 || str[j] > 122 || (str[j] > 90 && str[j] < 97))
		{
			flag = 0;
			break ;
		}
		j++;
	}
	return (flag);
}
