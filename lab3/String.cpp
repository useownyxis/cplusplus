#include "String.h"
#include "cstring"

String::String(const char *copyString)
{
    this->stringSize = strlen(copyString);
    this->string = new char[this->stringSize + 1];
    strcpy(this->string, copyString);
    this->string[this->stringSize] = '\0';
}

String::String(const String &copyString)
{
    this->stringSize = copyString.stringSize;
    this->string = new char[this->stringSize + 1];
    strcpy(this->string, copyString.string);
    this->string[this->stringSize] = '\0';
}

String::String(int newSize)
{
    this->stringSize = newSize;
    this->string = new char[this->stringSize + 1 ];
}

String::~String()
{
    delete this->string;
}

std::istream &operator>>(std::istream &in, String &string)
{
    in >> string.string;
    string.string[string.stringSize] = '\0';
    return in;
}

std::ostream &operator<<(std::ostream &out, const String &string)
{
    out << string.string << std::endl;
    return  out;
}

String String::operator+(const String &addString)
{
    return String(strcat(this->string, addString.string));
}

String String::operator+(const char *addString)
{
    return (*this) + String(addString);
}

String operator+(const char *first, const String &addSecond) {
    return String(first) + addSecond;
}

String String::operator-(const String &deleteString)
{
    char newString[this->stringSize+1];
    int iterator = 0;
    char *findString = strstr(this->string, deleteString.string);
    if (findString){
        for (int i = 0; i < this->stringSize; i++){
            if (findString == (this->string + i)){
                i += deleteString.stringSize - 1;
            }else{
                newString[iterator++] = this->string[i];
            }
        }
    }else{
        return String(this->string);
    }
    newString[iterator] = '\0';
    return String(newString);
}

String String::operator-(const char *deleteString)
{
    return  (*this)-String(deleteString);
}

String operator-(const char *first, const String &addSecond) {
    return String(first) - addSecond;
}

String String::operator/ (const String &deleteString)
{
    int value = 0;
    char *findString = strstr(this->string, deleteString.string);
    while (findString){
        value++;
        findString = strstr(findString+deleteString.stringSize, deleteString.string);
    }
    char newString[deleteString.stringSize*value + 1];
    for (int i = 0; i < value * deleteString.stringSize; i++){
        newString[i] = deleteString.string[i % deleteString.stringSize];
    }
    newString[value * deleteString.stringSize] = '\0';
    return String(newString);
}

String String::operator/ (const char *deleteString)
{
    return (*this)/String(deleteString);
}

String operator/(const char *first, const String &addSecond) {
    return String(first) / addSecond;
}

String String::operator% (const String &deleteString)
{
    char *newString = new char[this->stringSize];
    int iterator = 0;
    char *findString = strstr(this->string, deleteString.string);
    for (int i = 0; i < this->stringSize; i++){
        if (findString == this->string+i){
            findString = strstr(this->string + i + deleteString.stringSize , deleteString.string);
            i+=deleteString.stringSize - 1;
            continue;
        }else{
            newString[iterator++] = this->string[i];
        }
    }
    newString[iterator] = '\0';
    return String(newString);
}

String String::operator% (const char *deleteString)
{
    return (*this) % String(deleteString);
}

String operator%(const char *first, const String &addSecond) {
    return String(first) % addSecond;
}

String String::operator* (const int value)
{
    String newString(0);
    for (int i = 0;i < value; i++){
        newString += *this;
    }
    return  newString;
}

String String::operator++()
{
    for (int i = 0; i < this->stringSize; i++){
        this->string[i]++;
    }
    return *this;
}

String String::operator++(int)
{
    String newString(*this);
    ++*this;
    return newString;
}

String String::operator--()
{
    for (int i = 0; i < this->stringSize; i++){
        this->string[i]--;
    }
    return *this;
}

String String::operator--(int)
{
    String newString(*this);
    --*this;
    return newString;
}

void String::operator+=(const String &addString)
{
    *this = *this + addString;
}

void String::operator+= (const char *addString)
{
    *this = *this + string;
}

void String::operator-= (const String &deleteString)
{
    *this = *this - deleteString;
}

void String::operator-= (const char *deleteString)
{
    *this = *this - deleteString;
}

void String::operator/= (const String &deleteString)
{
    *this = *this / deleteString;
}

void String::operator/= (const char *deleteString)
{
    *this = *this / deleteString;
}

void String::operator%= (const String &deleteString)
{
    *this = *this % deleteString;
}

void String::operator%= (const char *deleteString)
{
    *this = *this % deleteString;
}

void String::operator*= (int value)
{
    *this = *this * value;
}

String &String::operator=(const String &copyString)
{
    if (this != &copyString ){
        delete[] this->string;
        this->stringSize = copyString.stringSize;
        this->string = new char[this->stringSize + 1];
        strcpy(this->string, copyString.string);
    }
    return *this;
}

String &String::operator= (const char *copystring)
{
    if (!strcmp(this->string, copystring)){
        delete[] this->string;
        this->stringSize = strlen(copystring);
        this->string = new char[this->stringSize + 1];
        strcpy(this->string, copystring);
        this->string[this->stringSize] = '\0';
    }
    return *this;
}

char &String::operator[](int ID)
{
    return this->string[ID];
}

char *String::operator()(int first, int last)
{
    int newSize = last - first + 1;
    char *newString = new char[newSize + 1];
    strncpy(newString, this->string + first, last);
    newString[newSize] = '\0';
    return newString;
}

bool String::operator>(const String &checkString)
{
    return strcmp(this->string, checkString.string) == 1;
}

bool String::operator>(const char *checkString)
{
    return strcmp(this->string, checkString) == 1;
}

bool String::operator<(const String &checkString)
{
    return strcmp(this->string, checkString.string) == -1;
}

bool String::operator<(const char *checkString)
{
    return strcmp(this->string, checkString) == -1;
}

bool String::operator==(const String &checkString)
{
    return !strcmp(this->string, checkString.string);
}

bool String::operator==(const char *checkString)
{
    return !strcmp(this->string, checkString);
}

bool String::operator!=(const String &checkString)
{
    return !(*this == checkString);
}

bool String::operator!=(const char *checkString)
{
    return !(*this == checkString);
}







