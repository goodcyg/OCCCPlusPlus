//
//  testC.c
//  OCCCPlusPlus
//
//  Created by Jackson on 2018/7/17.
//  Copyright © 2018年 Jackson. All rights reserved.
//

#include "testC.h"
#include <stdlib.h>
#include <string.h>

person_t * createPerson(const char *name,int age)
{
    person_t *p=malloc(sizeof(person_t));
    int len=(int)strlen(name);
    if (len>max_len) {
        len=max_len-1;
    }
    p->name=malloc(max_len);
    memset(p->name, 0, max_len);
    memcpy(p->name, name, len);
    p->age=age;
    return p;
    
}

int getAge(person_t *person)
{
    return person->age;
}
char *getName(person_t *person)
{
    return person->name;
}
void destroyPerson(person_t * person)
{
    
    free(person->name);
    person->name=NULL;
    free(person);
    person=NULL;
    printf("----destroyPerson\n");
    
}
