//
//  TuSDKGPUParticleFilter.h
//  TuSDK
//
//  Created by Clear Hu on 2017/12/25.
//  Copyright © 2017年 upyun.com. All rights reserved.
//

#import "TuSDKFilterAdapter.h"
#import "TuSDKParticleFilterInterface.h"

/** Particle Filter*/
@interface TuSDKGPUParticleFilter : TuSDKTwoInputFilter<TuSDKParticleFilterProtocol>

- (instancetype)initWithArgList:(NSDictionary *)argList;

- (void) loadTexture;

@end
