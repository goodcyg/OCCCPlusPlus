//
//  testC.h
//  OCCCPlusPlus
//
//  Created by Jackson on 2018/7/17.
//  Copyright © 2018年 Jackson. All rights reserved.
//

#ifndef testC_h
#define testC_h

#include <stdio.h>
#define max_len 10
/**
 这样就可以知道，当我们想要一个结构体按照4字节对齐时，可以使用#pragma   pack(4) ，最后又想使用默认对齐方式时，可以使用#pragma pack() ；
 也可以使用：
 
 #pragma pack(push)
 #pragma pack(4)
 struct...
 #pragma pack(pop)
 
 这样在push和pop之间的结构体就可以按照pack指定的字节（这里是4字节对齐方式），而pop之后的结构体按照#pragma pack(push) 前对齐方式。
 
 */
#pragma pack(push)
#pragma pack(4)
typedef struct person
{
    //8byte
    char *name;
     //4byte
    int age;
}person_t;
#pragma pack(pop)

#ifdef __cplusplus
extern "C" {
#endif
 
person_t *createPerson(const char *name,int age);
int getAge(person_t * person);
char *getName(person_t * person);
void destroyPerson(person_t * person);
#ifdef __cplusplus
}
#endif


#endif /* testC_h */
