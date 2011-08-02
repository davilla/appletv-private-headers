/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <NSObject.h> // Unknown library
#import "EventKit-Structs.h"

@class EKEventStore, NSPredicate;

__attribute__((visibility("hidden")))
@interface EKPredicateSearch : NSObject {
@private
	NSPredicate *_predicate;	// 4 = 0x4
	EKEventStore *_store;	// 8 = 0x8
	BOOL _finished;	// 12 = 0xc
	id _callback;	// 16 = 0x10
	unsigned _previous;	// 20 = 0x14
}
+ (id)searchWithPredicate:(id)predicate store:(id)store callback:(id)callback;	// 0x3346f485
- (id)initWithPredicate:(id)predicate store:(id)store callback:(id)callback;	// 0x3346f4c9
- (BOOL)_receivedData:(XXStruct_lR_t3A [50])data count:(int)count;	// 0x3347049d
- (void)dealloc;	// 0x33473409
- (void)run;	// 0x3346f679
- (void)terminate;	// 0x33470b11
@end
