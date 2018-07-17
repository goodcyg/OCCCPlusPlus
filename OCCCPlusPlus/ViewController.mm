//
//  ViewController.m
//  OCCCPlusPlus
//
//  Created by Jackson on 2018/7/17.
//  Copyright © 2018年 Jackson. All rights reserved.
//

#import "ViewController.h"
#import "testC.h"
#import "testCPP.hpp"

@interface ViewController ()
{
    person_t * _zhangsan;
    person_t * _lishi;
    person_t * _wangwu;
    testCPP *_t;
}

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self testButton];
   
}
#pragma mark -[self testButton]
-(void)testButton
{
    UIButton *btn=[UIButton new];
    btn.frame=CGRectMake(80, 80, 80, 80);
    btn.backgroundColor=[UIColor orangeColor];
    [btn setTitle:@"test" forState:UIControlStateNormal];
    [self.view addSubview:btn];
    
    [btn addTarget:self action:@selector(buttonClick:) forControlEvents:UIControlEventTouchUpInside];
    
}

#pragma mark -
-(void)buttonClick:(UIButton *)sender
{
    _zhangsan=createPerson("张三", 20);
    NSLog(@"name:%s age:%d",getName(_zhangsan),getAge(_zhangsan));
    _lishi=createPerson("李四",30);
    NSLog(@"name:%s age:%d",getName(_lishi),getAge(_lishi));
     _wangwu=createPerson("王五", 50);
    NSLog(@"name:%s age:%d",getName(_wangwu),getAge(_wangwu));
    
  
    _t=new testCPP("刘德华",60);
    NSLog(@"name:%s age:%d",_t->getName(),_t->getAge());
    [self testMem];
}

/**
 根据实际情况实时控制内存的释放
 */
-(void)testMem
{
    destroyPerson(_zhangsan);
    destroyPerson(_lishi);
    destroyPerson(_wangwu);
    
    delete _t;
    _t=NULL;
}

-(void)dealloc
{
    [self testMem];
}

@end
