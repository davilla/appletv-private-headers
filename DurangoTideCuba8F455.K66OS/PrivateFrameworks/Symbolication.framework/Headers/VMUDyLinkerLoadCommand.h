/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMULoadCommand.h"

@class NSString;

@interface VMUDyLinkerLoadCommand : VMULoadCommand {
	NSString *_name;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x3412099d; converted property
- (id)initWithMemory:(id)memory;	// 0x34120a45
- (void)dealloc;	// 0x341209ad
- (id)description;	// 0x341209f9
- (BOOL)isDyLinker;	// 0x34120999
// converted property getter: - (id)name;	// 0x3412099d
@end

