/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface EDReference : NSObject <NSCopying> {
@private
	EDAreaReference mAreaReference;	// 4 = 0x4
}
@property(assign) int firstColumn;	// G=0x318cc16d; S=0x31adffa9; converted property
@property(assign) int firstRow;	// G=0x318e6669; S=0x31adff99; converted property
@property(assign) int lastColumn;	// G=0x318e6689; S=0x31adffd1; converted property
@property(assign) int lastRow;	// G=0x318e6679; S=0x31adffbd; converted property
+ (id)reference;	// 0x31ad3c19
+ (id)referenceWithAreaReference:(EDAreaReference *)areaReference;	// 0x31a4c42d
+ (id)referenceWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x318cbf25
- (id)init;	// 0x318e618d
- (id)initWithAreaReference:(EDAreaReference *)areaReference;	// 0x31a4c471
- (id)initWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x318cbf79
- (EDAreaReference)areaReference;	// 0x31ad3b39
- (bool)containsRow:(int)row column:(int)column;	// 0x318e7da5
- (id)copyWithZone:(NSZone *)zone;	// 0x31ad3c59
- (unsigned)countOfCellsBeingReferenced;	// 0x31a26931
// converted property getter: - (int)firstColumn;	// 0x318cc16d
// converted property getter: - (int)firstRow;	// 0x318e6669
- (bool)fullyAdjacentToReference:(id)reference;	// 0x318dc761
- (unsigned)hash;	// 0x31ad3b15
- (bool)isCellReference;	// 0x31ad3b55
- (bool)isColumnReference;	// 0x31ad3ba1
- (BOOL)isEqual:(id)equal;	// 0x31ad3bc5
- (BOOL)isEqualToReference:(id)reference;	// 0x318dc819
- (bool)isRowReference;	// 0x31ad3b7d
- (bool)isValidAreaReference;	// 0x318db249
- (bool)isValidCellReference;	// 0x31a26985
// converted property getter: - (int)lastColumn;	// 0x318e6689
// converted property getter: - (int)lastRow;	// 0x318e6679
// converted property setter: - (void)setFirstColumn:(int)column;	// 0x31adffa9
// converted property setter: - (void)setFirstRow:(int)row;	// 0x31adff99
// converted property setter: - (void)setLastColumn:(int)column;	// 0x31adffd1
// converted property setter: - (void)setLastRow:(int)row;	// 0x31adffbd
- (void)unionWithFirstRow:(int)firstRow lastRow:(int)row firstColumn:(int)column lastColumn:(int)column4;	// 0x318e61fd
- (void)unionWithReference:(id)reference;	// 0x31a75d0d
- (void)unionWithRow:(int)row column:(int)column;	// 0x318e61dd
@end
