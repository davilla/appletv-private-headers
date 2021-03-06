/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIRuntimeConnection.h"


__attribute__((visibility("hidden")))
@interface UIRuntimeEventConnection : UIRuntimeConnection {
	unsigned eventMask;	// 16 = 0x10
}
@property(readonly, assign) SEL action;	// G=0x33c49e75; 
@property(assign) unsigned eventMask;	// G=0x33c4a021; S=0x33c4a035; @synthesize
@property(readonly, assign) id target;	// G=0x33c49e39; 
- (id)initWithCoder:(id)coder;	// 0x33c49d7d
// declared property getter: - (SEL)action;	// 0x33c49e75
- (void)connect;	// 0x33c49e91
- (void)connectForSimulator;	// 0x33c49ec1
- (id)description;	// 0x33c49fa1
- (void)encodeWithCoder:(id)coder;	// 0x33c49ddd
// declared property getter: - (unsigned)eventMask;	// 0x33c4a021
// declared property setter: - (void)setEventMask:(unsigned)mask;	// 0x33c4a035
// declared property getter: - (id)target;	// 0x33c49e39
@end

