/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wirare <wirare@42angouleme.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 17:11:31 by wirare            #+#    #+#             */
/*   Updated: 2025/04/26 18:58:37 by ellanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <fstream>
#include <ostream>
#include <string>
#include <stdlib.h>

std::string readFile(const std::string filename)
{
	std::ifstream file(filename.c_str(), std::ios::in | std::ios::binary);
    
    if (!file) {
        std::cerr << "Could not open the file!" << "\n";
        exit (1);
    }

	file.seekg(0, std::ios::end);
    std::streampos length = file.tellg();
    file.seekg(0, std::ios::beg);

    std::string content;
    content.resize(static_cast<std::size_t>(length));

    file.read(&content[0], length);
    file.close();
	return (content);
}

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage : ./sed <filename> <s1> <s2>" << "\n";
		return (1);
	}

	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	if (s1.empty())
	{
		std::cerr << "Error: s1 (search string) must not be empty." << "\n";
		return (1);
	}

	std::string fileTxt = readFile(filename);
	std::string result;

	std::string::size_type pos = 0;
	std::string::size_type found;

	while ((found = fileTxt.find(s1, pos)) != std::string::npos)
	{
		result.append(fileTxt, pos, found - pos);
		result.append(s2);
		pos = found + s1.length();
	}
	result.append(fileTxt, pos, fileTxt.length() - pos);

	std::ofstream outfile((filename + ".replace").c_str());
	if (!outfile)
	{
		std::cerr << "Error writing to output file.\n";
		return (1);
	}
	outfile << result;
	outfile.close();

	return (0);
}
