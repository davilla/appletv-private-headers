/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBJsonStreamWriterState : NSObject {
}
+ (id)sharedInstance;	// 0x32c46b81
- (void)appendSeparator:(id)separator;	// 0x32c46b89
- (void)appendWhitespace:(id)whitespace;	// 0x32c46b95
- (BOOL)expectingKey:(id)key;	// 0x32c46b8d
- (BOOL)isInvalidState:(id)state;	// 0x32c46b85
- (void)transitionState:(id)state;	// 0x32c46b91
@end
