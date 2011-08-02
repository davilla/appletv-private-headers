/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSSet.h> // Unknown library


@interface NSSet (NSKeyValueCoding)
- (id)_avgForKeyPath:(id)keyPath;	// 0x3105e5d5
- (id)_countForKeyPath:(id)keyPath;	// 0x3105e5a1
- (id)_distinctUnionOfArraysForKeyPath:(id)keyPath;	// 0x3105f2dd
- (id)_distinctUnionOfObjectsForKeyPath:(id)keyPath;	// 0x3105f1f9
- (id)_distinctUnionOfSetsForKeyPath:(id)keyPath;	// 0x3105f115
- (id)_maxForKeyPath:(id)keyPath;	// 0x3105f489
- (id)_minForKeyPath:(id)keyPath;	// 0x3105f3c1
- (id)_sumForKeyPath:(id)keyPath;	// 0x3105f6c9
- (void)setValue:(id)value forKey:(id)key;	// 0x3105fcad
- (id)valueForKey:(id)key;	// 0x3105fe11
- (id)valueForKeyPath:(id)keyPath;	// 0x3105f879
@end

@interface NSSet (NSKeyValueObserverRegistration)
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x31066e1d
- (void)removeObserver:(id)observer forKeyPath:(id)keyPath;	// 0x31066d91
@end

@interface NSSet (NSSet)
- (id)initWithCoder:(id)coder;	// 0x31023fbd
- (Class)classForCoder;	// 0x3107db25
- (void)encodeWithCoder:(id)coder;	// 0x3102390d
@end

@interface NSSet (NSKeyValueSorting)
- (id)sortedArrayUsingDescriptors:(id)descriptors;	// 0x31080c65
@end

@interface NSSet (NSPredicateSupport)
- (id)filteredSetUsingPredicate:(id)predicate;	// 0x310b41a9
@end

