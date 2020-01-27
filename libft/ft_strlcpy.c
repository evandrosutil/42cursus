/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:24:10 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/25 14:38:31 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long int	ft_strlcpy(char *dest, char *src, unsigned long int size)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 0;
	while (src[i] != 0)
	{
		i++;
	}
	j = 0;
	while (size != 0 && j < (size - 1) && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	while (j < size)
	{
		dest[j] = '\0';
		j++;
	}
	return (i);
}