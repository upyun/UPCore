//
//  TuSDKFaceSmoothFilter.h
//  TuSDK
//
//  Created by upyun on 2020/11/24.
//  Copyright © 2020 upyun.com. All rights reserved.
//

#import "TuSDKFilterAdapter.h"

NS_ASSUME_NONNULL_BEGIN

@interface TuSDKFaceSmoothFilter : TuSDKTwoInputFilter
@property (nonatomic) CGFloat smooth; // 磨皮
@property (nonatomic) CGFloat sharpen; // 锐化
@end

NS_ASSUME_NONNULL_END
