/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSURLKeyValuePair : NSObject {
@private
	id key;	// 4 = 0x4
	id value;	// 8 = 0x8
	unsigned hash;	// 12 = 0xc
}
@property(readonly, assign) unsigned hash;	// G=0x327d7b5d; converted property
@property(retain) id key;	// G=0x327d7b3d; S=0x327d7bf9; converted property
@property(retain) id value;	// G=0x327d7b4d; S=0x327d7bbd; converted property
+ (id)pair;	// 0x327d7d59
+ (id)pairWithKey:(id)key value:(id)value;	// 0x327d7d15
- (id)initWithKey:(id)key value:(id)value;	// 0x327d7c91
- (void)dealloc;	// 0x327d7c35
- (id)description;	// 0x327d7b6d
// converted property getter: - (unsigned)hash;	// 0x327d7b5d
- (BOOL)isEqual:(id)equal;	// 0x327d7d99
// converted property getter: - (id)key;	// 0x327d7b3d
// converted property setter: - (void)setKey:(id)key;	// 0x327d7bf9
// converted property setter: - (void)setValue:(id)value;	// 0x327d7bbd
// converted property getter: - (id)value;	// 0x327d7b4d
@end

