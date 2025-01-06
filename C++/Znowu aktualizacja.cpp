#include <cmath>
#include <string>
#include <iostream>
#include <unordered_map>

std::string calculate_download_time(long long size, const std::string& sizeUnit, long long speed, const std::string& speedUnit) 
{
    static const std::unordered_map<std::string, long long> speedUnits = { {"b", 1}, {"Kb", 1024}, {"Mb", 1024 * 1024} };
    static const std::unordered_map<std::string, long long> dataUnits = { {"B", 8}, {"KB", 8 * 1024}, {"MB", 8 * 1024 * 1024}, {"GB", 8LL * 1024 * 1024 * 1024} };
    long long sizeBits = size * dataUnits.at(sizeUnit);
    long long speedBits = speed * speedUnits.at(speedUnit);
    if (speedBits == 0)
        return "w mgnieniu oka";
    long long totalSeconds = sizeBits / speedBits;
    if (totalSeconds < 1)
        return "w mgnieniu oka";
    long long days = totalSeconds / (24 * 3600);
    totalSeconds %= (24 * 3600);
    long long hours = totalSeconds / 3600;
    totalSeconds %= 3600;
    long long minutes = totalSeconds / 60;
    long long seconds = totalSeconds % 60;
    std::string output = "";
    if (days > 0) 
        output += "dni: " + std::to_string(days) + '\n';
    if (hours > 0) 
        output += "godziny: " + std::to_string(hours) + '\n';
    if (minutes > 0) 
        output += "minuty: " + std::to_string(minutes) + '\n';
    if (seconds > 0) 
        output += "sekundy: " + std::to_string(seconds) + '\n';
    return output;
}

int main() 
{
    int t;
    std::cin >> t;
    while (t--) 
    {
        long long size, speed;
        std::string sizeUnit, speedUnit;
        std::cin >> size >> sizeUnit >> speed >> speedUnit;
        std::cout << calculate_download_time(size, sizeUnit, speed, speedUnit) << '\n';
    }
    return 0;
}