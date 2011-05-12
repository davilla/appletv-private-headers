/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSArray.h> // Unknown library


@interface NSArray (Randomization)
+ (id)randomizedArrayFromArray:(id)array;	// 0x329c9d35
@end

@interface NSArray (Serialization)
- (BOOL)writeToFile:(id)file atomically:(BOOL)atomically format:(unsigned)format;	// 0x329ca0ed
@end

@interface NSArray (Modification)
- (id)arrayByRemovingObject:(id)object;	// 0x329c9e75
@end

@interface NSArray (Filter)
- (id)objectsPassingTest:(id)test;	// 0x329c9ee5
@end

@interface NSArray (Map)
- (id)map:(id)map;	// 0x329c9f0d
@end

@interface NSArray (FirstRest)
- (id)first;	// 0x329ca071
- (id)firstObject;	// 0x329ca085
- (id)head;	// 0x329ca011
- (id)rest;	// 0x329ca025
- (id)tail;	// 0x329c9ffd
@end

@interface NSArray (Unique)
- (id)uniqueObjectsForKey:(id)key;	// 0x32937e01
@end

