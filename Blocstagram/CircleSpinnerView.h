//
//  CircleSpinnerView.h
//  Blocstagram
//
//  Created by Peter Ketcham on 7/16/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CircleSpinnerView : UIView
@property (nonatomic, assign) CGFloat strokeThickness;
@property (nonatomic, assign) CGFloat radius;
@property (nonatomic, strong) UIColor *strokeColor;
@end
