/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSString;

@interface UIFont : NSObject <NSCopying> {
}
@property(readonly, assign, nonatomic) float ascender;	// G=0x3009c0f5; 
@property(readonly, assign, nonatomic) float capHeight;	// G=0x301626e9; 
@property(readonly, assign, nonatomic) float descender;	// G=0x300ab9d9; 
@property(readonly, assign, nonatomic) NSString *familyName;	// G=0x3010d689; 
@property(readonly, assign, nonatomic) NSString *fontName;	// G=0x3010d641; 
@property(readonly, assign, nonatomic) float lineHeight;	// G=0x30120ac9; 
@property(readonly, assign, nonatomic) float pointSize;	// G=0x3009af45; 
@property(readonly, assign, nonatomic) float xHeight;	// G=0x302acbed; 
+ (id)__newDummy;	// 0x302ac0c9
+ (id)_boldItalicSystemFontOfSize:(float)size;	// 0x302ac231
+ (id)_systemFontsOfSize:(float)size traits:(int)traits;	// 0x302ac245
+ (id)boldSystemFontOfSize:(float)size;	// 0x300aed09
+ (float)buttonFontSize;	// 0x302ac401
+ (id)classFallbacksForKeyedArchiver;	// 0x302aca65
+ (id)familyNames;	// 0x302ac1d1
+ (id)fontNamesForFamilyName:(id)familyName;	// 0x302ac1ed
+ (id)fontWithFamilyName:(id)familyName traits:(int)traits size:(float)size;	// 0x302ac165
+ (id)fontWithMarkupDescription:(id)markupDescription;	// 0x302ac189
+ (id)fontWithName:(id)name size:(float)size;	// 0x30150099
+ (id)fontWithName:(id)name size:(float)size traits:(int)traits;	// 0x301500bd
+ (id)italicSystemFontOfSize:(float)size;	// 0x302ac21d
+ (float)labelFontSize;	// 0x302ac3f9
+ (float)smallSystemFontSize;	// 0x302ac409
+ (id)systemFontOfSize:(float)size;	// 0x300b4f59
+ (id)systemFontOfSize:(float)size traits:(int)traits;	// 0x300aed1d
+ (float)systemFontSize;	// 0x302ac411
- (id)initWithCoder:(id)coder;	// 0x302ac891
- (id)initWithFamilyName:(id)familyName traits:(int)traits size:(float)size;	// 0x302ac489
- (id)initWithMarkupDescription:(id)markupDescription;	// 0x302ac505
- (id)initWithName:(id)name size:(float)size;	// 0x302ac419
- (id)_alternateSystemFonts;	// 0x302ac339
- (id)_fontScaledByScaleFactor:(float)factor;	// 0x302ac7a9
// declared property getter: - (float)ascender;	// 0x3009c0f5
// declared property getter: - (float)capHeight;	// 0x301626e9
- (Class)classForCoder;	// 0x302acbd1
- (id)copyWithZone:(NSZone *)zone;	// 0x302acc6d
// declared property getter: - (float)descender;	// 0x300ab9d9
- (id)description;	// 0x302acbfd
- (void)encodeWithCoder:(id)coder;	// 0x302aca9d
// declared property getter: - (id)familyName;	// 0x3010d689
- (id)familyNameForCSSFontFamilyValue;	// 0x3010d57d
// declared property getter: - (id)fontName;	// 0x3010d641
- (id)fontWithSize:(float)size;	// 0x300b54c1
- (BOOL)isFixedPitch;	// 0x302acbf1
- (BOOL)isSystemFont;	// 0x300b55a9
- (float)leading;	// 0x300f3269
// declared property getter: - (float)lineHeight;	// 0x30120ac9
- (id)markupDescription;	// 0x3010d4c1
// declared property getter: - (float)pointSize;	// 0x3009af45
- (int)traits;	// 0x300b55b5
// declared property getter: - (float)xHeight;	// 0x302acbed
@end

