/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CHDChartType.h"


__attribute__((visibility("hidden")))
@interface CHDChartTypeWithGrouping : CHDChartType {
@private
	int mGrouping;	// 24 = 0x18
}
@property(assign) int grouping;	// G=0x344f2d35; S=0x34547895; converted property
- (id)initWithChart:(id)chart;	// 0x344eadd1
- (id)chdGroupingString;	// 0x345c2d99
// converted property getter: - (int)grouping;	// 0x344f2d35
- (bool)isGroupingStacked;	// 0x344ed4a5
// converted property setter: - (void)setGrouping:(int)grouping;	// 0x34547895
@end

