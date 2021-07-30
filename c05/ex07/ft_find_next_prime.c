/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 08:56:23 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/30 23:21:01 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 1)
		nb++;
	return (nb);
}

int	ft_is_prime(int nb)
{
	int	x;

	if (nb <= 1)
		return (1);
	x = (nb / 2);
	while (x > 1)
	{
		if (nb % x == 0)
			return (1);
		x--;
	}
	return (0);
}
