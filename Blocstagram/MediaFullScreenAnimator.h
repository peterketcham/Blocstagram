//
//  MediaFullScreenAnimator.h
//  Blocstagram
//
//  Created by Peter Ketcham on 7/10/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;
@end
