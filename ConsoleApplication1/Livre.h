#pragma once
#include<string>
class Livre
{
	int isbn;
	std::string titre, auteur;

public:
	Livre(int, const std::string & = "", const std::string & = "");
	~Livre(){}
	void afficher() const;
};

