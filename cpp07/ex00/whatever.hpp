
template <typename T>
void swap(T &a, T &b)
{
	T tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T &min(T &a, T &b)
{
	return a < b ? a : b;
}

template <typename T>
const T &max(T &a, T &b)
{
	return a > b ? a : b;
}

template <typename T>
void print_value(T a, T b)
{
	std::cout << "[SWAP TEST]" << std::endl;
	std::cout << "before a = [" << a << "], b = [" << b << "]" <<  std::endl;
	swap(a, b);
	std::cout << "after  a = [" << a << "], b = [" << b << "]" <<  std::endl << std::endl;
	std::cout << "min(a, b) = " << min(a, b) << std::endl;
	std::cout << "max(a, b) = " << max(a, b) << std::endl;
	std::cout << std::endl;
	
}