/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSBundle;

@interface BRSystemLanguages : NSObject {
@private
	NSBundle *_promptBundle;	// 4 = 0x4
}
+ (id)currentLanguage;	// 0x32f19cb1
- (id)init;	// 0x32fdce5d
- (id)_promptFileForLang:(id)lang;	// 0x32fdcce1
- (void)dealloc;	// 0x32fdce15
- (id)getLangsAndPrompts:(BOOL)prompts;	// 0x32fdcd25
@end

