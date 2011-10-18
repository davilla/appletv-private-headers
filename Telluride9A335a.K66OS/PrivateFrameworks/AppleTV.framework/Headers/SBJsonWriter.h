/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SBJsonWriter.h"
#import "SBJsonBase.h"


@protocol SBJsonWriter
@property(assign) BOOL humanReadable;
@property(assign) BOOL sortKeys;
// declared property getter: - (BOOL)humanReadable;
// declared property setter: - (void)setHumanReadable:(BOOL)readable;
// declared property setter: - (void)setSortKeys:(BOOL)keys;
// declared property getter: - (BOOL)sortKeys;
- (id)stringWithObject:(id)object;
@end

__attribute__((visibility("hidden")))
@interface SBJsonWriter : SBJsonBase <SBJsonWriter> {
@private
	BOOL sortKeys;	// 16 = 0x10
	BOOL humanReadable;	// 17 = 0x11
}
@property(assign) BOOL humanReadable;	// G=0x343cc000; S=0x343cc018; @synthesize
@property(assign) BOOL sortKeys;	// G=0x343cc02c; S=0x343cc044; @synthesize
+ (void)initialize;	// 0x343cc5c4
- (BOOL)appendArray:(id)array into:(id)into;	// 0x343cc630
- (BOOL)appendDictionary:(id)dictionary into:(id)into;	// 0x343cc910
- (BOOL)appendString:(id)string into:(id)into;	// 0x343ccd80
- (BOOL)appendValue:(id)value into:(id)into;	// 0x343cc294
// declared property getter: - (BOOL)humanReadable;	// 0x343cc000
- (id)indent;	// 0x343cc234
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x343cc018
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x343cc044
// declared property getter: - (BOOL)sortKeys;	// 0x343cc02c
- (id)stringWithFragment:(id)fragment;	// 0x343cc058
- (id)stringWithObject:(id)object;	// 0x343cc0e8
@end

