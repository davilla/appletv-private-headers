/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColor, OADFontReference;

__attribute__((visibility("hidden")))
@interface OADTableTextStyle : NSObject {
@private
	OADFontReference *mFontReference;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
	int mBold;	// 12 = 0xc
	int mItalic;	// 16 = 0x10
}
@property(assign) int bold;	// G=0x329f8ced; S=0x329ce4ed; converted property
@property(retain) id color;	// G=0x329f8cdd; S=0x329ce271; converted property
@property(retain) id fontReference;	// G=0x32ac420d; S=0x329cded5; converted property
@property(assign) int italic;	// G=0x32ac421d; S=0x32ac422d; converted property
+ (int)defaultBold;	// 0x32ac423d
+ (id)defaultColor;	// 0x32ac4541
+ (id)defaultFontReference;	// 0x32ac44b1
+ (int)defaultItalic;	// 0x32ac4241
+ (id)defaultStyle;	// 0x32ac43ad
- (id)init;	// 0x329cde89
- (void)applyOverridesFrom:(id)from;	// 0x32ac4589
// converted property getter: - (int)bold;	// 0x329f8ced
// converted property getter: - (id)color;	// 0x329f8cdd
- (void)dealloc;	// 0x329cf5a1
// converted property getter: - (id)fontReference;	// 0x32ac420d
// converted property getter: - (int)italic;	// 0x32ac421d
// converted property setter: - (void)setBold:(int)bold;	// 0x329ce4ed
// converted property setter: - (void)setColor:(id)color;	// 0x329ce271
// converted property setter: - (void)setFontReference:(id)reference;	// 0x329cded5
// converted property setter: - (void)setItalic:(int)italic;	// 0x32ac422d
- (id)shallowCopy;	// 0x32ac4671
@end

