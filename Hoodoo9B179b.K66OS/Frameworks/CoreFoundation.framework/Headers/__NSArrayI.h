/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSArray.h"


__attribute__((visibility("hidden")))
@interface __NSArrayI : NSArray {
@private
	unsigned _used;	// 4 = 0x4
}
+ (id)__new:(const id *)aNew :(unsigned)arg2;	// 0x30ce8b45
+ (id)allocWithZone:(NSZone *)zone;	// 0x30d897f5
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x30d897f1
- (id)copyWithZone:(NSZone *)zone;	// 0x30ceaf3d
- (unsigned)count;	// 0x30ce8b9d
- (unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA *)state objects:(id *)objects count:(unsigned)count;	// 0x30ce8bad
- (void)dealloc;	// 0x30cec695
- (void)finalize;	// 0x30d89741
- (void)getObjects:(id *)objects range:(NSRange)range;	// 0x30cef93d
- (id)objectAtIndex:(unsigned)index;	// 0x30cee199
@end

