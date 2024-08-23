#pragma once
#include <string>
class Tree
{
public:
	// ����������� �� ���������
	Tree();
	// ����������� � ����������
	//@param name - ��� ������
	Tree(std::string name);
	// ����������� �����������
	//@param other - ������, ������� ��������
	Tree(const Tree& other);
	//����������
	~Tree();

	// ��������� ����� ������
	std::string getName() const;
	// ��������� ID ������
	int getID() const;
	// ����� �� ������� ��� � ID ������
	void wind() const;
	

public: 
	// ������� �������� ������ Tree
	static int _counter;
private:
	// ����������� _counter �� �������
	static void increaseCounter();
	// ��������� _counter �� �������
	   static void decreaseCounter();
	  
private:
	std::string _name;
	int uniq_id;



};

