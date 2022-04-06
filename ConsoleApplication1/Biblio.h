#pragma once
#include<list>
#include"Livre.h"
class Biblio
{
	std::list<Livre> L; //

public:
	void ajouter(int, const std::string&, const std::string&);
};

