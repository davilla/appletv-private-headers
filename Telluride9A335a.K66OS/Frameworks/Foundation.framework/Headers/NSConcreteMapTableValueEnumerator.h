/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSEnumerator.h> // Unknown library

@class NSConcreteMapTable;

__attribute__((visibility("hidden")))
@interface NSConcreteMapTableValueEnumerator : NSEnumerator {
@private
	NSConcreteMapTable *mapTable;	// 4 = 0x4
	unsigned counter;	// 8 = 0x8
}
+ (id)enumeratorWithMapTable:(id)mapTable;	// 0x3208e245
- (void)dealloc;	// 0x3208e359
- (id)nextObject;	// 0x3208e2c1
@end

