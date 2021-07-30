/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epacheco <epacheco@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 20:27:07 by epacheco          #+#    #+#             */
/*   Updated: 2021/07/30 22:45:03 by epacheco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *p)
{
	unsigned int	size;

	size = 0;
	while (*p)
	{
		size++;
		p++;
	}
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	j;

	if (!dest || !src)
		return (0);
	else
	{
		src_size = ft_strlen(src);
		dest_size = ft_strlen(dest);
		if (dest_size > size)
			return (src_size + size);
		j = 0;
		while (*(src + j) && j < (size - dest_size - 1))
		{
			*(dest + dest_size + j) = *(src + j);
			j++;
		}
		*(dest + dest_size + j) = '\0';
		return (dest_size + src_size);
	}
}
