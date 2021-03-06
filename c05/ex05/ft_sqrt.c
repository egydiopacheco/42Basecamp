/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:56:14 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/30 23:09:18 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	while (x <= (nb + 1) / 2)
	{
		if ((x * x) >= 46341)
			return (0);
		else if ((x * x) == nb)
			return (x);
		x++;
	}
	return (0);
}
