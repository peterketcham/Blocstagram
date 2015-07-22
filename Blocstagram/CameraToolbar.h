//
//  CameraToolbar.h
//  Blocstagram
//
//  Created by Peter Ketcham on 7/20/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CameraToolbar;

@protocol CameraToolbarDelegate <NSObject>
- (void) leftButtonPressedOnToolbar:(CameraToolbar *)toolbar;
- (void) rightButtonPressedOnToolbar:(CameraToolbar *)toolbar;
- (void) cameraButtonPressedOnToolbar:(CameraToolbar *)toolbar;
@end

@interface CameraToolbar : UIView
- (instancetype)initWithImageNames:(NSArray *)imageNames;
@property (nonatomic, weak) NSObject <CameraToolbarDelegate> *delegate;
@end
