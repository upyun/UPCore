//
//  TuSDKMediaReshapeEffectV2.h
//  TuSDKVideo
//
//  Created by upyun on 2020/12/28.
//  Copyright © 2020 upyun. All rights reserved.
//

#import "TuSDKMediaEffectCore.h"

NS_ASSUME_NONNULL_BEGIN

@interface TuSDKMediaReshapeEffect : TuSDKMediaEffectCore

/**
 根据触发时间区间初始化微整形特效

 @param timeRange 触发时间区间
 @return 微整形特效实例对象
 @since v3.2.0
 */
- (instancetype)initWithTimeRange:(TuSDKTimeRange * _Nullable)timeRange;

@end

NS_ASSUME_NONNULL_END
