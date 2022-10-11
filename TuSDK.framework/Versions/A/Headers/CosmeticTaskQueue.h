//
//  CosmeticTaskQueue.h
//  TuSDK
//
//  Created by upyun on 2020/10/26.
//  Copyright © 2020 upyun.com. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CosmeticTaskQueue : NSObject

-(instancetype) initWithCapacity:(int)size;

-(void) push:(id)elem;

-(id)poll;

@end

NS_ASSUME_NONNULL_END
