/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBJsonStreamParserAdapterDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBJsonStreamParserAccumulator : XXUnknownSuperclass <SBJsonStreamParserAdapterDelegate> {
	id value;	// 4 = 0x4
}
@property(readonly, assign) id value;	// G=0x451e39; @synthesize
- (void)dealloc;	// 0x451d9d
- (void)parser:(id)parser foundArray:(id)array;	// 0x451de9
- (void)parser:(id)parser foundObject:(id)object;	// 0x451e11
// declared property getter: - (id)value;	// 0x451e39
@end
