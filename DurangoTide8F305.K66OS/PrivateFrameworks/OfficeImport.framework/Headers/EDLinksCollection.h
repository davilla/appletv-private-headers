/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDLinksCollection : NSObject {
@private
	NSMutableArray *mLinks;	// 4 = 0x4
	NSMutableArray *mReferences;	// 8 = 0x8
}
- (id)init;	// 0x344b41b5
- (unsigned)addLink:(id)link;	// 0x344be321
- (void)addOrEquivalentExternalAddInName:(id)name linkReferenceIndex:(unsigned *)index nameIndex:(unsigned *)index3;	// 0x345a93e5
- (unsigned)addOrEquivalentInternalLinkReferenceWithFirstSheetIndex:(unsigned)firstSheetIndex lastSheetIndex:(unsigned)index;	// 0x345a9529
- (unsigned)addOrEquivalentLinkReferenceOfType:(int)type firstSheetIndex:(unsigned)index lastSheetIndex:(unsigned)index3;	// 0x345a94a1
- (unsigned)addReference:(id)reference;	// 0x344be201
- (bool)convertLinkReferenceIndex:(unsigned)index firstSheetIndex:(unsigned *)index2 lastSheetIndex:(unsigned *)index3;	// 0x344ee701
- (void)dealloc;	// 0x343c9dfd
- (unsigned)indexOfFirstLinkWithType:(int)type;	// 0x345a95c9
- (unsigned)indexOfReference:(id)reference;	// 0x345a954d
- (id)linkAtIndex:(unsigned)index;	// 0x344ee5d9
- (unsigned)linkIndexCreateIfNeededWithType:(int)type;	// 0x345a9579
- (unsigned)linksCount;	// 0x344ee615
- (id)referenceAtIndex:(unsigned)index;	// 0x344ee56d
- (unsigned)referencesCount;	// 0x344ee5a9
@end

