#include <iostream>
#include <string>

std::string convert_to_12_hour_format(int h, int m)
{
    std::string convRes;
    std::string night_day;
    if (h == 12 && m == 0)
    {
        convRes = "12:00 PM";
    }
    else if (h == 0 && m == 0)
    {
        convRes = "12:00 AM";
    }
    else
    {
        night_day = (h < 12)?("AM"):("PM");
        std::string changedM = (m==0)?("00"):(std::to_string(m));
        convRes = std::to_string(h%12) + ":" + changedM + " " + night_day;
    }
    
    return convRes;
}

int main(void)
{
    int h;
    int m;
    std::cin >> h >> m;
    std::cout << convert_to_12_hour_format(h, m);
    return 0;
}
