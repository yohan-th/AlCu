/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   alum1.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: aweiler <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 11:28:51 by aweiler      #+#   ##    ##    #+#       */
/*   Updated: 2018/03/16 17:45:01 by ythollet    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ALUM1_H
# define ALUM1_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include "Libft/includes/libft.h"

char	*ft_read_file(char *file);
int		*ft_check(char *str);
void	ft_display(int *array);
int		ft_play(int *array, int matches, int total);
int		solve_player(char **av);
int		solve_computer(int *array, int total);

#endif
