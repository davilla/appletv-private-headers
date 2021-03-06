/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "UIFoundation-Structs.h"
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NSGlyphInfo : NSObject <NSCopying, NSCoding> {
	NSString *_baseString;	// 4 = 0x4
}
+ (id)glyphInfoWithCharacterIdentifier:(unsigned)characterIdentifier collection:(unsigned)collection baseString:(id)string;	// 0x36bf9c19
+ (id)glyphInfoWithGlyph:(unsigned)glyph forFont:(id)font baseString:(id)string;	// 0x36bf9bd1
+ (id)glyphInfoWithGlyphName:(id)glyphName forFont:(id)font baseString:(id)string;	// 0x36bf9b4d
+ (void)initialize;	// 0x36bf9c41
- (id)initWithBaseString:(id)baseString;	// 0x36bf9c8d
- (id)initWithCoder:(id)coder;	// 0x36bf9d95
- (id)_baseString;	// 0x36bf9d31
- (unsigned)_glyphForFont:(id)font baseString:(id)string;	// 0x36bf9d2d
- (unsigned)characterCollection;	// 0x36bf9d49
- (unsigned)characterIdentifier;	// 0x36bf9d45
- (Class)classForKeyedArchiver;	// 0x36bf9d85
- (id)copyWithZone:(NSZone *)zone;	// 0x36bf9f39
- (void)dealloc;	// 0x36bf9ce1
- (void)encodeWithCoder:(id)coder;	// 0x36bf9d4d
- (id)glyphName;	// 0x36bf9d41
@end

