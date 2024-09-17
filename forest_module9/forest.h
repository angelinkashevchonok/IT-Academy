#pragma once
#include <vector>
#include "tree.h"
class Forest
{
public:
	// ����������� �� ���������
	Forest();
	// ���������� �� ���������
	~Forest();
public:
	// ���������� ������ � ��� (� ������)
	//@param tree - ������, ������� ����� �������� � ��� (� ������)
	void growUp(const Tree& tree);
	// ������� ���� (�������)
	void cutAll();
	// ���������� ��������� +
	//@param other - ��� � ������� ����������
	//@return ����� ������ ���� Forest
	Forest operator +(const Forest& other);
	// ����� �� ������� ����� � ID ������� ������ �� ����
	void wind() const;

private:
	std::vector <Tree> trees_vec;




};

