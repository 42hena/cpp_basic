#include <iostream>
class Fixed
{
private:
	int	fixedPoint;
	static const int fractionalBit;
public:
	Fixed(void);
	Fixed(const int i);
	Fixed(const float f);
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &copy);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};
std::ostream& operator<<(std::ostream& outputStream, const Fixed& A);
