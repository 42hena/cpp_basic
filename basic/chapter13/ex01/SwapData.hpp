template <typename T>
void SwapData(T& l, T& r)
{
    T tmp = l;
    l = r;
    r = tmp;
}