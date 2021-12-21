/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbourdil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 13:00:13 by rbourdil          #+#    #+#             */
/*   Updated: 2021/12/21 17:38:57 by rbourdil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main()
{
	//# TEST
	printf("\t # TEST\n");
	printf("Without: printf(\"%%6x\", 123)\t");
	printf("%6x\n", 123);
	printf("With:\t printf(\"%%#6x\", 123)\t");
	printf("%#6x\n", 123);

	printf("Without: printf(\"%%6X\", 123)\t");
	printf("%6X\n", 123);
	printf("With:\t printf(\"%%#6X\", 123)\t");
	printf("%#6X\n", 123);
	
	printf("\n");

	//0 TEST
	printf("\t 0 TEST\n");
	printf("Without: printf(\"%%6d\", 123)\t");
	printf("%6d\n", 123);
	printf("With:\t printf(\"%%06d\", 123)\t");
	printf("%06d\n", 123);

	printf("\n");

	//- TEST
	printf("\t - TEST\n");
	printf("Without: printf(\"%%6d\", 123)\t");
	printf("%6d\n", 123);
	printf("With:\t printf(\"%%-6d\", 123)\t");
	printf("%-6d\n", 123);

	printf("\n");

	//' ' (space) TEST
	printf("\t ' ' (space) TEST\n");
	printf("Without: printf(\"%%d\", 123)\t");
	printf("%d\n", 123);
	printf("With:\t printf(\"%% d\", 123)\t");
	printf("% d\n", 123);

	printf("Without: printf(\"%%d\", -123)\t");
	printf("%d\n", -123);
	printf("With:\t printf(\"%% d\", -123)\t");
	printf("% d\n", -123);

	printf("\n");

	//+ TEST
	printf("\t + TEST\n");
	printf("Without: printf(\"%%6d\", 123)\t");
	printf("%6d\n", 123);
	printf("With:\t printf(\"%%+6d\", 123)\t");
	printf("%+6d\n", 123);

	printf("Without: printf(\"%%6d\", -123)\t");
	printf("%6d\n", -123);
	printf("With:\t printf(\"%%+6d\", -123)\t");
	printf("%+6d\n", -123);

	printf("\n");

	//. TEST
	printf("\t . TEST\n");
	printf("Without: printf(\"%%6d\", 123)\t");
	printf("%6d\n", 123);
	printf("With:\t printf(\"%%6.6d\", 123)\t");
	printf("%6.6d\n", 123);

	printf("Without: printf(\"%%7s\", \"BONJOUR\")\t");
	printf("%7s\n", "BONJOUR");
	printf("With:\t printf(\"%%7.3s\", \"BONJOUR\")\t");
	printf("%7.3s\n", "BONJOUR");

	printf("\n");

	return (0);
}
