#include"shape.h"

class circle : public shape
{
	private:
		int radius;
	public:
		void Accept();
		void CalcArea();
		void CalcPeri();
};
