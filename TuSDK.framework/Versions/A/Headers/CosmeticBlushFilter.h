//
//  CosmeticBlushFilter.h
//  TuSDK
//
//  Created by upyun on 2020/10/12.
//  Copyright © 2020 upyun.com. All rights reserved.
//

#import "TuSDKFilterAdapter.h"
#import "TuSDKFilterParameter.h"
#import "TuSDKCosmeticImage.h"

@interface CosmeticBlushFilter : TuSDKTwoInputFilter<TuSDKFilterParameterProtocol,TuSDKFilterFacePositionProtocol>

- (void) updateSticker:(TuSDKCosmeticImage *)stickerImage;

@property(readwrite, nonatomic) float alpha;

@end
