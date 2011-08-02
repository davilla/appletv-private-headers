/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HomeSharing-Structs.h"
#import <NSObject.h> // Unknown library


@interface HSResponseDataParser : NSObject {
}
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3337add9
+ (id)_parseBrowseListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3337b391
+ (unsigned)_parseItemPropertyCountWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3337aa39
+ (id)_parseItemsResponseWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3337afed
+ (id)_parseListingCollectionWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3337b2c1
+ (id)_parseListingItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3337b471
+ (id)_parseLoginResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3337aa51
+ (id)_parseResponseCode:(unsigned)code bytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3337a179
+ (id)_parseUpdateResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x3337ac15
+ (void)enumerateItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x3337a22d
+ (id)enumerateRawItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x3337a78d
+ (void)parseItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x3337a2c1
+ (unsigned)parseItemWithBytes:(const char *)bytes length:(unsigned)length valuesOut:(XXStruct_LKnRFA *)anOut valuesCapacity:(unsigned)capacity;	// 0x3337a8c5
+ (id)parseResponseData:(id)data;	// 0x3337a2a9
@end
