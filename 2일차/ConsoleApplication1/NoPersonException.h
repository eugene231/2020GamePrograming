#pragma once
class NoPersonException
{
private:
	int persons;
public:
	NoPersonException(int p){ persons = 0; }
	~NoPersonException();
	int getPersons(){
		return persons;
	}
};

