//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by Peter Ketcham on 6/18/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media, MediaTableViewCell;

@protocol MediaTableViewCellDelegate <NSObject>
- (void)cell:(MediaTableViewCell *)cell didTapImageView:(UIImageView *)imageView;
- (void)cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;
- (void)cellDidPressLikeButton:(MediaTableViewCell *)cell;
@end

@interface MediaTableViewCell : UITableViewCell
@property (nonatomic, strong) Media *mediaItem;
@property (nonatomic, weak) id <MediaTableViewCellDelegate> delegate;
+ (CGFloat)heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;
@end
