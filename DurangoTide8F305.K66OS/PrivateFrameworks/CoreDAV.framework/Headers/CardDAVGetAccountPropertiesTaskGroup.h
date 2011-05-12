/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVGetAccountPropertiesTaskGroup.h"

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
@private
	NSSet *_addressBookHomes;	// 76 = 0x4c
	NSSet *_directoryGatewayURLs;	// 80 = 0x50
}
@property(readonly, assign) NSSet *addressBookHomes;	// G=0x33862361; @synthesize=_addressBookHomes
@property(readonly, assign) NSSet *directoryGatewayURLs;	// G=0x33862351; @synthesize=_directoryGatewayURLs
- (id)_copyAccountPropertiesPropFindElements;	// 0x33862391
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x33862545
// declared property getter: - (id)addressBookHomes;	// 0x33862361
- (void)dealloc;	// 0x338624e9
- (id)description;	// 0x3386245d
- (id)directoryGatewayURL;	// 0x33862371
// declared property getter: - (id)directoryGatewayURLs;	// 0x33862351
- (id)homeSet;	// 0x33862341
@end

