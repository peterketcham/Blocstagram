//
//  UIImage+ImageUtilities.h
//  Blocstagram
//
//  Created by Peter Ketcham on 7/22/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (ImageUtilities)
- (UIImage *)imageWithFixedOrientation;
- (UIImage *)imageResizedToMatchAspectRatioOfSize:(CGSize)size;
- (UIImage *)imageCroppedToRect:(CGRect)cropRect;
@end
