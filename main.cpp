#include "Documents/receipt.h"

int main() { 
	setlocale(LC_ALL, "RUSSIAN");
	Document document1("doc1", 123012), document2("doc2", 341220);
	wayBill waybill("wb", 342345, true);
	PayCheck paycheck("pc", 232312, false);
	Receipt receipt("rec", 121230, false, true, 23.5, "Alex");
	
	Document::printArray();
	return 0;
}