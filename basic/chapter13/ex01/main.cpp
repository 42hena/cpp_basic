#include "SwapData.hpp"
#include "Point.hpp"

int main()
{
    Point pos1(1, 2);
    pos1.ShowPosition();

    Point pos2(3, 4);
    pos2.ShowPosition();
    SwapData(pos1, pos2);
    pos1.ShowPosition();
    pos2.ShowPosition();
}