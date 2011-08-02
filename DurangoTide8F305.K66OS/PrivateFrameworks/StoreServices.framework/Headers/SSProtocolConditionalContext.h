/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library
#import "StoreServices-Structs.h"
#import "NSCopying.h"

@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying> {
@private
	id _itemLookupBlock;	// 4 = 0x4
	NSString *_platformName;	// 8 = 0x8
	NSString *_systemVersion;	// 12 = 0xc
}
@property(copy, nonatomic) id itemLookupBlock;	// G=0x324d29c5; S=0x324d3341; @synthesize=_itemLookupBlock
@property(copy, nonatomic) NSString *platformName;	// G=0x324d29b5; S=0x324d336d; @synthesize=_platformName
@property(copy, nonatomic) NSString *systemVersion;	// G=0x324d29a5; S=0x324d3399; @synthesize=_systemVersion
- (id)copyWithZone:(NSZone *)zone;	// 0x324d29d5
- (void)dealloc;	// 0x324d2d55
// declared property getter: - (id)itemLookupBlock;	// 0x324d29c5
// declared property getter: - (id)platformName;	// 0x324d29b5
// declared property setter: - (void)setItemLookupBlock:(id)block;	// 0x324d3341
// declared property setter: - (void)setPlatformName:(id)name;	// 0x324d336d
// declared property setter: - (void)setSystemVersion:(id)version;	// 0x324d3399
// declared property getter: - (id)systemVersion;	// 0x324d29a5
@end
