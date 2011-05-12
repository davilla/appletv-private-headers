/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSSet.h"


@interface NSMutableSet : NSSet {
}
+ (id)setWithCapacity:(unsigned)capacity;	// 0x32e60879
- (id)initWithCapacity:(unsigned)capacity;	// 0x32eb2d39
- (id)initWithObjects:(id *)objects count:(unsigned)count;	// 0x32eb2e25
- (void)_setObject:(id)object;	// 0x32eb265d
- (void)addObject:(id)object;	// 0x32eb2d79
- (void)addObjectsFromArray:(id)array;	// 0x32e431a5
- (void)intersectSet:(id)set;	// 0x32e50705
- (void)minusSet:(id)set;	// 0x32e232cd
- (void)removeAllObjects;	// 0x32eb3fdd
- (void)removeObject:(id)object;	// 0x32eb2d59
- (void)removeObjectsInArray:(id)array;	// 0x32eb302d
- (void)replaceObject:(id)object;	// 0x32eb269d
- (void)setSet:(id)set;	// 0x32eb2f51
- (void)unionSet:(id)set;	// 0x32e16741
@end

