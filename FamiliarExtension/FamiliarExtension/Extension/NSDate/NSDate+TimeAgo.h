//
//  NSDate+TimeAgo.h
//  FamiliarExtension
//
//  Created by Lorwy on 15/7/8.
//  Copyright (c) 2015年 Lorwy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (TimeAgo)

- (NSString *) timeAgoSimple;
- (NSString *) timeAgo;
- (NSString *) timeAgoWithLimit:(NSTimeInterval)limit;
- (NSString *) timeAgoWithLimit:(NSTimeInterval)limit dateFormat:(NSDateFormatterStyle)dFormatter andTimeFormat:(NSDateFormatterStyle)tFormatter;
- (NSString *) timeAgoWithLimit:(NSTimeInterval)limit dateFormatter:(NSDateFormatter *)formatter;

- (NSString *)dateTimeAgo;

- (NSString *)dateTimeUntilNow;

@end
