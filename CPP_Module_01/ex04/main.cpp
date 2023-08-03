/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooussaad <ooussaad@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:53:52 by ooussaad          #+#    #+#             */
/*   Updated: 2023/07/30 18:43:54 by ooussaad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void replaceStringInFile(const std::string& filename, const std::string& s1, const std::string& s2) {
    std::ifstream inputFile(filename);
    if (!inputFile) {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return;
    }

    std::ofstream outputFile(filename + ".replace");
    if (!outputFile) {
        std::cerr << "Error: Cannot create output file." << std::endl;
        return;
    }
    std::string line;
    size_t s1Length = s1.length();
    while (std::getline(inputFile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos) {
            line.replace(pos, s1Length, s2);
            pos += s2.length();
        }
        outputFile << line << std::endl;
    }
    std::cout << "File content replaced successfully. New file created: " << filename << ".replace" << std::endl;

    inputFile.close();
    outputFile.close();
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    replaceStringInFile(filename, s1, s2);

    return 0;
}
