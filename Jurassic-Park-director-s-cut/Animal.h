#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <vector>

class Animal {
public:
    Animal(int age, int weight, int height, int speed, const std::string& name, bool isCarnivore); // Constructeur

    void move();
    void eat();
    void roar();
    std::string getName() const;
    bool getIsDead() const;
    void setIsDead(bool dead);

    bool isHungry() const;
    void hunt(std::vector<Animal*>& animals);
    void flee(Animal* predator);
    void reproduce(Animal* mate);

private:
    int m_age;
    int m_weight;
    int m_height;
    int m_speed;
    std::string m_name;
    bool m_isDead;
    bool m_isCarnivore; // Pour savoir si l'animal est carnivore
};

#endif // ANIMAL_H
