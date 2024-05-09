#pragma once
#include "../../lab5/Containers/MyVector.h"
#include <locale>

class Document {
protected:
	char* name;
	static MyVector<Document *> array;
	int date;
	void setName(const char*);

public:
	Document();
	Document(const Document&);
	Document(const char*, int);
	void addDocument(Document*);
	//void deleteDocument();
	virtual ~Document();
	virtual void print() const;
	static void printArray();
};