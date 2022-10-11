//
//  TuSDKCosmeticWrap.h
//  TuSDKVideo
//
//  Created by upyun on 2020/10/14.
//  Copyright © 2020 upyun. All rights reserved.
//

#import "TuSDKVideoImport.h"
#import "CosmeticLipFilter.h"
#import "TuSDKCosmeticImage.h"

NS_ASSUME_NONNULL_BEGIN

@interface TuSDKCosmeticWrap : TuSDKFilterWrap <TuSDKFilterFacePositionProtocol>

-(void) updateCosmeticFacial:(TuSDKCosmeticImage*)stickerImage;

-(void) closeCosmeticFacial;

-(void)updateCosmeticLip:(CosmeticLipType)type colorRGB:(int)colorRGB;

-(void) closeCosmeticLip;

-(void) updateCosmeticBlush:(TuSDKCosmeticImage*)stickerImage;

-(void) closeCosmeticBlush;

-(void) updateCosmeticEyebrow:(TuSDKCosmeticImage*)stickerImage;

-(void) closeCosmeticEyebrow;

-(void) updateCosmeticEyeshadow:(TuSDKCosmeticImage*)stickerImage;

-(void) closeCosmeticEyeshadow;

-(void) updateCosmeticEyeline:(TuSDKCosmeticImage*)stickerImage;

-(void) closeCosmeticEyeline;

-(void) updateCosmeticEyelash:(TuSDKCosmeticImage*)stickerImage;

-(void)closeCosmeticEyelash;

-(void)refreshRelation;

-(BOOL)active;

@end

NS_ASSUME_NONNULL_END
