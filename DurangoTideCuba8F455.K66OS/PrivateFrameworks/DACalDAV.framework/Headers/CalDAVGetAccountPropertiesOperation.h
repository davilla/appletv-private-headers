/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <AYOperation.h> // Unknown library

@class NSSet, DAVSession, CalDAVServerVersion, NSString, CalDAVPrincipalSearchPropertySet, NSURL;

@interface CalDAVGetAccountPropertiesOperation : AYOperation {
	DAVSession *_session;	// 64 = 0x40
	NSURL *_principalURL;	// 68 = 0x44
	NSString *_collectionSetName;	// 72 = 0x48
	NSString *_principalPath;	// 76 = 0x4c
	CalDAVServerVersion *_serverVersion;	// 80 = 0x50
	NSString *_calendarHomePath;	// 84 = 0x54
	NSString *_inboxPath;	// 88 = 0x58
	NSString *_outboxPath;	// 92 = 0x5c
	NSString *_dropBoxPath;	// 96 = 0x60
	NSString *_notificationCollectionPath;	// 100 = 0x64
	NSString *_redirectLocation;	// 104 = 0x68
	NSString *_displayName;	// 108 = 0x6c
	NSSet *_userAddresses;	// 112 = 0x70
	BOOL _isInboxAvailabilitySupported;	// 116 = 0x74
	BOOL _isCalendarServerPrivateEventsSupported;	// 117 = 0x75
	BOOL _isPrivateCommentsSupported;	// 118 = 0x76
	BOOL _isCalendarProxySupported;	// 119 = 0x77
	BOOL _isAutoScheduleSupported;	// 120 = 0x78
	BOOL _isExpandPropertyReportSupported;	// 121 = 0x79
	BOOL _isCalDAVDisabled;	// 122 = 0x7a
	CalDAVPrincipalSearchPropertySet *_searchPropertySet;	// 124 = 0x7c
}
@property(readonly, assign) NSString *calendarHomePath;	// G=0x314523b1; @synthesize=_calendarHomePath
@property(readonly, assign) NSString *collectionSetName;	// G=0x314523e1; @synthesize=_collectionSetName
@property(readonly, assign) NSString *displayName;	// G=0x31452351; @synthesize=_displayName
@property(readonly, assign) NSString *dropBoxPath;	// G=0x31452381; @synthesize=_dropBoxPath
@property(readonly, assign) NSString *inboxPath;	// G=0x314523a1; @synthesize=_inboxPath
@property(readonly, assign) BOOL isAutoScheduleSupported;	// G=0x31452311; @synthesize=_isAutoScheduleSupported
@property(readonly, assign) BOOL isCalDAVDisabled;	// G=0x314522e1; @synthesize=_isCalDAVDisabled
@property(readonly, assign) BOOL isCalendarProxySupported;	// G=0x31452301; @synthesize=_isCalendarProxySupported
@property(readonly, assign) BOOL isCalendarServerPrivateEventsSupported;	// G=0x31452331; @synthesize=_isCalendarServerPrivateEventsSupported
@property(readonly, assign) BOOL isExpandPropertyReportSupported;	// G=0x314522f1; @synthesize=_isExpandPropertyReportSupported
@property(readonly, assign) BOOL isInboxAvailabilitySupported;	// G=0x31452341; @synthesize=_isInboxAvailabilitySupported
@property(readonly, assign) BOOL isPrivateCommentsSupported;	// G=0x31452321; @synthesize=_isPrivateCommentsSupported
@property(readonly, assign) NSString *notificationCollectionPath;	// G=0x31452371; @synthesize=_notificationCollectionPath
@property(readonly, assign) NSString *outboxPath;	// G=0x31452391; @synthesize=_outboxPath
@property(readonly, assign) NSString *principalPath;	// G=0x314523d1; @synthesize=_principalPath
@property(readonly, assign) NSURL *principalURL;	// G=0x314523f1; @synthesize=_principalURL
@property(readonly, assign) NSString *redirectLocation;	// G=0x31452361; @synthesize=_redirectLocation
@property(readonly, assign) CalDAVPrincipalSearchPropertySet *searchPropertySet;	// G=0x314522c1; @synthesize=_searchPropertySet
@property(readonly, assign) CalDAVServerVersion *serverVersion;	// G=0x314523c1; @synthesize=_serverVersion
@property(readonly, assign) DAVSession *session;	// G=0x31452401; @synthesize=_session
@property(readonly, assign) NSSet *userAddresses;	// G=0x314522d1; @synthesize=_userAddresses
- (id)initWithPrincipalURL:(id)principalURL session:(id)session;	// 0x314526d5
// declared property getter: - (id)calendarHomePath;	// 0x314523b1
// declared property getter: - (id)collectionSetName;	// 0x314523e1
- (void)dealloc;	// 0x314525a1
- (id)description;	// 0x31452411
// declared property getter: - (id)displayName;	// 0x31452351
// declared property getter: - (id)dropBoxPath;	// 0x31452381
- (void)getAccountProperties;	// 0x31452775
// declared property getter: - (id)inboxPath;	// 0x314523a1
// declared property getter: - (BOOL)isAutoScheduleSupported;	// 0x31452311
// declared property getter: - (BOOL)isCalDAVDisabled;	// 0x314522e1
// declared property getter: - (BOOL)isCalendarProxySupported;	// 0x31452301
// declared property getter: - (BOOL)isCalendarServerPrivateEventsSupported;	// 0x31452331
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x314522f1
// declared property getter: - (BOOL)isInboxAvailabilitySupported;	// 0x31452341
// declared property getter: - (BOOL)isPrivateCommentsSupported;	// 0x31452321
// declared property getter: - (id)notificationCollectionPath;	// 0x31452371
// declared property getter: - (id)outboxPath;	// 0x31452391
// declared property getter: - (id)principalPath;	// 0x314523d1
// declared property getter: - (id)principalURL;	// 0x314523f1
// declared property getter: - (id)redirectLocation;	// 0x31452361
// declared property getter: - (id)searchPropertySet;	// 0x314522c1
// declared property getter: - (id)serverVersion;	// 0x314523c1
// declared property getter: - (id)session;	// 0x31452401
// declared property getter: - (id)userAddresses;	// 0x314522d1
@end

