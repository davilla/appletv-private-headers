/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "SBJsonBase.h"
#import "SBJsonWriter.h"
#import "SBJsonParser.h"

@class SBJsonParser, SBJsonWriter;

__attribute__((visibility("hidden")))
@interface SBJSON : SBJsonBase <SBJsonParser, SBJsonWriter> {
@private
	SBJsonParser *jsonParser;	// 16 = 0x10
	SBJsonWriter *jsonWriter;	// 20 = 0x14
}
@property(assign) BOOL humanReadable;	// G=0x343c9f6c; S=0x343c9f40; 
@property(assign) unsigned maxDepth;	// G=0x343c9ff0; S=0x343c9f98; converted property
@property(assign) BOOL sortKeys;	// G=0x343c9f14; S=0x343c9ee8; 
- (id)init;	// 0x343c9e28
- (void)dealloc;	// 0x343ca3c4
- (id)fragmentWithString:(id)string error:(id *)error;	// 0x343ca048
// declared property getter: - (BOOL)humanReadable;	// 0x343c9f6c
// converted property getter: - (unsigned)maxDepth;	// 0x343c9ff0
- (id)objectWithString:(id)string;	// 0x343ca158
- (id)objectWithString:(id)string allowScalar:(BOOL)scalar error:(id *)error;	// 0x343ca074
- (id)objectWithString:(id)string error:(id *)error;	// 0x343ca01c
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x343c9f40
// converted property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x343c9f98
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x343c9ee8
// declared property getter: - (BOOL)sortKeys;	// 0x343c9f14
- (id)stringWithFragment:(id)fragment error:(id *)error;	// 0x343ca21c
- (id)stringWithObject:(id)object;	// 0x343ca32c
- (id)stringWithObject:(id)object allowScalar:(BOOL)scalar error:(id *)error;	// 0x343ca248
- (id)stringWithObject:(id)object error:(id *)error;	// 0x343ca1f0
@end

