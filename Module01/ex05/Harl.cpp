/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khaimer <khaimer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 08:55:39 by khaimer           #+#    #+#             */
/*   Updated: 2023/10/15 13:00:15 by khaimer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() 
{

}

Harl::~Harl() 
{
    
}

void Harl::debug() 
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info() 
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error() 
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string arr[4] = {"DEBUG","INFO","WARNING","ERROR"};
    
	void (Harl::* p_debug)()= &Harl::debug;
	void (Harl::* p_info)()= &Harl::info;
	void (Harl::* p_warning)()= &Harl::warning;
	void (Harl::* p_error)()= &Harl::error;
    
	void (Harl::*pointers[4])() = {p_debug,p_info,p_warning,p_error};
	for (int i = 0; i < 4; i++)
    {
        if(level == arr[i])
			(this->*pointers[i])();
    }
}