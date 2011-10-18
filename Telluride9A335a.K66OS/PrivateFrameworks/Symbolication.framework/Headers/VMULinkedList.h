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
@property(readonly, retain) VMULinkedListEntry *head;	// G=0x31f82109; converted property
@property(readonly, retain) VMULinkedListEntry *tail;	// G=0x31f82119; converted property
+ (id)linkedList;	// 0x31f82235
- (id)init;	// 0x31f82129
// converted property getter: - (id)head;	// 0x31f82109
- (id)popTail;	// 0x31f822fd
- (void)pushHead:(id)head;	// 0x31f823b9
- (void)remove:(id)remove;	// 0x31f8226d
- (void)removeAllObjects;	// 0x31f82449
// converted property getter: - (id)tail;	// 0x31f82119
@end

