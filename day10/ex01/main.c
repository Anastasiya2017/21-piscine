/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlubowit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:44:34 by tlubowit          #+#    #+#             */
/*   Updated: 2018/09/05 18:10:08 by tlubowit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head_file.h"

int	main()
{
	 int tab[] = {1, 2, 3, 4, 5, 6, 7};
	ft_foreach(tab, 6, &ft_putnbr);
	return (0);
}
