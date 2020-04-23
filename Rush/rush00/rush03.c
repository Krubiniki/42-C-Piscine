/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkrubini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/05 14:59:52 by mkrubini          #+#    #+#             */
/*   Updated: 2019/10/05 18:52:41 by mkrubini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar();
void rush(int lin, int col, int actualint, int actualcol);

void checkcorner(int actuallin, int actualcol,int lin, int col)
{
	if(actuallin == 1 && actualcol == 1)
	{
		ft_putchar('A');
	}

	if(lin == actuallin && actualcol == 1)
	{
		ft_putchar('A');
	}

	if(actuallin == 1 && col == actualcol)
	{
		ft_putchar('C');
	}

	if(lin == actuallin && col == actualcol)
	{
		ft_putchar('C');
	}
}

void checkborder(int actuallin, int actualcol, int lin, int col)
{
	if(actuallin == 1 && actualcol != 1 && actualcol != col)
	{
		ft_putchar('B');
	}

	if(actuallin == lin && actualcol != 1 && actualcol != col)
	{
		ft_putchar('B');
	}
	
	if(actualcol == 1 && actuallin != 1 && actuallin != lin)
	{
		ft_putchar('B');
	}
	
	if(actualcol == col && actuallin != 1 && actuallin != lin)
	{
		ft_putchar('B');
	}
}

void rush(int lin, int col,int actuallin,int actualcol)
{	
	while(actuallin > lin)
	{
		checkcorner(actuallin,actualcol, lin, col);
		checkborder(actuallin,actualcol, lin, col);
		actuallin ++;
		ft_putchar('h');
	}

}
