/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSDictionary, NSString;

__attribute__((objc_exception))
@interface NSException : NSObject <NSCopying, NSCoding> {
	NSString *name;	// 4 = 0x4
	NSString *reason;	// 8 = 0x8
	NSDictionary *userInfo;	// 12 = 0xc
@private
	id reserved;	// 16 = 0x10
}
@property(readonly, retain) NSString *name;	// G=0x36a34a9d; converted property
@property(readonly, retain) NSString *reason;	// G=0x36a34aad; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x36a34abd; converted property
+ (id)exceptionWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x36a34d2d
+ (void)raise:(id)raise format:(id)format;	// 0x36a34e75
+ (void)raise:(id)raise format:(id)format arguments:(void *)arguments;	// 0x36a34e11
- (id)init;	// 0x36a34cb1
- (id)initWithCoder:(id)coder;	// 0x36a34edd
- (id)initWithName:(id)name reason:(id)reason userInfo:(id)info;	// 0x36a34cc9
- (BOOL)_installStackTraceKeyIfNeeded;	// 0x36a34b1d
- (id)callStackReturnAddresses;	// 0x36a34acd
- (id)callStackSymbols;	// 0x36a34af5
- (id)copyWithZone:(NSZone *)zone;	// 0x36a34e01
- (void)dealloc;	// 0x36a34d75
- (id)description;	// 0x36a34c85
- (void)encodeWithCoder:(id)coder;	// 0x36a34ee1
- (unsigned)hash;	// 0x36a34c65
- (BOOL)isEqual:(id)equal;	// 0x36a34c05
// converted property getter: - (id)name;	// 0x36a34a9d
- (void)raise;	// 0x36a34ca9
// converted property getter: - (id)reason;	// 0x36a34aad
// converted property getter: - (id)userInfo;	// 0x36a34abd
@end

