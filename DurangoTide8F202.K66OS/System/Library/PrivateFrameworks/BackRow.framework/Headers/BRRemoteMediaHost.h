/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRMediaHost.h"


__attribute__((visibility("hidden")))
@interface BRRemoteMediaHost : BRMediaHost {
@private
	BOOL _hostFound;	// 44 = 0x2c
	BOOL _hostValid;	// 45 = 0x2d
}
@property(assign) BOOL hostFound;	// G=0x329491e5; S=0x329491f5; converted property
@property(assign) BOOL hostValid;	// G=0x32949205; S=0x32949215; converted property
// converted property getter: - (BOOL)hostFound;	// 0x329491e5
- (id)hostID;	// 0x32949639
// converted property getter: - (BOOL)hostValid;	// 0x32949205
// converted property setter: - (void)setHostFound:(BOOL)found;	// 0x329491f5
// converted property setter: - (void)setHostValid:(BOOL)valid;	// 0x32949215
@end

