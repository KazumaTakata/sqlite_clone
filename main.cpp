#include <iostream>

using namespace std;

enum Command
{
    META_COMMAND,
    COMMAND
};

Command ifmeta(string command);

int main()
{
    while (1)
    {
        cout << "simple sql >> ";
        string command;
        getline(cin, command);

        switch (ifmeta(command))
        {
        case META_COMMAND:
            cout << "meta command\n";
        case COMMAND:
            cout << "command\n";
        }
    }
}

Command ifmeta(string command)
{
    if (command[0] == '.')
    {
        return META_COMMAND;
    }
    else
    {
        return COMMAND;
    }
}
