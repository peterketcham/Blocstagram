//
//  DataSource.h
//  Blocstagram
//
//  Created by Peter Ketcham on 6/17/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

typedef void (^NewItemCompletionBlock)(NSError *error);

@interface DataSource : NSObject
extern NSString *const ImageFinishedNotification;
+ (instancetype)sharedInstance;
+ (NSString *)instagramClientID;
+ (NSArray *)items;
@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, strong, readonly) NSString *accessToken;
- (void)deleteMediaItem:(Media *)item;
- (void)requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void)requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void)downloadImageForMediaItem:(Media *)mediaItem;
- (void)toggleLikeOnMediaItem:(Media *)mediaItem;
- (void) commentOnMediaItem:(Media *)mediaItem withCommentText:(NSString *)commentText;
@end
