

#pragma once
#include <string>
class GameObject
{
public:
	int key;
	std::string name;

	GameObject();
	GameObject(int key, std::string name);
	bool operator>(const GameObject& rhd);
};