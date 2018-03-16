/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   solver.c                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 17:48:43 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 19:58:15 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../alum1.h"

int		solve_player(char **av)
{
	int player;

	player = 0;
	ft_putstr("Enter matches' number you want to play\n");
	get_next_line(0, &av[2]);
	if (ft_strlen(av[2]) == 1 && ft_atoi(av[2]) >= 1 && ft_atoi(av[2]) <= 3)
	{
		player = ft_atoi(av[2]);
	}
	else
		player = solve_player(&av[2]);
	return (player);
}

int		ft_play(int *array, int matches, int total)
{
	int i;

	i = 0;
	while (array[i] != -1)
		total += array[i++];
	if (total < matches)
		return (-1);
	if (total == matches)
		return (0);
	while (matches > 0)
	{
		if (array[i] >= matches)
		{
			array[i] -= matches;
			matches = 0;
		}
		else if (array[i] > 0)
		{
			return (-1);
		}
		i--;
	}
	return (1);
}

int		count_matches(int *array)
{
	int total;
	int i;

	total = 0;
	i = 0;
	while (array[i] != -1)
		total = total + array[i++];
	return (total);
}

int		solve_computer(int *array, int total)
{
	int tmp;
	int remove;

	tmp = 0;
	remove = 0;
	total = count_matches(array);
	remove = total % 4 - 1;
	if (remove <= 0)
		remove = 1;
	if (total == 3)
		remove = 2;
	if (total == 4)
		remove = 3;
	return (remove);
}
