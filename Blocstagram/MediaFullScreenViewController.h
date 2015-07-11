//
//  MediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Peter Ketcham on 7/10/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController
@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;
- (instancetype)initWithMedia:(Media *)media;
- (void)centerScrollView;
@end
