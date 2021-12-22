/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlopez-m <rlopez-m@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 19:11:14 by rlopez-m          #+#    #+#             */
/*   Updated: 2021/12/20 21:01:48 by rlopez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	put_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	sort_args(char *argv[], int size)
{
	int		i;
	int		j;
	int		r;
	char	*t;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			r = ft_strcmp(argv[i], argv[j]);
			if (r > 0)
			{
				t = argv[i];
				argv[i] = argv[j];
				argv[j] = t;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	sort_args(argv, argc);
	i = 1;
	while (argv[i])
	{
		put_str(argv[i]);
		put_str("\n");
		i++;
	}
	return (0);
}
