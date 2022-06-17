
template <typename T>
void _swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T &_min(const T &a, const T &b)
{
	return a < b ? a : b;
}

template <typename T>
const T &_max(const T &a, const T &b)
{
	return a > b ? a : b;
}

template <typename T>
void print_value(T a, T b)
{
	std::cout << "[SWAP TEST]" << std::endl;
	std::cout << "before a = [" << a << "], b = [" << b << "]" <<  std::endl;
	_swap(a, b);
	std::cout << "after  a = [" << a << "], b = [" << b << "]" <<  std::endl << std::endl;
	std::cout << "min(a, b) = " << ::_min(a, b) << std::endl;
	std::cout << "max(a, b) = " << _max(a, b) << std::endl;
	std::cout << std::endl;
	
}