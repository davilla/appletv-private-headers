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
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35188c35
+ (id)_parseBrowseListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35189785
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35188e3d
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35188ef5
+ (id)_parseDeletedIDListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35188fd5
+ (id)_parseDictionaryCollectionWithBytes:(const char *)bytes length:(unsigned)length;	// 0x351890c1
+ (id)_parseEditCommandResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35189239
+ (id)_parseItemIDArrayWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35189889
+ (unsigned)_parseItemPropertyCountWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35188745
+ (id)_parseItemsResponseWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x35189399
+ (id)_parseListingCollectionWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x35189691
+ (id)_parseListingItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x35189971
+ (id)_parseLoginResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35188925
+ (id)_parseResponseCode:(unsigned)code bytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x35188785
+ (id)_parseUpdateResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x35188aad
+ (void)enumerateDeletedItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x351885b5
+ (void)enumerateItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x351884f9
+ (id)enumerateRawItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x35188109
+ (void)parseItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x35188481
+ (unsigned)parseItemWithBytes:(const char *)bytes length:(unsigned)length valuesOut:(XXStruct_LKnRFA *)anOut valuesCapacity:(unsigned)capacity;	// 0x351881b9
+ (id)parseResponseData:(id)data;	// 0x351880f5
@end

