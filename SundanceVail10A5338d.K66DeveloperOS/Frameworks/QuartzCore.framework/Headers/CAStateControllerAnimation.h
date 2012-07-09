/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface CAStateControllerAnimation : NSObject {
	CALayer *_layer;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *key;	// G=0x3207a6c9; @synthesize=_key
@property(readonly, assign, nonatomic) CALayer *layer;	// G=0x3207a6b9; @synthesize=_layer
- (id)initWithLayer:(id)layer key:(id)key;	// 0x3207a5dd
- (void)dealloc;	// 0x3207a655
// declared property getter: - (id)key;	// 0x3207a6c9
// declared property getter: - (id)layer;	// 0x3207a6b9
@end
