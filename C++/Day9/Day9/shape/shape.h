#ifndef shape_h
#define shape_h

class shape
{
	public:
		virtual void Accept() = 0;
		virtual void CalcArea() = 0;
		virtual void CalcPeri() = 0;
};
#endif
