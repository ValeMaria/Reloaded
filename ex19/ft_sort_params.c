/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgavillo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:31:21 by mgavillo          #+#    #+#             */
/*   Updated: 2018/11/11 16:48:49 by mgavillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || i == 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_print(int a, char **s)
{
	int i;
	int j;

	i = 0;
	while (i++ != a - 1)
	{
		j = 0;
		while (s[i][j] != '\0')
		{
			ft_putchar(s[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*temporaire;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				temporaire = argv[i];
				argv[i] = argv[j];
				argv[j] = temporaire;
			}
			else
				j++;
		}
		i++;
	}
	ft_print(argc, argv);
	return (0);
}
