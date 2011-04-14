/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "Foundation-Structs.h"
#import "NSCoding.h"


@interface NSPort : NSObject <NSCopying, NSCoding> {
}
@property(assign) id delegate;	// G=0x3249060d; S=0x32490631; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x3243a3ad
+ (id)port;	// 0x324907f1
+ (id)portWithMachPort:(unsigned)machPort;	// 0x324907b1
- (id)initWithCoder:(id)coder;	// 0x32490a0d
- (id)initWithMachPort:(unsigned)machPort;	// 0x32490589
- (Class)classForCoder;	// 0x32490941
- (Class)classForPortCoder;	// 0x3249077d
- (id)copyWithZone:(NSZone *)zone;	// 0x3249079d
// converted property getter: - (id)delegate;	// 0x3249060d
- (void)encodeWithCoder:(id)coder;	// 0x32490599
- (void)invalidate;	// 0x32490675
- (BOOL)isValid;	// 0x32490651
- (unsigned)machPort;	// 0x3249058d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x324905a1
- (id)replacementObjectForCoder:(id)coder;	// 0x32490595
- (unsigned)reservedSpaceLength;	// 0x32490591
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3249059d
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x324905e9
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x32490755
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32490631
@end
