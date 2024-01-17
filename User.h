#pragma once
#include<string>
using namespace std;

class User
{
private:
    string name_p; //���
    string password_p;//������

public:

    User()//
    {
        name_p = " ";
        password_p = " ";
    };

    //����������� �������� ����������
    User(const string& name, const string& password) :name_p(name), password_p(password)
    {};

    //�������
    string& getName()
    {
        return name_p;
    };

    string& getPassword()
    {
        return password_p;
    };
};