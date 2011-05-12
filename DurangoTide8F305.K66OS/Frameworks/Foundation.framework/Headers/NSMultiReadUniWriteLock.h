/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
@private
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x327ab1b9; S=0x327ab20d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x327ab685
- (id)init;	// 0x327ab839
- (void)dealloc;	// 0x327ab9bd
- (id)description;	// 0x327ab249
- (void)finalize;	// 0x327ab929
- (void)lock;	// 0x327ab8a9
- (void)lockForReading;	// 0x327ab881
- (BOOL)lockForReadingBeforeDate:(id)readingBeforeDate;	// 0x327ab1b1
- (void)lockForWriting;	// 0x327ab8c1
- (BOOL)lockForWritingBeforeDate:(id)writingBeforeDate;	// 0x327ab1b5
// converted property getter: - (id)name;	// 0x327ab1b9
// converted property setter: - (void)setName:(id)name;	// 0x327ab20d
- (BOOL)tryLockForReading;	// 0x327ab891
- (BOOL)tryLockForWriting;	// 0x327ab8d9
- (void)unlock;	// 0x327ab8fd
@end

