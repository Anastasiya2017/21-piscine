/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccolemon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:44:10 by ccolemon          #+#    #+#             */
/*   Updated: 2018/09/12 21:39:44 by tlubowit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_H
# define FUNC_H
# include <fcntl.h>
# include <unistd.h>
# include <string.h>


char	**proccesing (char **arr, int n, char empty, char barrier);
char     **out(char **arr, int i, int j, int max);
int	min(int a, int b);

//here struct

struct	s_map
{
	char	**map;
	char	*str;
	int	y;
	int	x;
	char	empty;
	char	obstacle;
	char	full;
}		t_map;



#endif
