#pragma once
#include <string>
class Book
{
public:
	Book();
	Book(std::string title, std::string author, int year);
	~Book();
public:
	std::string getTitle();
	std::string getAuthor();
	int getYear();
	void printInfo();
	void setTitle(std::string title);
	void setAuthor(std::string author);
	void setYear(int year);
private:
	std::string _title;
	std::string _author;
	int _year;
};

