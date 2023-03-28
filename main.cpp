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
        std::cout << name << " say: \"" << text << "\"\n";
    }
    void say(std::string text, std::string nameofdestinationer) {
        std::cout << name << " say to " << nameofdestinationer << ":\"" << text << "\"\n";
    }
    void AgeMeneger(int days) {
        int ages = round(days/356);
        age += ages;
        std::cout << name << " has been grove on " << ages << " age. And him then " << age << " age.\n";
    }
};
int main() {
    Person* newperson = new Person(176, 57, 16, "Kirill");
    newperson -> say("I wanna salami.");
    newperson -> AgeMeneger(2000);
    newperson -> say("You knoow the rules and so do I... Say goodbye!", "Rick Ahtley");
}