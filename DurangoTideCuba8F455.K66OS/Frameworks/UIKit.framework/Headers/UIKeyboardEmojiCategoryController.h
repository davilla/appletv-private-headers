/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSMutableDictionary;
@protocol UIKeyboardEmojiController;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiCategoryController : NSObject {
@private
	id<UIKeyboardEmojiController> emojiController;	// 4 = 0x4
	NSMutableDictionary *categories;	// 8 = 0x8
	NSMutableDictionary *_defaultsData;	// 12 = 0xc
}
@property(retain) NSDictionary *defaultsData;	// G=0x30293fbd; S=0x30293b7d; 
- (id)initWithController:(id)controller;	// 0x30293f51
- (id)categoryForKey:(id)key;	// 0x30293c29
- (void)dealloc;	// 0x30293ef5
// declared property getter: - (id)defaultsData;	// 0x30293fbd
- (void)releaseCategories;	// 0x30293ed5
// declared property setter: - (void)setDefaultsData:(id)data;	// 0x30293b7d
- (void)updateRecents;	// 0x30293bdd
@end
