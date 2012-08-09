/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlMediator.h"

@class BRProviderGroup;

__attribute__((visibility("hidden")))
@interface BRThresholdControlMediator : BRControlMediator {
	BRProviderGroup *_dataProviderGroup;	// 20 = 0x14
	int _activeThreshold;	// 24 = 0x18
}
- (void)_refreshActiveState;	// 0x33e9dd
- (void)dealloc;	// 0x33e745
- (void)setActiveThreshold:(int)threshold;	// 0x33e9bd
- (void)setDataProvider:(id)provider;	// 0x33e981
- (void)setDataProviders:(id)providers;	// 0x33e7c1
@end
