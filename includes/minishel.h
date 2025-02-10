/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishel.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsedlets < dsedlets@student.42yerevan.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 19:56:51 by dsedlets          #+#    #+#             */
/*   Updated: 2025/02/10 09:02:45 by dsedlets         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHEL_H
# define MINISHEL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>

//Функции для работы с оболочкой
void	display_prompt(void);
void	execute_command(char *command, char **envp);
void	handle_builtins(char **args);

// Встроенные команды
void	builtin_exit(char **args);
void	builtin_cd(char **args);
void	builtin_pwd(char **args);
void	builtin_echo(char **args);


#endif