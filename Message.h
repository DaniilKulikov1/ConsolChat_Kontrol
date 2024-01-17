#pragma once
#include<string>


class Message
{
private:
    string recepient_p; /*����*/
    string send_p;/* ���*/
    string text_p; /*����� ���*/
public:

    Message()
    {
        recepient_p = " ";
        send_p = " ";
        text_p = " ";
    }

    Message(const string& recepient, const string& send, const string& text) :recepient_p(recepient), send_p(send), text_p(text)
    {};
    string& getRecepient()
    {
        return recepient_p;//���
    };

    string& getSend()//����
    {
        return send_p;
    };

    string& getText()//���
    {
        return text_p;
    };
};