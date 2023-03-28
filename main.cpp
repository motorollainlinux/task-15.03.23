#include <iostream>
#include <math.h>

class Person { 
    public:
    int heigt, weight, age;
    std::string name, text;
    Person(int heigt, int weight, int age, std::string name) {
        this -> heigt = heigt;
        this -> weight = weight;
        this -> age = age;
        this -> name = name;
    }
    void say(std::string text) {
        std::cout << name << "say: " << text << "\n";
    }
    void say(std::string text, std::string nameofdestinationer) {
        std::cout << name << "say to " << nameofdestinationer << " :" << text << "\n";
    }
    void AgeMeneger(int days) {
        int ages = round(days/356);
        age += ages;
    }
};
int main() {
    Person newperson = new Person(176, 57, 16, "Kirill");
}