/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterRun, NSString, WDText, NSDate;

__attribute__((visibility("hidden")))
@interface WDAnnotation : WDRun {
@private
	int mType;	// 8 = 0x8
	WDText *mText;	// 12 = 0xc
	WDCharacterRun *mReference;	// 16 = 0x10
	BOOL mReferencePopertiesFixed;	// 20 = 0x14
	NSDate *mDate;	// 24 = 0x18
	NSString *mOwner;	// 28 = 0x1c
	WDAnnotation *mOtherEndOfRangedAnnotation;	// 32 = 0x20
}
@property(retain) id date;	// G=0x3136ac51; S=0x3136af49; converted property
@property(retain) id otherEndOfRangedAnnotation;	// G=0x3136ac71; S=0x3136aec9; converted property
@property(retain) id owner;	// G=0x3136ac61; S=0x3136af09; converted property
- (id)initWithParagraph:(id)paragraph type:(int)type;	// 0x3136ac81
- (int)annotationType;	// 0x3136ac41
// converted property getter: - (id)date;	// 0x3136ac51
- (void)dealloc;	// 0x3136ae2d
// converted property getter: - (id)otherEndOfRangedAnnotation;	// 0x3136ac71
// converted property getter: - (id)owner;	// 0x3136ac61
- (id)reference;	// 0x3136ac09
- (BOOL)referencePropertiesFixed;	// 0x3136ac19
- (int)runType;	// 0x3136ac3d
// converted property setter: - (void)setDate:(id)date;	// 0x3136af49
// converted property setter: - (void)setOtherEndOfRangedAnnotation:(id)rangedAnnotation;	// 0x3136aec9
// converted property setter: - (void)setOwner:(id)owner;	// 0x3136af09
- (void)setReferencePropertiesFixed;	// 0x3136ac29
- (id)text;	// 0x3136abf9
@end

