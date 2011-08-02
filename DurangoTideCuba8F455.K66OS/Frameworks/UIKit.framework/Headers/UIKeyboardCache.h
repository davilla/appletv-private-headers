/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class CPBitmapStore, NSSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject {
@private
	CPBitmapStore *_store;	// 4 = 0x4
	NSSet *_layouts;	// 8 = 0x8
}
+ (BOOL)enabled;	// 0x3015c7b1
+ (id)sharedInstance;	// 0x3015c2a5
- (id)init;	// 0x3015c2e9
- (void)dealloc;	// 0x3035b1d1
- (void)displayView:(id)view withKey:(id)key fromLayout:(id)layout;	// 0x3015c5cd
- (id)uniqueLayoutsFromInputModes:(id)inputModes;	// 0x3035b269
- (void)updateCacheForInputModes:(id)inputModes;	// 0x3035b0dd
@end

