#pragma once
#include<iostream>
class User
{
	public:
		std::string name;
		User(std::string name) : name(name) {};
		std::string getName()
		{
			return name;
		}
};
