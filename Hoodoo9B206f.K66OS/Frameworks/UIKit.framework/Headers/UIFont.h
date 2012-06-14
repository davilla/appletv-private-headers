/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface UIFont : NSObject {
}
@property(readonly, assign, nonatomic) float ascender;	// G=0x35316afd; 
@property(readonly, assign, nonatomic) float capHeight;	// G=0x353eb7b1; 
@property(readonly, assign, nonatomic) float descender;	// G=0x35328a0d; 
@property(readonly, assign, nonatomic) NSString *familyName;	// G=0x3539036d; 
@property(readonly, assign, nonatomic) NSString *fontName;	// G=0x35390325; 
@property(readonly, assign, nonatomic) float lineHeight;	// G=0x353a4905; 
@property(readonly, assign, nonatomic) float pointSize;	// G=0x35315c69; 
@property(readonly, assign, nonatomic) float xHeight;	// G=0x35537755; 
+ (id)__newDummy;	// 0x35536dbd
+ (id)_boldItalicSystemFontOfSize:(float)size;	// 0x35536f25
+ (id)_systemFontsOfSize:(float)size traits:(int)traits;	// 0x35536f39
+ (id)boldSystemFontOfSize:(float)size;	// 0x3532bb0d
+ (float)buttonFontSize;	// 0x355370d9
+ (id)familyNames;	// 0x35536ec5
+ (id)fontNamesForFamilyName:(id)familyName;	// 0x35536ee1
+ (id)fontWithFamilyName:(id)familyName traits:(int)traits size:(float)size;	// 0x35536e59
+ (id)fontWithMarkupDescription:(id)markupDescription;	// 0x35536e7d
+ (id)fontWithName:(id)name size:(float)size;	// 0x353d8359
+ (id)fontWithName:(id)name size:(float)size traits:(int)traits;	// 0x353d837d
+ (id)italicSystemFontOfSize:(float)size;	// 0x35536f11
+ (float)labelFontSize;	// 0x355370d1
+ (float)smallSystemFontSize;	// 0x355370e1
+ (id)systemFontOfSize:(float)size;	// 0x353326d1
+ (id)systemFontOfSize:(float)size traits:(int)traits;	// 0x3532bb21
+ (float)systemFontSize;	// 0x355370e9
- (id)initWithCoder:(id)coder;	// 0x35537465
- (id)initWithFamilyName:(id)familyName traits:(int)traits size:(float)size;	// 0x35537161
- (id)initWithMarkupDescription:(id)markupDescription;	// 0x355371dd
- (id)initWithName:(id)name size:(float)size;	// 0x355370f1
- (id)_alternateSystemFonts;	// 0x35537011
// declared property getter: - (float)ascender;	// 0x35316afd
// declared property getter: - (float)capHeight;	// 0x353eb7b1
- (Class)classForCoder;	// 0x35537739
// declared property getter: - (float)descender;	// 0x35328a0d
- (id)description;	// 0x35537765
- (void)encodeWithCoder:(id)coder;	// 0x3553765d
// declared property getter: - (id)familyName;	// 0x3539036d
- (id)familyNameForCSSFontFamilyValue;	// 0x35390259
// declared property getter: - (id)fontName;	// 0x35390325
- (id)fontWithSize:(float)size;	// 0x35332acd
- (BOOL)isFixedPitch;	// 0x35537759
- (BOOL)isSystemFont;	// 0x35332bcd
- (float)leading;	// 0x35373c59
// declared property getter: - (float)lineHeight;	// 0x353a4905
- (id)markupDescription;	// 0x35390199
// declared property getter: - (float)pointSize;	// 0x35315c69
- (int)traits;	// 0x35332bd9
// declared property getter: - (float)xHeight;	// 0x35537755
@end
