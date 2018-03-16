/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 12:20:51 by ythollet     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/17 12:21:45 by aweiler     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../alum1.h"

void	ft_game(int *array, int game, char **av)
{
	int total;

	total = 0;
	while (game != 0)
	{
		if (game != -1)
			ft_display(array);
		game = ft_play(array, solve_player(av), total);
		if (game == 1)
		{
			game = ft_play(array, solve_computer(array, total), total);
			if (game == 0)
				write(2, "Player win\n", 11);
		}
		else if (game == 0)
			write(2, "Computer win\n", 13);
	}
}

char	*ft_std_input(void)
{
	char	*dup;
	char	*str;

	if (!(str = (char *)malloc(sizeof(char) * 1)))
		return (0);
	while (get_next_line(0, &dup) == 1)
	{
		if (ft_strcmp(dup, "\0") == 0)
			break ;
		str = ft_strjoin(str, dup);
		str = ft_strjoin(str, "\n");
	}
	return (str);
}

int		main(int ac, char **av)
{
	char	*str;
	int		*array;

	if (ac == 2 && (str = ft_read_file(av[1])))
	{
		if ((array = ft_check(str)))
			ft_game(array, 1, av);
	}
	else if ((ac == 1) && (str = ft_std_input()))
	{
		if ((array = ft_check(str)))
			ft_game(array, 1, av);
	}
	else
	{
		write(2, "ERROR\n", 6);
		return (0);
	}
}
