//
//  FillUserInfo.h
//  CodingMart
//
//  Created by Ease on 15/11/3.
//  Copyright © 2015年 net.coding. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FillUserInfo : NSObject<NSCopying>

@property (strong, nonatomic) NSString *name, *email, *mobile, *code, *qq;
@property (strong, nonatomic) NSNumber *province, *city, *district, *free_time, *acceptNewRewardAllNotification;
@property (strong, nonatomic) NSString *province_name, *city_name, *district_name;
+ (NSArray *)free_time_display_list;
- (NSString *)free_time_display;
- (NSDictionary *)toParams;
- (BOOL)canPost:(FillUserInfo *)originalObj;
- (BOOL)isSameTo:(FillUserInfo *)obj;
@end
