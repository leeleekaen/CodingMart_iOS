//
//  RewardApplyViewController.h
//  CodingMart
//
//  Created by Ease on 15/11/4.
//  Copyright © 2015年 net.coding. All rights reserved.
//

#import "EABaseTableViewController.h"
#import "RewardDetail.h"

@interface RewardApplyViewController : EABaseTableViewController
@property (strong, nonatomic) RewardDetail *rewardDetail;
+ (instancetype)storyboardVC;
@end
