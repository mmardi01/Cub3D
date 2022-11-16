/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_extension.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmardi <mmardi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 19:04:49 by mfagri            #+#    #+#             */
/*   Updated: 2022/11/16 21:12:21 by mmardi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3d.h"

void	check_extension(char *av)
{
	size_t	i;

	i = ft_strlen(av);
	if (av[i - 1] == 'b' && av[i - 2] == 'u' \
		&& av[i - 3] == 'c' && av[i - 4] == '.')
		return ;
	else
	{
		write (2, "Error\nWrong Extension!\n", 23);
		exit (1);
	}
}
