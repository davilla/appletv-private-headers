/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SBJsonStreamParserAdapterDelegate.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBJsonStreamParserAccumulator : NSObject <SBJsonStreamParserAdapterDelegate> {
@private
	id value;	// 4 = 0x4
}
@property(readonly, copy) id value;	// G=0x3330098c; @synthesize
- (void)dealloc;	// 0x33300928
- (void)parser:(id)parser foundArray:(id)array;	// 0x333008c0
- (void)parser:(id)parser foundObject:(id)object;	// 0x333008f4
// declared property getter: - (id)value;	// 0x3330098c
@end
