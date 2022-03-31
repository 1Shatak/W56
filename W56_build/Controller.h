#pragma once
#include "Repo.h"
#include "Iterator.h"

class Controller
{
private:
	Repository repo;
	Repository basket;
	Iterator coatsIter;
public:
	Controller(const Repository& r) : repo{ r }, basket(), coatsIter() {}

	Repository getRepo() const { return repo; }
	Repository getBasket() const { return basket; }

    //Checks how many coats of a certain size are.
    int validSize(const std::string &sizee);

    //Forms a coat and tries to add it.
	bool addCoatToRepository(const std::string& sizee, const std::string& color, double price, int quantity, const std::string& source);

    //Forms a coat and tries to remove it.
	bool removeCoatFromRepository(const std::string & sizee, const std::string & color,double price, int flag);

    //Forms a coat and tries to delete origina and add new.
    bool updateCoatFromRepository(const std::string & sizee, const std::string & color, double price, double newPrice, int newQuantity, const std::string & newLink, const std::string newSizee, const std::string newColor,int flag);

    //Adds a coat from repo to basket.
	void addCoatToBasket(const Coat & coat);

	Coat getCurrentCoat();

	bool deleteFromBasket(const Coat & coat);

    bool checkCoatInBasket(const Coat & coat);

	void startIteration();

    //Checks if a coat of certain size exists.
	bool checkSizee(const std::string &sizee);

	void next();
};
