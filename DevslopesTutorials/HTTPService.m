//
//  HTTPService.m
//  DevslopesTutorials
//
//  Created by Sean Perez on 3/16/17.
//  Copyright © 2017 SeanPerez. All rights reserved.
//

#import "HTTPService.h"

@implementation HTTPService

+ (id) instance {
    static HTTPService *sharedInstance = nil;
    @synchronized (self) {
        if (self == nil)
            sharedInstance = [[self alloc]init];
    }
    return sharedInstance;
}

@end
