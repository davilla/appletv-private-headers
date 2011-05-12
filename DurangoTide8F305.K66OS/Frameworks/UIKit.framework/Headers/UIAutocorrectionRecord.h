/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface UIAutocorrectionRecord : NSObject {
@private
	NSString *_typing;	// 4 = 0x4
	NSString *_autocorrection;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *autocorrection;	// G=0x3224f769; @synthesize=_autocorrection
@property(readonly, assign, nonatomic) NSString *typing;	// G=0x320b5305; @synthesize=_typing
+ (id)recordOfTyping:(id)typing forAutocorrection:(id)autocorrection;	// 0x320b5285
// declared property getter: - (id)autocorrection;	// 0x3224f769
- (void)dealloc;	// 0x320bb109
// declared property getter: - (id)typing;	// 0x320b5305
@end

