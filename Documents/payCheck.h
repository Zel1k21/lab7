#pragma once
#include "document.h"

class PayCheck: virtual public Document {
protected:
	bool moneyDelivered;
public:
	PayCheck() : Document::Document(), moneyDelivered(false) {};
	PayCheck(const PayCheck& rec) : Document::Document(rec), moneyDelivered(rec.moneyDelivered) {};
	explicit PayCheck(const char*, int, bool);
	void print() const override;
};