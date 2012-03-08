/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDString;

__attribute__((visibility("hidden")))
@interface CHDDataValue : NSObject {
@private
	CHDDataPoint mDataPoint;	// 4 = 0x4
}
@property(assign) unsigned contentFormatId;	// G=0x32a82465; S=0x3298ef61; converted property
@property(assign) CHDDataPoint *dataPoint;	// G=0x32a01279; S=0x32a824b5; converted property
@property(assign) int index;	// G=0x32a82455; S=0x32a01219; converted property
@property(assign) EDValue *value;	// G=0x32996d11; S=0x32a01229; converted property
+ (id)dataValue;	// 0x32a01189
+ (id)dataValueWithIndex:(int)index value:(EDValue *)value;	// 0x3298ee9d
- (id)init;	// 0x32a011d1
- (id)initWithIndex:(int)index value:(EDValue *)value;	// 0x3298ef0d
- (id).cxx_construct;	// 0x3298eeed
- (void).cxx_destruct;	// 0x3297c249
// converted property getter: - (unsigned)contentFormatId;	// 0x32a82465
- (id)contentFormatWithResources:(id)resources;	// 0x32a82479
// converted property getter: - (CHDDataPoint *)dataPoint;	// 0x32a01279
// converted property getter: - (int)index;	// 0x32a82455
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x3298ef61
- (void)setContentFormatWithResources:(id)resources resources:(id)resources2;	// 0x32a23875
// converted property setter: - (void)setDataPoint:(CHDDataPoint *)point;	// 0x32a824b5
// converted property setter: - (void)setIndex:(int)index;	// 0x32a01219
// converted property setter: - (void)setValue:(EDValue *)value;	// 0x32a01229
// converted property getter: - (EDValue *)value;	// 0x32996d11
@end
