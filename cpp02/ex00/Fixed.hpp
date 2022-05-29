class Fixed
{
private:
	int	fixedPoint;
	static const int fractionalBit;
public:
	Fixed(void);
	Fixed(const Fixed &copy);
	Fixed& operator=(const Fixed &copy);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};
