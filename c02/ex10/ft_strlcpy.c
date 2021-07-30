/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 04:11:13 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/30 22:51:49 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *src);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	k;
	unsigned int	j;

	j = 0;
	if (!(size == 0))
	{
		while (src[j] && j < (size - 1))
		{
			dest[j] = src[j];
			j++;
		}
		dest[j] = '\0';
	}
	return (ft_strlen(src));
}

unsigned int	ft_strlen(char *src)
{
	unsigned int	str_len;

	str_len = 0;
	while (src[str_len])
	{
		str_len++;
	}
	return (str_len);
}
