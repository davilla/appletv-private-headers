/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <AYOperation.h> // Unknown library

@class DAVRequest, DAVSession, NSString, NSArray;

@interface CalDAVGetPropertyOperation : AYOperation {
	NSString *_uri;	// 64 = 0x40
	DAVSession *_session;	// 68 = 0x44
	NSArray *_properties;	// 72 = 0x48
	NSString *_value;	// 76 = 0x4c
	DAVRequest *_request;	// 80 = 0x50
}
- (id)initWithSession:(id)session URI:(id)uri properties:(id)properties value:(id)value;	// 0x31453675
- (id)initWithSession:(id)session URI:(id)uri property:(id)property value:(id)value;	// 0x314535c5
- (void)dealloc;	// 0x31453535
- (void)getProperties;	// 0x314533fd
- (id)responses;	// 0x314533dd
@end
