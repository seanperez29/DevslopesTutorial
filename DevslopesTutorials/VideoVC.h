//
//  VideoVC.h
//  DevslopesTutorials
//
//  Created by Sean Perez on 3/17/17.
//  Copyright © 2017 SeanPerez. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoVC : UIViewController <UIWebViewDelegate>
@property(nonatomic,strong) Video *video;
@end
