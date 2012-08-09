/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class CPBitmapStore, NSSet;

__attribute__((visibility("hidden")))
@interface UIKeyboardCache : NSObject {
	CPBitmapStore *_store;	// 4 = 0x4
	NSSet *_layouts;	// 8 = 0x8
	BOOL _isCommitting;	// 12 = 0xc
}
+ (BOOL)enabled;	// 0x33adbc2d
+ (id)sharedInstance;	// 0x33a769f5
- (id)init;	// 0x33a76a3d
- (void)cacheView:(id)view forKey:(id)key fromLayout:(id)layout;	// 0x33d58159
- (CGImageRef)cachedImageForKey:(id)key fromLayout:(id)layout;	// 0x33d58101
- (void)commitTransaction;	// 0x33a76c29
- (void)dealloc;	// 0x33d5809d
- (void)displayView:(id)view imageWidth:(float)width withKey:(id)key fromLayout:(id)layout;	// 0x33adb971
- (void)displayView:(id)view withKey:(id)key fromLayout:(id)layout;	// 0x33adb90d
- (CGImageRef)renderBlock:(id)block forView:(id)view withKey:(id)key fromLayout:(id)layout;	// 0x33d5834d
- (id)uniqueLayoutsFromInputModes:(id)inputModes;	// 0x33d58411
- (void)updateCacheForInputModes:(id)inputModes;	// 0x33d584f9
@end
