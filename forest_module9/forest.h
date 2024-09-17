#pragma once
#include <vector>
#include "tree.h"
class Forest
{
public:
	// Конструктор по умолчанию
	Forest();
	// Деструктор по умолчанию
	~Forest();
public:
	// Добавление дерева в лес (в вектор)
	//@param tree - дерево, которое хотим добавить в лес (в вектор)
	void growUp(const Tree& tree);
	// Очитска леса (вектора)
	void cutAll();
	// Перегрузка оператора +
	//@param other - лес с которым складываем
	//@return новый объект типа Forest
	Forest operator +(const Forest& other);
	// Вывод на консоль имени и ID каждого дерева из леса
	void wind() const;

private:
	std::vector <Tree> trees_vec;




};

