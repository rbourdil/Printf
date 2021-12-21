/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retval.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourdil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 12:27:50 by rbourdil          #+#    #+#             */
/*   Updated: 2021/12/21 15:11:00 by rbourdil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	char	*p = "Bonjour";

	//c test
	printf("c ('c'):\t\t%c\n", 'c');
	printf("\n");
	//s test
	printf("s (\"Bonjour\"):\t\t%s\n", "Bonjour");
	printf("\n");
	//p test
	printf("p (*p = \"Bonjour\"):\t%p\n", p);
	printf("\n");
	//d test
	printf("d (123):\t\t%d\n", 123);
	printf("d (0173):\t\t%d\n", 0173);
	printf("d (0x7B):\t\t%d\n", 0x7B);
	printf("\n");
	//i test
	printf("i (123):\t\t%i\n", 123);
	printf("i (0173):\t\t%i\n", 0173);
	printf("i (0x7B):\t\t%i\n", 0x7B);
	printf("\n");
	//u test
	printf("u (123):\t\t%u\n", 123);
	printf("u (-123):\t\t%u\n", -123);
	printf("\n");
	//x test
	printf("x (123):\t\t%x\n", 123);
	printf("x (-123):\t\t%x\n", -123);
	printf("\n");
	//X test
	printf("X (123):\t\t%X\n", 123);
	printf("X (-123):\t\t%X\n", -123);
	printf("\n");
	//% test
	printf("%%:\t\t\t%%\n");
	printf("\n");

	return (0);
}
