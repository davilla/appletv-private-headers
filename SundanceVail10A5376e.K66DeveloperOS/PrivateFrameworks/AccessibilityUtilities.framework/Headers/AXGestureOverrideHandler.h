/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library
#import "AccessibilityUtilities-Structs.h"

@class NSString;

@interface AXGestureOverrideHandler : NSObject {
	id handler;	// 4 = 0x4
	int type;	// 8 = 0x8
	NSString *identifier;	// 12 = 0xc
}
@property(copy, nonatomic) id handler;	// G=0x341a1f49; S=0x341a1f5d; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x341a1f8d; S=0x341a1f9d; @synthesize
@property(assign, nonatomic) int type;	// G=0x341a1f6d; S=0x341a1f7d; @synthesize
// declared property getter: - (id)handler;	// 0x341a1f49
// declared property getter: - (NSString *)identifier;	// 0x341a1f8d
// declared property setter: - (void)setHandler:(id)handler;	// 0x341a1f5d
// declared property setter: - (void)setIdentifier:(NSString *)identifier;	// 0x341a1f9d
// declared property setter: - (void)setType:(int)type;	// 0x341a1f7d
// declared property getter: - (int)type;	// 0x341a1f6d
@end

