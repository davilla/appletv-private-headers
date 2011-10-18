/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

__attribute__((visibility("hidden")))
@interface WDFieldMarker : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	int mFieldPosition;	// 12 = 0xc
	int mMarkerType;	// 16 = 0x10
	unsigned char mFieldType;	// 20 = 0x14
	unsigned mZombieEmbed : 1;	// 21 = 0x15
	unsigned mResultDirty : 1;	// 21 = 0x15
	unsigned mResultEdited : 1;	// 21 = 0x15
	unsigned mLocked : 1;	// 21 = 0x15
	unsigned mPrivateResult : 1;	// 21 = 0x15
	unsigned mNested : 1;	// 21 = 0x15
	unsigned mHasSeparator : 1;	// 21 = 0x15
}
@property(assign) int fieldMarkerType;	// G=0x351b7845; S=0x352618e9; converted property
@property(assign) long fieldPosition;	// G=0x353b29dd; S=0x352618d9; converted property
@property(assign) unsigned char fieldType;	// G=0x351baac1; S=0x352618fd; converted property
@property(assign) BOOL hasSeparator;	// G=0x353b2b51; S=0x353b2b6d; converted property
@property(assign) BOOL locked;	// G=0x353b2a9d; S=0x353b2ab9; converted property
@property(assign) BOOL nested;	// G=0x353b2b15; S=0x353b2b31; converted property
@property(assign) BOOL privateResult;	// G=0x353b2ad9; S=0x353b2af5; converted property
@property(assign) BOOL resultDirty;	// G=0x353b2a25; S=0x353b2a41; converted property
@property(assign) BOOL resultEdited;	// G=0x353b2a61; S=0x353b2a7d; converted property
@property(assign) BOOL zombieEmbed;	// G=0x353b29ed; S=0x353b2a09; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x35261541
- (void)clearProperties;	// 0x353b2b8d
- (void)dealloc;	// 0x351c8dd9
// converted property getter: - (int)fieldMarkerType;	// 0x351b7845
// converted property getter: - (long)fieldPosition;	// 0x353b29dd
// converted property getter: - (unsigned char)fieldType;	// 0x351baac1
// converted property getter: - (BOOL)hasSeparator;	// 0x353b2b51
// converted property getter: - (BOOL)locked;	// 0x353b2a9d
// converted property getter: - (BOOL)nested;	// 0x353b2b15
// converted property getter: - (BOOL)privateResult;	// 0x353b2ad9
- (id)properties;	// 0x352618c9
// converted property getter: - (BOOL)resultDirty;	// 0x353b2a25
// converted property getter: - (BOOL)resultEdited;	// 0x353b2a61
- (int)runType;	// 0x351ba1f1
// converted property setter: - (void)setFieldMarkerType:(int)type;	// 0x352618e9
// converted property setter: - (void)setFieldPosition:(long)position;	// 0x352618d9
// converted property setter: - (void)setFieldType:(unsigned char)type;	// 0x352618fd
// converted property setter: - (void)setHasSeparator:(BOOL)separator;	// 0x353b2b6d
// converted property setter: - (void)setLocked:(BOOL)locked;	// 0x353b2ab9
// converted property setter: - (void)setNested:(BOOL)nested;	// 0x353b2b31
// converted property setter: - (void)setPrivateResult:(BOOL)result;	// 0x353b2af5
// converted property setter: - (void)setResultDirty:(BOOL)dirty;	// 0x353b2a41
// converted property setter: - (void)setResultEdited:(BOOL)edited;	// 0x353b2a7d
// converted property setter: - (void)setZombieEmbed:(BOOL)embed;	// 0x353b2a09
// converted property getter: - (BOOL)zombieEmbed;	// 0x353b29ed
@end

