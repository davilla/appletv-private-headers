/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITextRange, NSString;

__attribute__((visibility("hidden")))
@interface UITextReplacement : NSObject {
@private
	UITextRange *_range;	// 4 = 0x4
	NSString *_originalText;	// 8 = 0x8
	NSString *_replacementText;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *originalText;	// G=0x30352649; @synthesize=_originalText
@property(readonly, assign, nonatomic) UITextRange *range;	// G=0x30352659; @synthesize=_range
@property(readonly, assign, nonatomic) NSString *replacementText;	// G=0x30352639; @synthesize=_replacementText
+ (id)replacementWithRange:(id)range original:(id)original replacement:(id)replacement;	// 0x30352669
- (void)dealloc;	// 0x303526fd
// declared property getter: - (id)originalText;	// 0x30352649
// declared property getter: - (id)range;	// 0x30352659
// declared property getter: - (id)replacementText;	// 0x30352639
@end

