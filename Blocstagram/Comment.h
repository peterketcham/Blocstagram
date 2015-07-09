//
//  Comment.h
//  Blocstagram
//
//  Created by Peter Ketcham on 6/17/15.
//  Copyright (c) 2015 Peter Ketcham. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject <NSCoding>
@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;
- (instancetype)initWithDictionary:(NSDictionary *)commentDictionary;
@end
