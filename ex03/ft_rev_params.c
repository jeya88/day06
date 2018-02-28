/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsriling <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 22:39:37 by jsriling          #+#    #+#             */
/*   Updated: 2018/02/25 23:51:39 by jsriling         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = argc - 1;
	if (argc > 1)
		while (j < argc && j != 0)
		{
			while (argv[j][i] != '\0')
			{
				ft_putchar(argv[j][i]);
				i++;
			}
			ft_putchar('\n');
			i = 0;
			j--;
		}
	return (0);
}
