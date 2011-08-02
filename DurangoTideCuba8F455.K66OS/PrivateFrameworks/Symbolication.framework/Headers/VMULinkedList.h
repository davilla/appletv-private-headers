/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <NSObject.h> // Unknown library

@class VMULinkedListEntry;

@interface VMULinkedList : NSObject {
	VMULinkedListEntry *_head;	// 4 = 0x4
	VMULinkedListEntry *_tail;	// 8 = 0x8
}
@property(readonly, retain) VMULinkedListEntry *head;	// G=0x3413fe89; converted property
@property(readonly, retain) VMULinkedListEntry *tail;	// G=0x3413fe99; converted property
+ (id)linkedList;	// 0x341401f1
- (id)init;	// 0x34140101
// converted property getter: - (id)head;	// 0x3413fe89
- (id)popTail;	// 0x3413ff2d
- (void)pushHead:(id)head;	// 0x3413ffe1
- (void)remove:(id)remove;	// 0x3413fea9
- (void)removeAllObjects;	// 0x34140065
// converted property getter: - (id)tail;	// 0x3413fe99
@end

