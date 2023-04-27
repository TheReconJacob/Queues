#include "GameObject.h"

GameObject::GameObject(int key, std::string name)
{
    this->key = key;
    this->name = name;
}

bool GameObject::operator>(const GameObject& rhs)
{
    return this->key > rhs.key;
}