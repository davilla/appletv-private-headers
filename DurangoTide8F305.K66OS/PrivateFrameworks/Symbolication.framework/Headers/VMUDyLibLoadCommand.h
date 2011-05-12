/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString;

@interface VMUDyLibLoadCommand : VMULoadCommand {
	NSString *_path;	// 16 = 0x10
	unsigned _currentVersion;	// 20 = 0x14
	unsigned _compatibilityVersion;	// 24 = 0x18
}
@property(readonly, assign) unsigned compatibilityVersion;	// G=0x311a9061; converted property
@property(readonly, assign) unsigned currentVersion;	// G=0x311a9051; converted property
@property(readonly, retain) NSString *path;	// G=0x311a9041; converted property
- (id)initWithMemory:(id)memory;	// 0x311a910d
// converted property getter: - (unsigned)compatibilityVersion;	// 0x311a9061
// converted property getter: - (unsigned)currentVersion;	// 0x311a9051
- (void)dealloc;	// 0x311a9075
- (id)description;	// 0x311a90c1
- (BOOL)isLoadDyLib;	// 0x311a9071
// converted property getter: - (id)path;	// 0x311a9041
@end

