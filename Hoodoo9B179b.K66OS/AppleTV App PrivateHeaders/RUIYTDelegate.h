/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSXMLParser, NSMutableArray;

__attribute__((visibility("hidden")))
@interface RUIYTDelegate : XXUnknownSuperclass {
	NSMutableArray *_entries;	// 12 = 0xc
	int _totalResults;	// 16 = 0x10
	NSXMLParser *_parser;	// 20 = 0x14
}
@property(readonly, retain) NSMutableArray *entries;	// G=0x852b5; converted property
@property(readonly, assign) int totalResults;	// G=0x852fd; converted property
- (id)init;	// 0x8513d
- (void).cxx_destruct;	// 0x85405
- (void)addEntry:(id)entry;	// 0x85331
- (void)endTotalResults;	// 0x851d1
// converted property getter: - (id)entries;	// 0x852b5
- (void)setWeakReferenceToParser:(id)parser;	// 0x851b5
// converted property getter: - (int)totalResults;	// 0x852fd
@end

