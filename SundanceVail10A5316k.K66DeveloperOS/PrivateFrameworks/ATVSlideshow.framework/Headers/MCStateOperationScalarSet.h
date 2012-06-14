/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCStateOperation.h"


@interface MCStateOperationScalarSet : MCStateOperation {
@private
	float _scalar;	// 16 = 0x10
}
@property(assign, nonatomic) float scalar;	// G=0x3652f66d; S=0x3652f67d; @synthesize=_scalar
+ (id)stateOperationForTargetPlugObjectID:(id)targetPlugObjectID withStateKey:(id)stateKey andScalar:(float)scalar;	// 0x3652f485
- (id)initWithImprint:(id)imprint;	// 0x3652f4c1
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x3652f5bd
- (id)description;	// 0x3652f609
- (id)imprint;	// 0x3652f531
// declared property getter: - (float)scalar;	// 0x3652f66d
// declared property setter: - (void)setScalar:(float)scalar;	// 0x3652f67d
@end
