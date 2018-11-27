/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgaujard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 19:08:03 by fgaujard          #+#    #+#             */
/*   Updated: 2018/11/21 16:46:09 by fgaujard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_tables_fd(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ft_putchar_fd(tab[i][j]);
			j++;
		}
		ft_putchar_fd('\n');
		i++;
	}
}
