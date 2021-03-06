/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class EDKeyedCollection, NSString;

__attribute__((visibility("hidden")))
@interface EDTableStyle : NSObject <NSCopying> {
@private
	NSString *mName;	// 4 = 0x4
	EDKeyedCollection *mTableStyleElements;	// 8 = 0x8
}
@property(retain) id name;	// G=0x3292c8c5; S=0x32912a45; converted property
+ (id)tableStyle;	// 0x32912999
- (id)init;	// 0x329129e1
- (id)copyWithZone:(NSZone *)zone;	// 0x32943805
- (void)dealloc;	// 0x3291bdfd
// converted property getter: - (id)name;	// 0x3292c8c5
// converted property setter: - (void)setName:(id)name;	// 0x32912a45
- (id)tableStyleElements;	// 0x32912a8d
@end

