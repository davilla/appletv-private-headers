/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSBundle;

@interface BRSystemLanguages : NSObject {
@private
	NSBundle *_promptBundle;	// 4 = 0x4
}
+ (id)currentLanguage;	// 0x303740fd
- (id)init;	// 0x30373ebd
- (id)_promptFileForLang:(id)lang;	// 0x30374175
- (void)dealloc;	// 0x30373f71
- (id)getLangsAndPrompts:(BOOL)prompts;	// 0x30373fbd
@end

