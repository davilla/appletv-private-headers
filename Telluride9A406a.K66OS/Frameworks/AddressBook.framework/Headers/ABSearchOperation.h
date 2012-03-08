/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import <NSOperation.h> // Unknown library

@class NSThread, NSPredicate, NSArray;
@protocol ABSearchOperationDelegate;

@interface ABSearchOperation : NSOperation {
@private
	void *_addressBook;	// 12 = 0xc
	NSPredicate *_predicate;	// 16 = 0x10
	NSArray *_prefetchProperties;	// 20 = 0x14
	unsigned _sortOrdering;	// 24 = 0x18
	void *_internalSearchAddressBook;	// 28 = 0x1c
	id<ABSearchOperationDelegate> _delegate;	// 32 = 0x20
	id _progressBlock;	// 36 = 0x24
	NSThread *_progressBlockThread;	// 40 = 0x28
	void *_context;	// 44 = 0x2c
}
@property(assign, nonatomic) void *addressBook;	// G=0x31915a8d; S=0x319162c1; @synthesize=_addressBook
@property(assign, nonatomic) void *context;	// G=0x31915a3d; S=0x31915a4d; @synthesize=_context
@property(assign, nonatomic) id<ABSearchOperationDelegate> delegate;	// G=0x31915a5d; S=0x31915a9d; @synthesize=_delegate
@property(assign, nonatomic) void *internalSearchAddressBook;	// G=0x31916265; S=0x31916231; @synthesize=_internalSearchAddressBook
@property(retain, nonatomic) NSPredicate *predicate;	// G=0x31915a7d; S=0x31915f55; @synthesize=_predicate
@property(copy, nonatomic) NSArray *prefetchProperties;	// G=0x31915a6d; S=0x31915f7d; @synthesize=_prefetchProperties
@property(copy, nonatomic) id progressBlock;	// G=0x31915a0d; S=0x31915acd; @synthesize=_progressBlock
@property(assign, nonatomic) unsigned sortOrdering;	// G=0x31915a1d; S=0x31915a2d; @synthesize=_sortOrdering
+ (id)personPredicateWithAnyValueForProperty:(int)property addressBook:(void *)book;	// 0x31915e59
+ (id)personPredicateWithGroup:(void *)group addressBook:(void *)book;	// 0x31915e75
+ (id)personPredicateWithName:(id)name addressBook:(void *)book;	// 0x31915c99
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x31915cb9
+ (id)personPredicateWithNameLike:(id)nameLike inAccount:(id)account addressBook:(void *)book;	// 0x31915db1
+ (id)personPredicateWithNameLike:(id)nameLike inGroup:(void *)group addressBook:(void *)book;	// 0x31915cf9
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source addressBook:(void *)book;	// 0x31915d35
+ (id)personPredicateWithNameLike:(id)nameLike inSource:(void *)source includeSourceInResults:(BOOL)results addressBook:(void *)book;	// 0x31915d71
+ (id)personPredicateWithNameOnly:(id)nameOnly inAccount:(id)account addressBook:(void *)book;	// 0x31915e19
+ (id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void *)book;	// 0x31915df9
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property addressBook:(void *)book;	// 0x31915e39
- (void)_mainThread_tellDelegateSearchFoundMatch:(void *)match;	// 0x319160e9
// declared property getter: - (void *)addressBook;	// 0x31915a8d
- (void)cancel;	// 0x319161dd
// declared property getter: - (void *)context;	// 0x31915a3d
- (void)dealloc;	// 0x31915ea1
// declared property getter: - (id)delegate;	// 0x31915a5d
// declared property getter: - (void *)internalSearchAddressBook;	// 0x31916265
- (BOOL)isConcurrent;	// 0x319159e5
- (void)main;	// 0x31915b79
// declared property getter: - (id)predicate;	// 0x31915a7d
- (BOOL)predicateShouldContinue:(id)predicate;	// 0x31915c75
- (BOOL)predicateShouldContinue:(id)predicate afterFindingRecord:(void *)record;	// 0x31915fa1
// declared property getter: - (id)prefetchProperties;	// 0x31915a6d
// declared property getter: - (id)progressBlock;	// 0x31915a0d
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x319162c1
// declared property setter: - (void)setContext:(void *)context;	// 0x31915a4d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31915a9d
// declared property setter: - (void)setInternalSearchAddressBook:(void *)book;	// 0x31916231
// declared property setter: - (void)setPredicate:(id)predicate;	// 0x31915f55
// declared property setter: - (void)setPrefetchProperties:(id)properties;	// 0x31915f7d
// declared property setter: - (void)setProgressBlock:(id)block;	// 0x31915acd
// declared property setter: - (void)setSortOrdering:(unsigned)ordering;	// 0x31915a2d
// declared property getter: - (unsigned)sortOrdering;	// 0x31915a1d
@end
