/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSingleton.h"
#import "AppleTV-Structs.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface BRFontCache : BRSingleton {
@private
	CGSize _displaySize;	// 4 = 0x4
	NSDictionary *_cache;	// 12 = 0xc
}
+ (void)setSingleton:(id)singleton;	// 0x342abd55
+ (id)singleton;	// 0x342abd45
- (id)init;	// 0x342abd65
- (CTFontRef)_createFontForAttributes:(id)attributes;	// 0x342ac061
- (id)addRealFontsToAttributedString:(id)attributedString;	// 0x342abe29
- (CTFontRef)createFontForRowHeight:(float)rowHeight fontName:(id)name;	// 0x342abf01
- (void)dealloc;	// 0x342abddd
- (void)setDisplaySize:(CGSize)size;	// 0x342abff5
@end

