//
//  testCPP.cpp
//  OCCCPlusPlus
//
//  Created by Jackson on 2018/7/17.
//  Copyright © 2018年 Jackson. All rights reserved.
//

#include "testCPP.hpp"
#include <string.h>
testCPP::testCPP(const char *name ,const int age):_age(age)
{
    int len=(int)strlen(name);
    if (len>max_len2) {
        len=max_len2-1;
    }
    _name=new char(max_len2);
    memset(_name, 0, max_len2);
    memcpy(_name, name, len);
}
char *testCPP::getName(void)
{
    return _name;
}
int testCPP::getAge(void)
{
    return _age;
}
testCPP::~testCPP()
{
    printf("----testCPP::~testCPP()\n");
    delete[] _name;
}
