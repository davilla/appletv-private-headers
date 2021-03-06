/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface Logger : NSObject {
@private
	NSMutableSet *traceAreas_;	// 4 = 0x4
	NSMutableArray *traceAreasStack_;	// 8 = 0x8
	BOOL logAll_;	// 12 = 0xc
	BOOL logEnabled_;	// 13 = 0xd
}
@property(assign, nonatomic) BOOL logAll;	// G=0x360d1af4; S=0x360d1b0c; @synthesize=logAll_
@property(assign, nonatomic) BOOL logEnabled;	// G=0x360d1b20; S=0x360d1b38; @synthesize=logEnabled_
@property(retain, nonatomic) NSMutableSet *traceAreas;	// G=0x360d1ae0; S=0x360d1c8c; @synthesize=traceAreas_
@property(retain, nonatomic) NSMutableArray *traceAreasStack;	// G=0x360d1acc; S=0x360d1cc0; @synthesize=traceAreasStack_
+ (id)sharedInstance;	// 0x360d1c30
- (id)init;	// 0x360d1b4c
- (void)addTraceArea:(id)area;	// 0x360d203c
- (void)addTraceAreaWithSet:(id)set;	// 0x360d2000
- (void)dealloc;	// 0x360d21d0
- (void)log:(id)log function:(const char *)function line:(int)line message:(id)message;	// 0x360d1cf4
- (void)log:(id)log message:(id)message;	// 0x360d1e50
// declared property getter: - (BOOL)logAll;	// 0x360d1af4
// declared property getter: - (BOOL)logEnabled;	// 0x360d1b20
- (void)popTraceAreas;	// 0x360d2078
- (void)pushTraceAreas;	// 0x360d2100
- (void)removeAllTraceAreas;	// 0x360d1f98
- (void)removeTraceArea:(id)area;	// 0x360d1fc4
// declared property setter: - (void)setLogAll:(BOOL)all;	// 0x360d1b0c
// declared property setter: - (void)setLogEnabled:(BOOL)enabled;	// 0x360d1b38
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x360d1c8c
// declared property setter: - (void)setTraceAreasStack:(id)stack;	// 0x360d1cc0
// declared property getter: - (id)traceAreas;	// 0x360d1ae0
// declared property getter: - (id)traceAreasStack;	// 0x360d1acc
@end

