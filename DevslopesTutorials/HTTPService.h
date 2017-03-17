//
//  HTTPService.h
//  DevslopesTutorials
//
//  Created by Sean Perez on 3/16/17.
//  Copyright © 2017 SeanPerez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HTTPService : NSObject

+ (id) instance;
-(void) getTutorials;

@end
