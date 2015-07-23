//
//  ImageLibraryViewController.h
//  Blocstagram
//
//  Created by Peter Ketcham on 7/23/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ImageLibraryViewController;

@protocol ImageLibraryViewControllerDelegate <NSObject>
- (void)imageLibraryViewController:(ImageLibraryViewController *)imageLibraryViewController didCompleteWithImage:(UIImage *)image;
@end

@interface ImageLibraryViewController : UICollectionViewController
@property (nonatomic, weak) NSObject <ImageLibraryViewControllerDelegate> *delegate;
@end
