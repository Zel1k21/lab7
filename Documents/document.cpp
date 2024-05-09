#include "document.h"
MyVector<Document*> Document::array;

Document::Document() : name(""), date(0){}

Document::Document(const Document& doc) : name(doc.name), date(doc.date) { array.addElement(this); }

Document::Document(const char* newName, const int newDate) : date(newDate) 
{
	setName(newName);
	addDocument(this);
}

Document::~Document() {}

void Document::setName(const char* newName)
{
	const int size = std::strlen(newName) + 1;
	this->name = new char[size];
	std::strncpy(this->name, newName, size);
}

void Document::addDocument(Document* doc)
{
	array.addElement(doc);
}

void Document::print() const
{
	std::cout << "Документ: " << this->name << " от "<< date/10000 << '.' << (date/100)%100 << '.' << date%100 << std::endl;
}

void Document::printArray()
{
	for (int i = 0; i < array.getSize(); i++)
		array[i]->print();
}