/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filter.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 08:54:50 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/15 12:23:22 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filter.hpp"

void    filter(char **av)
{
    std::string document;
    std::string line;

    std::ifstream file(av[1]);
        if (!file.is_open() || strlen(av[1]) == 0 || strlen(av[2]) == 0 || strlen(av[3]) == 0) 
        {
            std::cout << "invalid File or arguments." << std::endl;
            return ;
        }
        while (std::getline(file, line)) {
            document += line + '\n';
        }
        if (document.back() == '\n' && line.length() > 1) {
            document.pop_back();
        }
        file.close();

        size_t pos = 0;
        std::string s1 = av[2];
        std::string s2 = av[3];
        std::ofstream output(std::string(av[1]) + ".replace");

        while ((pos = document.find(s1, pos)) != std::string::npos) 
        {
            document.replace(pos, s1.length(), s2);
            pos += s2.length();
        }
        output << document; 
        output.close();
}