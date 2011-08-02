/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WMStyle.h"


__attribute__((visibility("hidden")))
@interface WMTableCellStyle : WMStyle {
@private
	double mLeftPadding;	// 12 = 0xc
	double mRightPadding;	// 20 = 0x14
}
+ (id)dominantColorOf:(id)of;	// 0x32c782f5
+ (float)resolveColorValueWithPercentage:(float)percentage foregroundComponent:(float)component backgroundComponent:(float)component3;	// 0x32c7898d
+ (id)resolveStyleColorWithPercentage:(float)percentage foregroundColor:(id)color backgroundColor:(id)color3;	// 0x32c7883d
+ (id)resolveStyleColorWithPercentage:(float)percentage shading:(id)shading;	// 0x32c787e9
- (id)initWithTableCellProperties:(id)tableCellProperties;	// 0x32cc2529
- (void)addTableCellProperties:(id)properties;	// 0x32bb42c5
- (double)leftPadding;	// 0x32bb4eb5
- (double)rightPadding;	// 0x32bb4ec5
@end

