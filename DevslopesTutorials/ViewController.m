//
//  ViewController.m
//  DevslopesTutorials
//
//  Created by Sean Perez on 3/16/17.
//  Copyright © 2017 SeanPerez. All rights reserved.
//

#import "ViewController.h"
#import "HTTPService.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [[HTTPService instance]getTutorials];
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
