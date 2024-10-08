#include <vector>
#include <climits>
#include <iostream>

struct Hotel
{
    int distance;
    int price;
};

int main()
{
    const int segmentLength = 800;
    int routeLength, numberOfHotels;
    std::cin >> routeLength >> numberOfHotels;
    std::vector<Hotel> hotelList(numberOfHotels + 2);
    for (int i = 1; i <= numberOfHotels; i++)
        std::cin >> hotelList[i].distance >> hotelList[i].price;
    hotelList[numberOfHotels + 1].distance = routeLength;
    hotelList[numberOfHotels + 1].price = 0;
    for (int i = 1; i <= numberOfHotels + 2; i++)
    {
        unsigned int cheapestRoute = INT_MAX;
        for (int j = i - 1; j >= 0 && hotelList[i].distance - hotelList[j].distance <= segmentLength; j--)
        {
            if (cheapestRoute > hotelList[i].price + hotelList[j].price)
                cheapestRoute = hotelList[i].price + hotelList[j].price;
        }
        hotelList[i].price = cheapestRoute;
    }
    std::cout << hotelList[numberOfHotels].price << '\n';
    return 0;
}
