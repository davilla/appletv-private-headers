/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiFactory : NSObject {
@private
	NSMutableDictionary *emojiMap;	// 4 = 0x4
}
- (id)init;	// 0x33c0b7f5
- (void)dealloc;	// 0x33c0b90d
- (id)emojiWithKey:(id)key;	// 0x33c0b979
- (id)emojiWithPrivateCodePoint:(id)privateCodePoint;	// 0x33c0b959
@end

