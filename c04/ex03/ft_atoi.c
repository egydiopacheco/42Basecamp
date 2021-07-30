/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:32:20 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/30 21:43:11 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str) // ASCII TO INTEGER
{
	int	sign;
	int	answer;

	sign = 1; // +
	answer = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		answer = answer * 10;
		answer = answer + (*str - '0');
		str++;
	}
	answer = answer * sign;
	return (answer);
}
