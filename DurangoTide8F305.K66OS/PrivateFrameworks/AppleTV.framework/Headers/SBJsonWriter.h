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
@property(assign) BOOL humanReadable;	// G=0x307e2714; S=0x307e2728; @synthesize
@property(assign) BOOL sortKeys;	// G=0x307e273c; S=0x307e2750; @synthesize
+ (void)initialize;	// 0x307e2c90
- (BOOL)appendArray:(id)array into:(id)into;	// 0x307e3170
- (BOOL)appendDictionary:(id)dictionary into:(id)into;	// 0x307e2cf8
- (BOOL)appendString:(id)string into:(id)into;	// 0x307e343c
- (BOOL)appendValue:(id)value into:(id)into;	// 0x307e2764
// declared property getter: - (BOOL)humanReadable;	// 0x307e2714
- (id)indent;	// 0x307e2a60
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x307e2728
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x307e2750
// declared property getter: - (BOOL)sortKeys;	// 0x307e273c
- (id)stringWithFragment:(id)fragment;	// 0x307e2c04
- (id)stringWithObject:(id)object;	// 0x307e2ac0
@end

