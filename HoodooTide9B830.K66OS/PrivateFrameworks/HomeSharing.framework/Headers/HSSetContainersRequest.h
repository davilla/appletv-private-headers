/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

#import "HSRequest.h"


@interface HSSetContainersRequest : HSRequest {
}
+ (id)requestWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId itemIDs:(id)ids;	// 0x3516e2e9
- (id)initWithDatabaseID:(unsigned)databaseID containerID:(unsigned)anId itemIDs:(id)ids;	// 0x3516e221
- (id)_bodyDataForContainerID:(unsigned)containerID itemIDs:(id)ids;	// 0x3516e3d5
- (id)canonicalResponseForResponse:(id)response;	// 0x3516e33d
@end

