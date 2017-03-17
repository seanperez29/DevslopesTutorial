//
//  VideoCell.h
//  DevslopesTutorials
//
//  Created by Sean Perez on 3/17/17.
//  Copyright © 2017 SeanPerez. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Video;

@interface VideoCell : UITableViewCell
-(void)updateUI:(nonnull Video*)video;
@end
