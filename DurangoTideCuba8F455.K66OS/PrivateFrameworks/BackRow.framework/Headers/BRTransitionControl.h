/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"


__attribute__((visibility("hidden")))
@interface BRTransitionControl : BRControl {
@private
	BRControl *_content;	// 44 = 0x2c
	BOOL _transitionedIn;	// 48 = 0x30
}
@property(retain) BRControl *content;	// G=0x32f8d3e5; S=0x32f8ded5; converted property
@property(assign) BOOL transitionedIn;	// G=0x32f8d405; S=0x32f8d3f5; converted property
- (id)init;	// 0x32f8df69
// converted property getter: - (id)content;	// 0x32f8d3e5
- (void)controlDidDisplayAsModalDialog;	// 0x32fb5951
- (void)dealloc;	// 0x32f8df21
// converted property setter: - (void)setContent:(id)content;	// 0x32f8ded5
// converted property setter: - (void)setTransitionedIn:(BOOL)anIn;	// 0x32f8d3f5
// converted property getter: - (BOOL)transitionedIn;	// 0x32f8d405
@end

