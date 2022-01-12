//
//  SDCycleRTLManager.h
//  SDCycleScrollView
//
//  Created by wh_mi1 on 2022/1/12.
//  Copyright © 2022 GSD. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SDCycleRTLManager : NSObject
+ (BOOL)supportRTL;
+ (void)horizontalFlipView:(UIView *)view;
+ (void)horizontalFlipViewIfNeeded:(UIView *)view;
@end

NS_ASSUME_NONNULL_END
