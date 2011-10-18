/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library

@class SCRCArgumentHolderPrivate;

__attribute__((visibility("hidden")))
@interface SCRCArgumentHolder : NSObject {
@private
	SCRCArgumentHolderPrivate *_private;	// 4 = 0x4
}
@property(assign) SEL action;	// G=0x323a4d19; S=0x323a4cf9; converted property
@property(retain) id argument;	// G=0x323a4c99; S=0x323a4ee5; converted property
@property(retain) id argumentDescription;	// G=0x323a4d39; S=0x323a4e79; converted property
@property(assign) BOOL isRequired;	// G=0x323a4d79; S=0x323a4d59; converted property
@property(retain) id option;	// G=0x323a4c79; S=0x323a4f51; converted property
@property(retain) id target;	// G=0x323a4cd9; S=0x323a4cb9; converted property
- (id)init;	// 0x323a4d99
// converted property getter: - (SEL)action;	// 0x323a4d19
// converted property getter: - (id)argument;	// 0x323a4c99
// converted property getter: - (id)argumentDescription;	// 0x323a4d39
- (int)compare:(id)compare;	// 0x323a4fad
- (void)dealloc;	// 0x323a2bcd
- (unsigned)hash;	// 0x323a5015
- (BOOL)isEqual:(id)equal;	// 0x323a5049
// converted property getter: - (BOOL)isRequired;	// 0x323a4d79
// converted property getter: - (id)option;	// 0x323a4c79
- (BOOL)process;	// 0x323a50a5
// converted property setter: - (void)setAction:(SEL)action;	// 0x323a4cf9
// converted property setter: - (void)setArgument:(id)argument;	// 0x323a4ee5
// converted property setter: - (void)setArgumentDescription:(id)description;	// 0x323a4e79
// converted property setter: - (void)setIsRequired:(BOOL)required;	// 0x323a4d59
// converted property setter: - (void)setOption:(id)option;	// 0x323a4f51
// converted property setter: - (void)setTarget:(id)target;	// 0x323a4cb9
// converted property getter: - (id)target;	// 0x323a4cd9
@end

