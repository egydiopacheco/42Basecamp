/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 18:21:02 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/17 19:19:40 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	transform_char(char c, int flag)
{
	char	transformed;

	if (flag == 10)
	{
		transformed = c / 10 + '0';
	}
	else
	{
		transformed = c % 10 + '0';
	}
	return (transformed);
}

void	print(char c)
{
	write(1, &c, 1);
}

void	print_pairs(int direction)
{
	print(transform_char(direction, 10));
	print(transform_char(direction, 0));
}

void	ft_print_comb2(void)
{
	char	left;
	char	right;

	left = 0;
	while (left < 99)
	{
		right = left;
		right++;
		while (right <= 99)
		{
			print_pairs(left);
			print(' ');
			print_pairs(right);
			if (!(left == 98 && right == 99))
			{
				print(',');
				print(' ');
			}
			right++;
		}
		left++;
	}
}
