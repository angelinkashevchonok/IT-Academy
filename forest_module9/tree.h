#pragma once
#include <string>
class Tree
{
public:
	// Конструктор по умолчанию
	Tree();
	// Конструктор с параметром
	//@param name - имя дерева
	Tree(std::string name);
	// Конструктор копирования
	//@param other - объект, который копируем
	Tree(const Tree& other);
	//Деструктор
	~Tree();

	// Получение имени дерева
	std::string getName() const;
	// Получение ID дерева
	int getID() const;
	// Вывод на консоль имя и ID дерева
	void wind() const;
	

public: 
	// Счётчик объектов класса Tree
	static int _counter;
private:
	// Увеличивает _counter на единицу
	static void increaseCounter();
	// Уменьшает _counter на единицу
	   static void decreaseCounter();
	  
private:
	std::string _name;
	int uniq_id;



};

