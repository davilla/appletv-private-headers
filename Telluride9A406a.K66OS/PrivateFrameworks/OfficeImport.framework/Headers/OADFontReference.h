/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class OADColor;

__attribute__((visibility("hidden")))
@interface OADFontReference : NSObject <NSCopying> {
@private
	int mIndex;	// 4 = 0x4
	OADColor *mColor;	// 8 = 0x8
}
@property(retain) id color;	// G=0x32abfd71; S=0x329ce231; converted property
@property(assign) int index;	// G=0x32abfd61; S=0x329ce1e1; converted property
- (void)applyToParagraphProperties:(id)paragraphProperties;	// 0x329d7f71
// converted property getter: - (id)color;	// 0x32abfd71
- (id)copyWithZone:(NSZone *)zone;	// 0x329eb969
- (void)dealloc;	// 0x329cf601
// converted property getter: - (int)index;	// 0x32abfd61
// converted property setter: - (void)setColor:(id)color;	// 0x329ce231
// converted property setter: - (void)setIndex:(int)index;	// 0x329ce1e1
@end

