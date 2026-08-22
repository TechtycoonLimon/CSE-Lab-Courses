#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <unordered_set>

using namespace std;

// Check whether a word is a C/C++ keyword
bool isKeyword(const string& word)
{
    static const unordered_set<string> keywords = {
        "auto", "break", "case", "char", "const", "continue", "default",
        "do", "double", "else", "enum", "extern", "float", "for", "goto",
        "if", "int", "long", "register", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union",
        "unsigned", "void", "volatile", "while", "class", "public",
        "private", "protected"
    };

    return keywords.count(word) > 0;
}

// Check first character of an identifier
bool isIdentifierStart(char ch)
{
    return isalpha(static_cast<unsigned char>(ch)) || ch == '_';
}

// Check remaining characters of an identifier
bool isIdentifierPart(char ch)
{
    return isalnum(static_cast<unsigned char>(ch)) || ch == '_';
}

// Check arithmetic operators
bool isArithmetic(const string& op)
{
    return op == "+" || op == "-" || op == "*" ||
           op == "/" || op == "%";
}

// Check relational operators
bool isRelational(const string& op)
{
    return op == "<" || op == ">" || op == "<=" ||
           op == ">=" || op == "==" || op == "!=";
}

// Check logical operators
bool isLogical(const string& op)
{
    return op == "&&" || op == "||" || op == "!";
}

// Check assignment operators
bool isAssignment(const string& op)
{
    return op == "=" || op == "+=" || op == "-=" ||
           op == "*=" || op == "/=" || op == "%=";
}

// Check increment/decrement operators
bool isIncrementDecrement(const string& op)
{
    return op == "++" || op == "--";
}

// Get the longest possible operator
string getOperator(const string& line, size_t i)
{
    if (i + 1 < line.size())
    {
        string two = line.substr(i, 2);

        if (two == "==" || two == "!=" ||
            two == "<=" || two == ">=" ||
            two == "&&" || two == "||" ||
            two == "++" || two == "--" ||
            two == "+=" || two == "-=" ||
            two == "*=" || two == "/=" ||
            two == "%=")
        {
            return two;
        }
    }

    string one(1, line[i]);

    if (isArithmetic(one) ||
        isRelational(one) ||
        isLogical(one) ||
        isAssignment(one))
    {
        return one;
    }

    return "";
}

int main()
{
    string line;

    cout << "Enter a line of source code: ";
    getline(cin, line);

    vector<string> identifiers;
    vector<string> arithmeticOps;
    vector<string> relationalOps;
    vector<string> logicalOps;
    vector<string> assignmentOps;
    vector<string> incrementDecrementOps;

    unordered_set<string> seenIdentifiers;

    for (size_t i = 0; i < line.size();)
    {
        // Ignore spaces
        if (isspace(static_cast<unsigned char>(line[i])))
        {
            ++i;
            continue;
        }

        // Find identifiers
        if (isIdentifierStart(line[i]))
        {
            string word;

            while (i < line.size() &&
                   isIdentifierPart(line[i]))
            {
                word += line[i++];
            }

            // Store only identifiers, not keywords
            if (!isKeyword(word) &&
                !seenIdentifiers.count(word))
            {
                identifiers.push_back(word);
                seenIdentifiers.insert(word);
            }

            continue;
        }

        // Ignore numeric constants
        if (isdigit(static_cast<unsigned char>(line[i])))
        {
            while (i < line.size() &&
                   (isdigit(static_cast<unsigned char>(line[i])) ||
                    line[i] == '.'))
            {
                ++i;
            }

            continue;
        }

        // Find operators
        string op = getOperator(line, i);

        if (!op.empty())
        {
            if (isIncrementDecrement(op))
            {
                incrementDecrementOps.push_back(op);
            }
            else if (isAssignment(op))
            {
                assignmentOps.push_back(op);
            }
            else if (isLogical(op))
            {
                logicalOps.push_back(op);
            }
            else if (isRelational(op))
            {
                relationalOps.push_back(op);
            }
            else if (isArithmetic(op))
            {
                arithmeticOps.push_back(op);
            }

            i += op.size();
            continue;
        }

        // Ignore brackets, parentheses, semicolons, etc.
        ++i;
    }

    cout << "\n=== Identifiers ===\n";

    for (const string& id : identifiers)
        cout << id << " ";

    if (identifiers.empty())
        cout << "None";

    cout << "\n\n=== Arithmetic Operators ===\n";

    for (const string& op : arithmeticOps)
        cout << op << " ";

    if (arithmeticOps.empty())
        cout << "None";

    cout << "\n\n=== Relational Operators ===\n";

    for (const string& op : relationalOps)
        cout << op << " ";

    if (relationalOps.empty())
        cout << "None";

    cout << "\n\n=== Logical Operators ===\n";

    for (const string& op : logicalOps)
        cout << op << " ";

    if (logicalOps.empty())
        cout << "None";

    cout << "\n\n=== Assignment Operators ===\n";

    for (const string& op : assignmentOps)
        cout << op << " ";

    if (assignmentOps.empty())
        cout << "None";

    cout << "\n\n=== Increment/Decrement Operators ===\n";

    for (const string& op : incrementDecrementOps)
        cout << op << " ";

    if (incrementDecrementOps.empty())
        cout << "None";

    cout << endl;

    return 0;
}