/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EMSheetMapper.h"
#import "OfficeImport-Structs.h"

@class EDChartSheet;

__attribute__((visibility("hidden")))
@interface EMChartsheetMapper : EMSheetMapper {
@private
	EDChartSheet *mChartSheet;	// 8 = 0x8
	CGRect mBox;	// 12 = 0xc
}
- (id)initWithChartSheet:(id)chartSheet parent:(id)parent;	// 0x34d50625
- (void)mapAt:(id)at withState:(id)state;	// 0x34d506bd
- (int)preprocessHeightWithState:(id)state;	// 0x34d52e7d
- (int)preprocessWidthWithState:(id)state;	// 0x34d52ea9
- (int)width;	// 0x34cdd225
@end

