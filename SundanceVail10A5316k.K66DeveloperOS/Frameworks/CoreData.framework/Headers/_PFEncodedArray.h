/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSArray.h> // Unknown library

@class NSData;

__attribute__((visibility("hidden")))
@interface _PFEncodedArray : NSArray {
@private
	NSData *_sourceData;	// 4 = 0x4
	int _cd_rc;	// 8 = 0x8
	unsigned _count;	// 12 = 0xc
}
@property(readonly, assign) unsigned count;	// G=0x32d45aa9; converted property
- (id)init;	// 0x32d457fd
- (BOOL)_isDeallocating;	// 0x32d459c5
- (void)_replaceObject:(id)object atIndex:(unsigned)index;	// 0x32d45ac1
- (BOOL)_tryRetain;	// 0x32d45975
- (const id *)_values;	// 0x32d45af9
- (Class)classForArchiver;	// 0x32d45a45
- (Class)classForCoder;	// 0x32d45a29
- (id)copy;	// 0x32d45a19
// converted property getter: - (unsigned)count;	// 0x32d45aa9
- (void)dealloc;	// 0x32d45851
- (id)description;	// 0x32d459f1
- (id)mutableCopy;	// 0x32d45a61
- (id)objectAtIndex:(unsigned)index;	// 0x32d45ab9
- (oneway void)release;	// 0x32d458e9
- (id)retain;	// 0x32d458b1
- (unsigned)retainCount;	// 0x32d45961
@end
