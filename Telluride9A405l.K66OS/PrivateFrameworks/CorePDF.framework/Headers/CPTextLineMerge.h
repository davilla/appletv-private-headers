/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface CPTextLineMerge : NSObject {
	NSMutableArray *avail;	// 4 = 0x4
}
- (void)addInterval:(id)interval to:(id)to;	// 0x31f63ac5
- (float)averageHeight:(id)height;	// 0x31f64999
- (unsigned)countOverlapsOfLineAtIndex:(unsigned)index in:(id)anIn;	// 0x31f6454d
- (void)detachDropCaps:(id)caps to:(id)to;	// 0x31f63e6d
- (void)dropCaps:(id)caps to:(id)to;	// 0x31f64a51
- (void)eliminate:(id)eliminate;	// 0x31f63d4d
- (id)findLineFor:(id)aFor in:(id)anIn;	// 0x31f64889
- (BOOL)fits:(id)fits into:(id)into;	// 0x31f6391d
- (BOOL)hasOverlappingLines;	// 0x31f64315
- (void)makeOverlappingLinesTo:(id)to;	// 0x31f64411
- (void)mergeByColumn:(id)column;	// 0x31f64651
- (void)mergeColumn:(id)column;	// 0x31f641ed
- (void)mergeLinesIn:(id)anIn;	// 0x31f63ffd
- (void)mergeLinesInInterval:(id)interval from:(id)from;	// 0x31f63c61
- (void)removeOverlapping:(id)overlapping;	// 0x31f63df9
@end

