#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <iomanip>

using namespace std;


struct WeatherData {
    string city;
    int temp;
    int feels_like;
    string description;
    int humidity;
    int wind_speed;
};

vector<WeatherData> getWeatherData(const string& city) {
   
    if (city == "Москва" || city == "moscow") {
        return {
            {"Москва", 18, 17, "Облачно", 65, 5},
            {"Москва", 20, 19, "Ясно", 55, 3},
            {"Москва", 17, 16, "Дождь", 80, 7}
        };
    } else if (city == "Санкт-Петербург" || city == "spb") {
        return {
            {"Санкт-Петербург", 15, 14, "Пасмурно", 75, 6},
            {"Санкт-Петербург", 16, 15, "Облачно", 70, 4},
            {"Санкт-Петербург", 14, 13, "Дождь", 85, 8}
        };
    } else {
        
        return {
            {city, 22, 21, "Солнечно", 50, 4},
            {city, 23, 22, "Ясно", 45, 3},
            {city, 21, 20, "Облачно", 60, 5}
        };
    }
}

void printWeather(const WeatherData& w, int day) {
    cout << "День " << day << ": " << w.description << endl;
    cout << "Температура: " << w.temp << "°C (ощущается как " << w.feels_like << "°C)" << endl;
    cout << "Влажность: " << w.humidity << "%" << endl;
    cout << "Ветер: " << w.wind_speed << " м/с" << endl;
    cout << "------------------------" << endl;
}

int main() {
    string city;
    cout << "=== Приложение для прогноза погоды ===\n" << endl;
    cout << "Введите название города (например, Москва): ";
    getline(cin, city);

    if (city.empty()) {
        city = "Москва";
    }

    cout << "\nПрогноз погоды для " << city << ":\n" << endl;

    vector<WeatherData> forecast = getWeatherData(city);

    for (int i = 0; i < forecast.size(); ++i) {
        printWeather(forecast[i], i + 1);
    }

    cout << "Хорошего дня! " << endl;
    return 0;
}
