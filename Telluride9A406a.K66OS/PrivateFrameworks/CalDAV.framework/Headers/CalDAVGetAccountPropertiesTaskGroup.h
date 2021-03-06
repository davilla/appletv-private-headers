/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVGetAccountPropertiesTaskGroup.h> // Unknown library

@class NSURL, NSSet, NSString, CalDAVServerVersion;

@interface CalDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
@private
	NSSet *_calendarHomes;	// 76 = 0x4c
	NSSet *_userAddresses;	// 80 = 0x50
	NSSet *_originalUserAddresses;	// 84 = 0x54
	NSURL *_inboxURL;	// 88 = 0x58
	NSURL *_outboxURL;	// 92 = 0x5c
	NSURL *_dropboxURL;	// 96 = 0x60
	NSURL *_notificationURL;	// 100 = 0x64
	NSURL *_delegatePrincipalURL;	// 104 = 0x68
	NSURL *_updatedPrincipalURL;	// 108 = 0x6c
	NSString *_allowedCalendarComponentSet;	// 112 = 0x70
	CalDAVServerVersion *_serverVersion;	// 116 = 0x74
}
@property(readonly, assign) NSString *allowedCalendarComponentSet;	// G=0x35fad235; @synthesize=_allowedCalendarComponentSet
@property(readonly, assign) NSSet *calendarHomes;	// G=0x35fad2b5; @synthesize=_calendarHomes
@property(retain) NSURL *delegatePrincipalURL;	// G=0x35fad52d; S=0x35fad509; @synthesize=_delegatePrincipalURL
@property(readonly, assign) NSURL *dropboxURL;	// G=0x35fad285; @synthesize=_dropboxURL
@property(readonly, assign) NSURL *inboxURL;	// G=0x35fad2a5; @synthesize=_inboxURL
@property(readonly, assign) NSURL *notificationURL;	// G=0x35fad275; @synthesize=_notificationURL
@property(readonly, assign) NSSet *originalUserAddresses;	// G=0x35fad255; @synthesize=_originalUserAddresses
@property(readonly, assign) NSURL *outboxURL;	// G=0x35fad295; @synthesize=_outboxURL
@property(readonly, assign) CalDAVServerVersion *serverVersion;	// G=0x35fad245; @synthesize=_serverVersion
@property(readonly, assign) NSURL *updatedPrincipalURL;	// G=0x35fad225; @synthesize=_updatedPrincipalURL
@property(readonly, assign) NSSet *userAddresses;	// G=0x35fad265; @synthesize=_userAddresses
- (id)_copyAccountPropertiesPropFindElements;	// 0x35fadab1
- (void)_setPropertiesFromParsedResponses:(id)parsedResponses;	// 0x35fad601
// declared property getter: - (id)allowedCalendarComponentSet;	// 0x35fad235
// declared property getter: - (id)calendarHomes;	// 0x35fad2b5
- (void)dealloc;	// 0x35fad3f5
// declared property getter: - (id)delegatePrincipalURL;	// 0x35fad52d
- (id)description;	// 0x35fadd49
// declared property getter: - (id)dropboxURL;	// 0x35fad285
- (BOOL)forceOptionsRequest;	// 0x35fad221
- (id)homeSet;	// 0x35fad211
// declared property getter: - (id)inboxURL;	// 0x35fad2a5
// declared property getter: - (id)notificationURL;	// 0x35fad275
// declared property getter: - (id)originalUserAddresses;	// 0x35fad255
// declared property getter: - (id)outboxURL;	// 0x35fad295
- (void)processPrincipalHeaders:(id)headers;	// 0x35fad545
// declared property getter: - (id)serverVersion;	// 0x35fad245
// declared property setter: - (void)setDelegatePrincipalURL:(id)url;	// 0x35fad509
- (void)startTaskGroup;	// 0x35fad2c5
// declared property getter: - (id)updatedPrincipalURL;	// 0x35fad225
// declared property getter: - (id)userAddresses;	// 0x35fad265
@end

