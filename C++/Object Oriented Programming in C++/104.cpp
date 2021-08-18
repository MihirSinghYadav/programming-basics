#include <iostream>
#include <cstring>
using namespace std;
const int LEN = 80;
const int MAX = 40;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Stack
{
private:
    char st[MAX];
    int top;

public:
    Stack()
    {
        top = 0;
    }
    void push(char var)
    {
        st[++top] = var;
    }
    char pop()
    {
        return st[top--];
    }
    int gettop()
    {
        return top;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class express
{
private:
    Stack s;
    char *pStr;
    int length;

public:
    express(char *ptr)
    {
        pStr = ptr;
        length = strlen(pStr);
    }
    void parse();
    int solve();
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void express::parse()
{
    char ch;
    char last_value;
    char last_operator;

    for (int j = 0; j < length; j++)
    {
        ch = pStr[j];
        if (ch >= '0' && ch <= '9')
            s.push(ch - '0');
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            if (s.gettop() == 1)
                s.push(ch);
            else
            {
                last_value = s.pop();
                last_operator = s.pop();
                if ((ch == '*' || ch == '/') && (last_operator == '+' || last_operator == '-'))
                {
                    s.push(last_operator);
                    s.push(last_value);
                }
                else
                {
                    switch (last_operator)
                    {
                    case '+':
                        s.push(s.pop() + last_value);
                        break;
                    case '-':
                        s.push(s.pop() - last_value);
                        break;
                    case '*':
                        s.push(s.pop() * last_value);
                        break;
                    case '/':
                        s.push(s.pop() / last_value);
                        break;
                    default:
                        cout << "\nUnknown operator";
                        exit(1);
                    }
                }
                s.push(ch);
            }
        }
        else
        {
            cout << "\nUnknown input character";
            exit(1);
        }
    }
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int express::solve()
{
    char lastval;
    while (s.gettop() > 1)
    {
        lastval = s.pop();
        switch (s.pop())
        {
        case '+':
            s.push(s.pop() + lastval);
            break;
        case '-':
            s.push(s.pop() - lastval);
            break;
        case '*':
            s.push(s.pop() * lastval);
            break;
        case '/':
            s.push(s.pop() / lastval);
            break;
        default:
            cout << "\nUnknown operator";
            exit(1);
        }
    }
    return int(s.pop());
}
int main()
{
    char ans;
    char string[LEN];
    cout << "\nEnter an arithmetic expression"
            "\nof the form 2 + 3 * 4 / 3 - 2."
            "\nNo number may have more than one digit."
            "\nDon’t use any spaces or parentheses.";
    do
    {
        cout << "\nEnter expresssion : ";
        cin >> string;
        express *e_pointer = new express(string);
        e_pointer->parse();
        cout << "\nThe numerical value is :"
             << e_pointer->solve(); //solve it
        delete e_pointer;
        cout << "\nDo another(Enter y or n) ? ";
        cin >> ans;
    } while (ans == 'y');
    return 0;
}