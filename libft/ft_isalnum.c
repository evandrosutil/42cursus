/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-nada <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 20:10:02 by ede-nada          #+#    #+#             */
/*   Updated: 2020/01/23 21:01:38 by ede-nada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) ||
		(c >= 65 && c <= 90) ||
		(c >= 97 && c <= 122))
		return (1);
	return (0);
}
