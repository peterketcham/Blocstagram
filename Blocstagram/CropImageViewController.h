//
//  CropImageViewController.h
//  Blocstagram
//
//  Created by Peter Ketcham on 7/22/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MediaFullScreenViewController.h"

@class CropImageViewController;

@protocol CropImageViewControllerDelegate <NSObject>
- (void)cropControllerFinishedWithImage:(UIImage *)croppedImage;
@end

@interface CropImageViewController : MediaFullScreenViewController
- (instancetype) initWithImage:(UIImage *)sourceImage;
@property (nonatomic, weak) NSObject <CropImageViewControllerDelegate> *delegate;
@end
