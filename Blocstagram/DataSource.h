//
//  DataSource.h
//  Blocstagram
//
//  Created by Peter Ketcham on 6/17/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject
+ (instancetype)sharedInstance;
+ (NSArray *)items;
@property (nonatomic, strong, readonly) NSArray *mediaItems;
@end
