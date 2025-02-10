/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets < dsedlets@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 20:04:30 by dsedlets          #+#    #+#             */
/*   Updated: 2025/02/10 09:01:42 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minishel.h"

void	builtin_exit(char **args)
{
	if (args[1])
		exit(ft_atoi(args[1]));
	exit(0);
}

void	builtin_cd(char **args)
{
	if (args[1])
    {
        if (chdir(args[1]) != 0)
            perror("cd");
    }
    else
        chdir(getenv("HOME"));
}

/* Заметка : Почему char **args не используется в функции builtin_pwd:
 В функции builtin_pwd аргументы char **args не используются, потому что команда pwd
 не принимает никаких аргументов, которые влияют на ее поведение. Она просто выводит 
 текущий рабочий каталог. 
 Аргумент char **args включен в определение функции для соответствия общему интерфейсу
  встроенных команд, но в данном случае он не нужен.*/

void	builtin_pwd(char **args)
{
	char *cwd;

	(void)args; // Явно указываем, что аргумент не используется
	cwd = getcwd(NULL, 0);
	if (!cwd)
		perror("pwd");
	else
	{
		ft_putstr_fd(cwd, 1);
		ft_putchar_fd('\n', 1);
		free(cwd);
	}
}

void	builtin_echo(char **args)
{
	int i;
	int newline;

	i = 1;
	newline = 1;
	// Проверка на наличие опции -n
	if (args[1] && !ft_strcmp(args[1], "-n"))
	{
		newline = 0;
		i++;
	}
	
	// Вывод аргументов
	while (args[i])
	{
		ft_putstr_fd(args[i], 1);
		if (args[i + 1])
			ft_putchar_fd(' ', 1);
		i++;
	}
	// Вывод новой строки, если опция -n не была указана
	if (newline)
		ft_putchar_fd('\n', 1);
}

void	handle_builtins(char **args)
{
	if (!ft_strcmp(args[0], "exit"))
		builtin_exit(args);
	else if (!ft_strcmp(args[0], "cd"))
		builtin_cd(args);
	else if (!ft_strcmp(args[0], "pwd"))
		builtin_pwd(args);
	else if (!ft_strcmp(args[0], "echo"))
		builtin_echo(args);
		
}