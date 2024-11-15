#include "Animal.h"
#include <iostream>

Animal::Animal(int age, int weight, int height, int speed, const std::string& name, bool isCarnivore)
    : m_age(age), m_weight(weight), m_height(height), m_speed(speed), m_name(name), m_isDead(false), m_isCarnivore(isCarnivore) {}

void Animal::move() {
    std::cout << m_name << " is moving." << std::endl;
}

void Animal::eat() {
    if (m_isCarnivore) {
        std::cout << m_name << " is hunting for food." << std::endl;
    }
    else {
        std::cout << m_name << " is eating plants." << std::endl;
    }
}

void Animal::roar() {
    std::cout << m_name << " is roaring!" << std::endl;
}

std::string Animal::getName() const {
    return m_name;
}

bool Animal::getIsDead() const {
    return m_isDead;
}

void Animal::setIsDead(bool dead) {
    m_isDead = dead;
}

bool Animal::isHungry() const {
    return m_isCarnivore;
}

void Animal::hunt(std::vector<Animal*>& animals) {
    for (auto prey : animals) {
        if (prey != this && !prey->getIsDead() && m_isCarnivore) {
            prey->setIsDead(true);
            std::cout << m_name << " hunted and killed " << prey->getName() << std::endl;
            return;
        }
    }
}

void Animal::flee(Animal* predator) {
    std::cout << m_name << " is fleeing from " << predator->getName() << std::endl;
}

void Animal::reproduce(Animal* mate) {
    if (!getIsDead() && !mate->getIsDead()) {
        std::cout << m_name << " is reproducing with " << mate->getName() << std::endl;
    }
}
