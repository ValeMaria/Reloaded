/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:40:22 by mgavillo          #+#    #+#             */
/*   Updated: 2018/11/07 16:47:43 by mgavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*d;

	i = 0;
	if (min >= max)
		return (NULL);
	if (!(d = malloc((max - min) * sizeof(int))))
		return (NULL);
	while (i < (max - min))
	{
		d[i] = min + i;
		i++;
	}
	return (d);
}
