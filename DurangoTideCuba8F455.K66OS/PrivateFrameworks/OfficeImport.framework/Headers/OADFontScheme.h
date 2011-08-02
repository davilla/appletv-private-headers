/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADFontScheme : NSObject {
@private
	NSMutableDictionary *mMajorFont;	// 4 = 0x4
	NSMutableDictionary *mMinorFont;	// 8 = 0x8
}
+ (void)addFontEntry:(id)entry script:(id)script typeface:(id)typeface;	// 0x32c5396d
- (id)init;	// 0x32bcc195
- (void)dealloc;	// 0x32b142b1
- (id)fontForFontSchemeRef:(id)fontSchemeRef;	// 0x32c7e96d
- (BOOL)isFontSchemeRef:(id)ref;	// 0x32b7fb45
- (id)majorFont;	// 0x32bf3bc1
- (unsigned)majorFontCount;	// 0x32cd5cd5
- (id)majorTypefaceForScript:(id)script;	// 0x32c7eba9
- (id)minorFont;	// 0x32bf3d75
- (unsigned)minorFontCount;	// 0x32cd5cb5
- (id)minorTypefaceForScript:(id)script;	// 0x32c7ea19
@end

