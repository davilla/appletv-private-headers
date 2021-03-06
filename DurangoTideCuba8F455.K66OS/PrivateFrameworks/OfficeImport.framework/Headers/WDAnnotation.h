/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterRun, WDText, NSDate, NSString;

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
@property(retain) id date;	// G=0x32d1ca75; S=0x32d1cba5; converted property
@property(retain) id otherEndOfRangedAnnotation;	// G=0x32d1ca95; S=0x32d1cb35; converted property
@property(retain) id owner;	// G=0x32d1ca85; S=0x32d1cb6d; converted property
- (id)initWithParagraph:(id)paragraph type:(int)type;	// 0x32d1cbdd
- (int)annotationType;	// 0x32d1ca65
// converted property getter: - (id)date;	// 0x32d1ca75
- (void)dealloc;	// 0x32d1caa5
// converted property getter: - (id)otherEndOfRangedAnnotation;	// 0x32d1ca95
// converted property getter: - (id)owner;	// 0x32d1ca85
- (id)reference;	// 0x32d1ca31
- (BOOL)referencePropertiesFixed;	// 0x32d1ca41
- (int)runType;	// 0x32d1ca61
// converted property setter: - (void)setDate:(id)date;	// 0x32d1cba5
// converted property setter: - (void)setOtherEndOfRangedAnnotation:(id)rangedAnnotation;	// 0x32d1cb35
// converted property setter: - (void)setOwner:(id)owner;	// 0x32d1cb6d
- (void)setReferencePropertiesFixed;	// 0x32d1ca51
- (id)text;	// 0x32d1ca21
@end

