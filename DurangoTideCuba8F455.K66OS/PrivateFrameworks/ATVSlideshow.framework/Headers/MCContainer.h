/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCAudioPlaylist, NSLock, NSSet, NSMutableSet;

@interface MCContainer : MCObject {
	MCAudioPlaylist *mAudioPlaylist;	// 12 = 0xc
	NSMutableSet *mReferencingPlugs;	// 16 = 0x10
	NSLock *mReferencingPlugsLock;	// 20 = 0x14
	long mSpecialRetainCount;	// 24 = 0x18
}
@property(readonly, assign) MCAudioPlaylist *audioPlaylist;	// G=0x33db08c9; @synthesize=mAudioPlaylist
@property(readonly, assign) MCAudioPlaylist *audioPlaylistCreateIfNeeded;	// G=0x33db03d5; 
@property(readonly, assign) unsigned numberOfReferencingPlugs;	// G=0x33db05f1; 
@property(readonly, assign) NSSet *referencingPlugs;	// G=0x33db0545; @synthesize=mReferencingPlugs
- (id)init;	// 0x33db014d
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33db0205
// declared property getter: - (id)audioPlaylist;	// 0x33db08c9
// declared property getter: - (id)audioPlaylistCreateIfNeeded;	// 0x33db03d5
- (void)demolish;	// 0x33db02c1
- (id)imprint;	// 0x33db0365
// declared property getter: - (unsigned)numberOfReferencingPlugs;	// 0x33db05f1
- (void)referenceByPlug:(id)plug;	// 0x33db0651
// declared property getter: - (id)referencingPlugs;	// 0x33db0545
- (void)specialRelease;	// 0x33db07f5
- (id)specialRetain;	// 0x33db0791
- (void)unreferenceByPlug:(id)plug;	// 0x33db06b9
@end

