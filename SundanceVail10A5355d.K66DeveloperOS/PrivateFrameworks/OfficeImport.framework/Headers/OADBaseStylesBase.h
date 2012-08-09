/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColorScheme, OADFontScheme, OADStyleMatrix;

@interface OADBaseStylesBase : NSObject {
	OADColorScheme *mColorScheme;	// 4 = 0x4
	OADStyleMatrix *mStyleMatrix;	// 8 = 0x8
	OADFontScheme *mFontScheme;	// 12 = 0xc
}
@property(retain, nonatomic) OADFontScheme *fontScheme;	// G=0x31ba0a45; S=0x31ba0a55; @synthesize=mFontScheme
- (id)colorScheme;	// 0x31ba3451
- (void)dealloc;	// 0x31c0a20d
// declared property getter: - (id)fontScheme;	// 0x31ba0a45
// declared property setter: - (void)setFontScheme:(id)scheme;	// 0x31ba0a55
- (id)styleMatrix;	// 0x31c5ea59
@end
