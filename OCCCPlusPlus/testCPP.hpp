//
//  testCPP.hpp
//  OCCCPlusPlus
//
//  Created by Jackson on 2018/7/17.
//  Copyright © 2018年 Jackson. All rights reserved.
//

#ifndef testCPP_hpp
#define testCPP_hpp

#include <stdio.h>

#define max_len2 10
class testCPP
{
public:
    testCPP(const char *name ,const int age);
    ~testCPP();
    char *getName(void);
    int getAge(void);
    
private:
    char *_name;
    int _age;
};

#endif /* testCPP_hpp */
