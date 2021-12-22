/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 18:48:23 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/20 18:58:50 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	argc = 0;
	while (argv[0][argc])
	{	
		write(1, &argv[0][argc], 1);
		argc++;
	}
	write(1, "\n", 1);
}
