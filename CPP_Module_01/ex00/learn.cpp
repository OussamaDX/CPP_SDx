#include <string>
#include <iostream>

class Student
{
	private:
		std::string _login;

	public:
		Student()
		{
			std::cout << std::endl << "Student " ;
		}
		~Student()
		{
			std::cout << std::endl << "hello world" ;
		}
		// ~Student()
		// {
		// 	std::cout << "Student " << this->_login << " died" << std::endl;
		// }
};

int main()
{
	Student jim;
	// Student		bob = Student("bfubar");
	// Student*	jim = new Student("jfubar");
	Student *alex = new Student;
	// Do some stuff here

	delete alex; // jim is destroyed

	return (0); // bob is destroyed
}