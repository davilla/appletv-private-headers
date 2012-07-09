/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SettingsTVResolutionController : BRViewController {
	NSArray *_resolutionList;	// 100 = 0x64
	long _currentSavedSelection;	// 104 = 0x68
}
- (id)init;	// 0xb2205
- (void).cxx_destruct;	// 0xb2761
- (void)_buildSupportedResolutionList;	// 0xb2775
- (void)_handleResolutionChangeResult:(int)result forMode:(id)mode;	// 0xb2ac9
- (void)_refreshDisplaySettings:(id)settings;	// 0xb2a99
- (void)dealloc;	// 0xb23cd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb25ad
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb2439
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb2585
@end
