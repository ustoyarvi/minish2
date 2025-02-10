/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets < dsedlets@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:59:16 by dsedlets          #+#    #+#             */
/*   Updated: 2025/02/09 20:03:16 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minishel.h"

void	display_prompt(void)
{
	char *input;

	while (1)
	{
		input = readline("minishell> ");
		if (input && *input)
		{
			add_history(input);
			execute_command(input, NULL); // envp нужно передать корректно
			free(input);
		}
	}
}