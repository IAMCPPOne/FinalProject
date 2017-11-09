#pragma once
#include "Ingredient.h"
class Hopper {
private:
	Ingredient * m_ingredient;
public:
	void fill(Ingredient * ingredient);
	Ingredient getIngredient();
};