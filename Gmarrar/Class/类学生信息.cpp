#include<iostream>
using namespace std;

class Student
{
	private:
		int student_num;
		string student_name;
		char student_sex;
		int student_age;
	public:
		void input_information();
		void ouput_information();
		void divide_information();
};

void Student::input_information()
{
	cin>>student_num;
	cin>>student_name;
	cin>>student_sex;
	cin>>student_age;
}

void Student::ouput_information()
{
	cout<<"num: "<<student_num<<endl;
	cout<<"name: "<<student_name<<endl;
	cout<<"sex: "<<student_sex<<endl;
	cout<<"age: "<<student_age<<endl;
	cout<<endl;
}

void Student::divide_information()
{
	for(int i=0;i<30;i++){
		cout<<"=";

	}
	for(int i=0;i<30;i++){
		for(int j=0;j<3;j++){
			cout<<" ";
		}
	}
}

int main()
{
	cout<<"依次输入学号，姓名，性别，年龄"<<endl;
	Student stu1,stu2,*p1,*p2;
	p1=&stu1;                     //p1指向stu1
	p2=&stu2;                     //p2指向stu2
	p1->divide_information();
	p2->divide_information();
	p1->input_information();
	p2->input_information();
	p1->ouput_information();
	p2->ouput_information();

	return 0;
}
