/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/20 02:31:28 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/21 06:33:05 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	j;
	int	hold;
	int	limit;

	limit = size / 2;
	j = 0;
	while (j != limit)
	{
		hold = tab[j];
		tab[j] = tab[size - 1 - j];
		tab[size - 1 - j] = hold;
		j++;
	}
}
