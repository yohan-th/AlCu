/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   alum1.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: ythollet <ythollet@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 11:28:51 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/19 17:50:34 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ALUM1_H
# define ALUM1_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "Libft/Includes/libft.h"

char	*ft_read_file(char *file);
int		*ft_check(char *str);
void	ft_display(int *array);
int		ft_play(int *array, int matches, int total);
int		solve_player(char **av);
int		solve_computer(int *array, int total);

#endif
