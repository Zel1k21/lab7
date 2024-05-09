#pragma once
#include "document.h"

class wayBill : virtual public Document {
protected:
	bool goodDelivered;
public:
	wayBill() : Document::Document(), goodDelivered(false) {};
	wayBill(const wayBill& rec) : Document::Document(rec), goodDelivered(rec.goodDelivered) {};
	explicit wayBill(const char*, int, bool);
	void print() const override;
};