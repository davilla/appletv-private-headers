/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCPlug.h"

@class MCContainerNavigator, MCAction, NSString;

@interface MCPlugHaven : MCPlug {
	NSString *mIDInSupercontainer;	// 64 = 0x40
	MCContainerNavigator *mSupercontainer;	// 68 = 0x44
}
@property(readonly, assign) MCAction *actionOnCompletion;	// G=0x33dc1875; 
@property(copy, getter=idInSupercontainer, setter=setIDInSupercontainer:) NSString *idInSupercontainer;	// G=0x33dc1925; S=0x33dc193d; @synthesize=mIDInSupercontainer
@property(assign) MCContainerNavigator *supercontainer;	// G=0x33dc1969; S=0x33dc1979; @synthesize=mSupercontainer
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33dc1749
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33dc18c5
// declared property getter: - (id)actionOnCompletion;	// 0x33dc1875
- (void)demolish;	// 0x33dc17b9
// declared property getter: - (id)idInSupercontainer;	// 0x33dc1925
- (id)imprint;	// 0x33dc1819
// declared property setter: - (void)setIDInSupercontainer:(id)supercontainer;	// 0x33dc193d
// declared property setter: - (void)setSupercontainer:(id)supercontainer;	// 0x33dc1979
- (id)setTransitionOnCompletionForTargetPlugObjectID:(id)targetPlugObjectID withTransitionID:(id)transitionID;	// 0x33dc1895
// declared property getter: - (id)supercontainer;	// 0x33dc1969
@end

