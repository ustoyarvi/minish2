/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets < dsedlets@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:54:04 by dsedlets          #+#    #+#             */
/*   Updated: 2025/02/09 19:55:27 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minishel.h"

int main(int argc, char **argv, char **envp)
{
	t_shell *shell;

	shell = init_shell(argc, argv, envp);
	if (!shell)
		return (1);
	run_shell(shell);
	free_shell(shell);
	return (0);
}