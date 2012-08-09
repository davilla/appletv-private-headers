/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class PDBuild, PDSequentialTimeNodeGroup, OADDrawable;

@interface PDAnimationInfoData : NSObject {
	unsigned mOrder;	// 4 = 0x4
	PDBuild *mBuild;	// 8 = 0x8
	PDSequentialTimeNodeGroup *mSequentialTimeNodeData;	// 12 = 0xc
	OADDrawable *mDrawable;	// 16 = 0x10
}
- (id)initWithTargetElement:(id)targetElement presetClass:(int)aClass presetId:(int)anId triggerType:(int)type iterateType:(int)type5 delay:(double)delay direction:(double)direction order:(unsigned)order groupId:(id)anId9 build:(id)build;	// 0x37181589
- (id)build;	// 0x371817c9
- (id)data;	// 0x371817d9
- (void)dealloc;	// 0x37181755
- (id)drawable;	// 0x371817e9
- (unsigned)order;	// 0x371817b9
@end
