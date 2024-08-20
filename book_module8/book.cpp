#include <iostream>
#include "book.h"



Book::Book()
{

}

Book::Book(std::string title, std::string author, int year) :_title(title), _author(author), _year(year)
{

}

Book::~Book()
{

}


std::string Book::getTitle()
{
	return _title;
}

std::string Book::getAuthor()
{
	return _author;
}

int Book::getYear()
{
	return _year;
}

void Book::printInfo()
{
	std::cout << "Title: " << getTitle()<<std::endl;
	std::cout << "Author " << getAuthor() << std::endl;
	std::cout << "Year: " << getYear()<< std::endl;
	std::cout << std::endl;
}

void Book::setTitle(std::string title)
{
	_title = title;

}

void Book::setAuthor(std::string author)
{
	_author = author;
}

void Book::setYear(int year)
{
	_year = year;
}
