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
+ (id)_parseAuthorizedAccountTokenWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310aae9d
+ (id)_parseBrowseListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310ab9ed
+ (id)_parseBulkCloudArtworkInfoResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310ab0a5
+ (id)_parseCloudArtworkInfoResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310ab15d
+ (id)_parseDeletedIDListingWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310ab23d
+ (id)_parseDictionaryCollectionWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310ab329
+ (id)_parseEditCommandResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310ab4a1
+ (id)_parseItemIDArrayWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310abaf1
+ (unsigned)_parseItemPropertyCountWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310aa9ad
+ (id)_parseItemsResponseWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x310ab601
+ (id)_parseListingCollectionWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x310ab8f9
+ (id)_parseListingItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x310abbd9
+ (id)_parseLoginResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310aab8d
+ (id)_parseResponseCode:(unsigned)code bytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x310aa9ed
+ (id)_parseUpdateResponseWithBytes:(const char *)bytes length:(unsigned)length;	// 0x310aad15
+ (void)enumerateDeletedItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x310aa81d
+ (void)enumerateItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x310aa761
+ (id)enumerateRawItemsInResponseData:(id)responseData usingHandler:(id)handler;	// 0x310aa371
+ (void)parseItemWithBytes:(const char *)bytes length:(unsigned)length usingHandler:(id)handler;	// 0x310aa6e9
+ (unsigned)parseItemWithBytes:(const char *)bytes length:(unsigned)length valuesOut:(XXStruct_LKnRFA *)anOut valuesCapacity:(unsigned)capacity;	// 0x310aa421
+ (id)parseResponseData:(id)data;	// 0x310aa35d
@end

