#include "Livre.h"
#include <iostream>

Livre::Livre(int a, const std::string& b, const std::string& c)
	:isbn{a},titre{b},auteur{c}
{
}

void Livre::afficher() const
{
	std::cout << "isbn :" << isbn << std::endl;
	std::cout << "titre :" << titre << std::endl;
	std::cout << "auteur :" << auteur << std::endl;
}
