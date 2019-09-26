#ifndef LAB3_STRING_H
#define LAB3_STRING_H

#include <iostream>

class String
{
private:
    int stringSize;
    char *string;
public:

     String(const char *copyString);
     String(const String &copyString);
     String(int newSize = 0);
    ~String();

    friend std::istream& operator>> (std::istream &in, String &string);
    friend std::ostream& operator<< (std::ostream &out, const String &string);

    String operator+ (const String &addString);
    String operator+ (const char *addString);
    friend String operator+ (const char *first, const String &addSecond);
    String operator- (const String &deleteString);
    String operator- (const char *deleteString);
    friend String operator- (const char *first, const String &addSecond);
    String operator/ (const String &deleteString);
    String operator/ (const char *deleteString);
    friend String operator/ (const char *first, const String &addSecond);
    String operator% (const String &deleteString);
    String operator% (const char *deleteString);
    friend String operator% (const char *first, const String &addSecond);
    String operator* (int value);

    String operator++ ();
    String operator++ (int);
    String operator-- ();
    String operator-- (int);

    void operator+= (const String &addString);
    void operator+= (const char *addString);
    void operator-= (const String &addString);
    void operator-= (const char *addString);
    void operator/= (const String &addString);
    void operator/= (const char *addString);
    void operator%= (const String &addString);
    void operator%= (const char *addString);
    void operator*= (int value);

    String& operator= (const String &copyString);
    String& operator= (const char *copyString);

    char& operator[] (int ID);
    char* operator() (int first, int last);

    bool operator> (const String &checkString);
    bool operator> (const char *checkString);
    bool operator< (const String &checkString);
    bool operator< (const char *checkString);
    bool operator== (const String &checkString);
    bool operator== (const char *checkString);
    bool operator!= (const String &checkString);
    bool operator!= (const char *checkString);
};


#endif //LAB3_STRING_H
