/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVSupportedReportSetItem : CoreDAVItem {
	NSMutableSet *_supportedReports;	// 24 = 0x18
}
@property(retain) NSMutableSet *supportedReports;	// G=0x33192f79; S=0x33192f91; @synthesize=_supportedReports
- (id)init;	// 0x33192ded
- (id)initWithNameSpace:(id)nameSpace andName:(id)name;	// 0x33192f15
- (void)addSupportedReport:(id)report;	// 0x33192cd5
- (id)copyParseRules;	// 0x33192cfd
- (void)dealloc;	// 0x33192ed9
- (id)description;	// 0x33192e19
// declared property setter: - (void)setSupportedReports:(id)reports;	// 0x33192f91
// declared property getter: - (id)supportedReports;	// 0x33192f79
@end

