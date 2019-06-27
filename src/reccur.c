/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reccur.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ielmoudn <ielmoudn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 11:58:45 by ielmoudn          #+#    #+#             */
/*   Updated: 2019/06/22 21:45:55 by ielmoudn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_ls.h"

void	reccur(t_node *dirs, t_node *copy, int *tracker)
{
	while (dirs)
	{
		copy = new_lnode(dirs->path,dirs->name,dirs->type);
		read_content(&copy, *tracker + 1);
		dirs = dirs->next;
	}
}