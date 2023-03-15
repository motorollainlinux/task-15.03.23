#include <iostream>

using namespace std;

class Person { 
    public: int heigt, weight, age;
    string name, text;
    Person(int heigt, int weight, int age, string name) {
        this.heigt = heigt;
        this.weight = weight;
        this.age = age;
        this.name = name;
    }
    void say(string text) {
        cout << name << "сказал: " << text << "\n";
    }
    void AgeMeneger(int days) {
        
    }
};
int main() {
    Person newperson = new Person;
    
}
