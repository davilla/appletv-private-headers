/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation : ISOperation {
	NSDictionary *_mismatches;	// 60 = 0x3c
	id _requiredCapabilities;	// 64 = 0x40
}
@property(readonly, assign) NSDictionary *mismatches;	// G=0x307870e1; 
@property(readonly, assign) id requiredCapabilities;	// G=0x30787119; 
- (id)initWithRequiredCapabilities:(id)requiredCapabilities mismatches:(id)mismatches;	// 0x3078701d
- (void)_postDefaultDialog;	// 0x307875b1
- (void)dealloc;	// 0x3078707d
// declared property getter: - (id)mismatches;	// 0x307870e1
// declared property getter: - (id)requiredCapabilities;	// 0x30787119
- (void)run;	// 0x30787151
@end

