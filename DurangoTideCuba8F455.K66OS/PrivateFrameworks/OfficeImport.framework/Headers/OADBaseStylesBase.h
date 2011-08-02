/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADFontScheme, OADColorScheme, OADStyleMatrix;

__attribute__((visibility("hidden")))
@interface OADBaseStylesBase : NSObject {
@private
	OADColorScheme *mColorScheme;	// 4 = 0x4
	OADStyleMatrix *mStyleMatrix;	// 8 = 0x8
	OADFontScheme *mFontScheme;	// 12 = 0xc
}
@property(retain, nonatomic) OADFontScheme *fontScheme;	// G=0x32b7fabd; S=0x32bf2775; @synthesize=mFontScheme
- (id)colorScheme;	// 0x32b96f6d
- (void)dealloc;	// 0x32b1417d
// declared property getter: - (id)fontScheme;	// 0x32b7fabd
// declared property setter: - (void)setFontScheme:(id)scheme;	// 0x32bf2775
- (id)styleMatrix;	// 0x32c51f6d
@end

