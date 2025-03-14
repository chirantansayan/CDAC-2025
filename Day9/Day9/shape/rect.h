#include"shape.h"

class rect : public shape
{
	private:
		int length;
		int breadth;
	public:
		void Accept();
		void CalcArea();
		void CalcPeri();
};
