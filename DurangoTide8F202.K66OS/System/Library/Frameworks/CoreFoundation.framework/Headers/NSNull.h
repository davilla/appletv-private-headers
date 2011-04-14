/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "NSCopying.h"
#import "CoreFoundation-Structs.h"
#import "NSCoding.h"


@interface NSNull : NSObject <NSCopying, NSCoding> {
}
+ (id)allocWithZone:(NSZone *)zone;	// 0x31d1b7b5
+ (id)null;	// 0x31c823b5
- (id)initWithCoder:(id)coder;	// 0x31d1b7dd
- (unsigned long)_cfTypeID;	// 0x31d1b7e5
- (id)copyWithZone:(NSZone *)zone;	// 0x31cc2a59
- (void)dealloc;	// 0x31d1b7cd
- (id)description;	// 0x31d1b7d1
- (void)encodeWithCoder:(id)coder;	// 0x31d1b7e1
- (oneway void)release;	// 0x31cc5e5d
- (id)retain;	// 0x31cbe1f5
- (unsigned)retainCount;	// 0x31d1b7c5
@end
