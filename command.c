/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets < dsedlets@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 20:03:39 by dsedlets          #+#    #+#             */
/*   Updated: 2025/02/10 09:43:07 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minishel.h"

void	execute_command(char *command, char **envp)
{
	char	**args;
	__pid_t	pid;
	int		status;

	args = ft_split(command, ' ');
	if (!args || args[0] == NULL)
	{
		ft_free_split(args);
		return ;
	}
	if (!ft_strcmp(args[0], "exit") || !ft_strcmp(args[0], "cd") ||
	 	!ft_strcmp(args[0], "pwd") || !ft_strcmp(args[0], "echo")) ||
	 	!ft_strcmp(args[0], "export") || !ft_strcmp(args[0], "unset") ||
        !ft_strcmp(args[0], "env"))
	{
		handle_builtins(args);
		ft_free_split(args);//ТОЧНО НАДО ЗДЕСЬ ОСВОБОЖДАТЬ ПАМЯТЬ?
		return ; //выход или не выход?
	}
	else
	{
		pid = fork();
		if (pid == 0)
		{
			if (execve(args[0], args, envp) == -1)
				perror("minishell");
			exit(1);
		}
		else if (pid < 0)
			perror("minishell");
		else
			waitpid(pid, &status, 0);
	}
	ft_free_split(args);
	// free(args);
}