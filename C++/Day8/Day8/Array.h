class Array
{
	int size;
	int *arr;
	public:
	Array();
	Array(int);
	Array(const Array&);
	void Accept();
	void Display();
	void sort();
	int findmax();
	int findmin();
	~Array();
};


