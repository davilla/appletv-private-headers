/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class EDColumnInfo;

__attribute__((visibility("hidden")))
@interface EMColumnInfoMapper : CMMapper {
@private
	EDColumnInfo *edColumnInfo;	// 8 = 0x8
	double columnWidth;	// 12 = 0xc
	int columnSpan;	// 20 = 0x14
}
@property(readonly, assign) double columnWidth;	// G=0x32b0b139; converted property
- (id)initWithDefaultWidth:(double)defaultWidth span:(int)span parent:(id)parent;	// 0x32c06885
- (id)initWithEDColumnInfo:(id)edcolumnInfo maxSpan:(int)span parent:(id)parent;	// 0x32b0a6d1
// converted property getter: - (double)columnWidth;	// 0x32b0b139
- (void)mapAt:(id)at withState:(id)state;	// 0x32b0adf1
@end

