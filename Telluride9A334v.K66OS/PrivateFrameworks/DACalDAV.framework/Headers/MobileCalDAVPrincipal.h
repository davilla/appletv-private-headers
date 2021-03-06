/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CoreDAVAccountInfoProvider.h"
#import "CalDAVPrincipal.h"
#import <NSObject.h> // Unknown library

@class NSString, MobileCalDAVAccount, NSSet, NSURL, NSMutableDictionary, NSDictionary, NSNumber, CalDAVRefreshContext, NSDateComponents;
@protocol CalDAVAccount, CoreDAVTaskManager;

@interface MobileCalDAVPrincipal : NSObject <CoreDAVAccountInfoProvider, CalDAVPrincipal> {
	NSString *_uid;	// 4 = 0x4
	MobileCalDAVAccount *_account;	// 8 = 0x8
	NSSet *_calendarUserAddresses;	// 12 = 0xc
	NSMutableDictionary *_calendarUserAddressesPerCalendar;	// 16 = 0x10
	NSURL *_preferredCalendarUserAddress;	// 20 = 0x14
	NSString *_fullName;	// 24 = 0x18
	NSURL *_calendarHomeURL;	// 28 = 0x1c
	NSURL *_principalURL;	// 32 = 0x20
	NSURL *_defaultCalendarURL;	// 36 = 0x24
	NSURL *_notificationCollectionURL;	// 40 = 0x28
	NSString *_notificationCollectionCTag;	// 44 = 0x2c
	NSURL *_inboxURL;	// 48 = 0x30
	NSString *_inboxCTag;	// 52 = 0x34
	NSURL *_outboxURL;	// 56 = 0x38
	NSURL *_dropBoxURL;	// 60 = 0x3c
	NSString *_notificationURLString;	// 64 = 0x40
	NSDictionary *_pushTransports;	// 68 = 0x44
	NSString *_calendarHomePushKey;	// 72 = 0x48
	NSString *_XMPPServer;	// 76 = 0x4c
	NSNumber *_quotaFreeBytes;	// 80 = 0x50
	BOOL _isDelegate;	// 84 = 0x54
	BOOL _isWritable;	// 85 = 0x55
	BOOL _isEnabled;	// 86 = 0x56
	BOOL _isExpandPropertyReportSupported;	// 87 = 0x57
	BOOL _supportsFreebusy;	// 88 = 0x58
	BOOL _shouldUpdatePushDelegate;	// 89 = 0x59
	BOOL _isDirty;	// 90 = 0x5a
	BOOL _calendarsAreDirty;	// 91 = 0x5b
	int _calendarChangeIndex;	// 92 = 0x5c
}
@property(readonly, assign) NSString *APSEnv;	// G=0x35b4c0e9; 
@property(readonly, assign) NSURL *APSSubscriptionURL;	// G=0x35b4c069; 
@property(readonly, assign) NSString *APSTopic;	// G=0x35b4c025; 
@property(retain) NSString *XMPPServer;	// G=0x35b4b019; S=0x35b4b029; 
@property(readonly, assign) id<CalDAVAccount> account;	// G=0x35b4a48d; 
@property(retain) NSString *calendarHomePushKey;	// G=0x35b4af95; S=0x35b4afa5; 
@property(retain) NSURL *calendarHomeURL;	// G=0x35b4a8c1; S=0x35b4a8e1; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x35b4a795; S=0x35b4a7a5; 
@property(readonly, assign) NSSet *calendars;	// G=0x35b4b741; 
@property(assign) BOOL calendarsAreDirty;	// G=0x35b4bf59; S=0x35b4be9d; @synthesize=_calendarsAreDirty
@property(retain) NSURL *defaultCalendarURL;	// G=0x35b4aa11; S=0x35b4aa31; 
@property(readonly, assign) NSSet *deletedCalendarURLs;	// G=0x35b4b761; 
@property(retain) NSURL *dropBoxURL;	// G=0x35b4adb9; S=0x35b4add9; 
@property(readonly, assign) NSDateComponents *eventFilterEndDate;	// G=0x35b4b57d; 
@property(readonly, assign) NSDateComponents *eventFilterStartDate;	// G=0x35b4b521; 
@property(retain) NSString *fullName;	// G=0x35b4a83d; S=0x35b4a84d; 
@property(retain) NSString *inboxCTag;	// G=0x35b4ac8d; S=0x35b4ac9d; 
@property(retain) NSURL *inboxURL;	// G=0x35b4abe5; S=0x35b4ac05; 
@property(assign) BOOL isDelegate;	// G=0x35b4b10d; S=0x35b4b11d; 
@property(assign) BOOL isDirty;	// G=0x35b4ccb9; S=0x35b4ccc9; @synthesize=_isDirty
@property(assign) BOOL isEnabled;	// G=0x35b4b19d; S=0x35b4b1ad; 
@property(readonly, assign) BOOL isEnabledForEvents;	// G=0x35b4b209; 
@property(readonly, assign) BOOL isEnabledForTodos;	// G=0x35b4b265; 
@property(assign) BOOL isExpandPropertyReportSupported;	// G=0x35b4b691; S=0x35b4b6a1; 
@property(readonly, assign) BOOL isMergeSync;	// G=0x35b4b1e5; 
@property(assign) BOOL isWritable;	// G=0x35b4b155; S=0x35b4b165; 
@property(retain) NSString *notificationCollectionCTag;	// G=0x35b4ab61; S=0x35b4ab71; 
@property(retain) NSURL *notificationCollectionURL;	// G=0x35b4aab9; S=0x35b4aad9; 
@property(retain) NSString *notificationURLString;	// G=0x35b4ae61; S=0x35b4ae71; 
@property(retain) NSURL *outboxURL;	// G=0x35b4ad11; S=0x35b4ad31; 
@property(readonly, assign) NSURL *preferredCalendarUserAddress;	// G=0x35b4c459; 
@property(retain) NSURL *principalURL;	// G=0x35b4a969; S=0x35b4a989; 
@property(readonly, assign) NSSet *pushKeys;	// G=0x35b4c1dd; 
@property(retain) NSDictionary *pushTransports;	// G=0x35b4aef5; S=0x35b4af05; 
@property(retain) NSNumber *quotaFreeBytes;	// G=0x35b4b09d; S=0x35b4b0ad; 
@property(readonly, assign) CalDAVRefreshContext *refreshContext;	// G=0x35b4b721; 
@property(assign) BOOL shouldUpdatePushDelegate;	// G=0x35b4cc99; S=0x35b4cca9; @synthesize=_shouldUpdatePushDelegate
@property(readonly, assign) BOOL supportsExtendedCalendarQuery;	// G=0x35b4b2c1; 
@property(assign) BOOL supportsFreebusy;	// G=0x35b4b6d9; S=0x35b4b6e9; 
@property(readonly, assign) id<CoreDAVTaskManager> taskManager;	// G=0x35b4c6c9; 
@property(readonly, assign) NSDateComponents *todoFilterEndDate;	// G=0x35b4b64d; 
@property(readonly, assign) NSDateComponents *todoFilterStartDate;	// G=0x35b4b5f1; 
@property(readonly, assign) NSString *uid;	// G=0x35b4cc89; @synthesize=_uid
+ (id)_preferredCalendarUserAddressFromAddresses:(id)addresses;	// 0x35b4c2dd
+ (BOOL)compareAddressURL:(id)url localString:(id)string;	// 0x35b48cc5
- (id)init;	// 0x35b48e9d
- (id)initWithConfiguration:(id)configuration account:(id)account;	// 0x35b49075
// declared property getter: - (id)APSEnv;	// 0x35b4c0e9
// declared property getter: - (id)APSSubscriptionURL;	// 0x35b4c069
// declared property getter: - (id)APSTopic;	// 0x35b4c025
// declared property getter: - (id)XMPPServer;	// 0x35b4b019
- (id)_addUsernameIfNeeded:(id)needed;	// 0x35b4a42d
- (id)_sharedSyncEndDate;	// 0x35b4b2f5
- (id)_startDateFromDaysToSync:(int)sync;	// 0x35b4b3f5
- (BOOL)_userAddressSet:(id)set isEqualToSet:(id)set2;	// 0x35b4a4ad
// declared property getter: - (id)account;	// 0x35b4a48d
- (id)accountID;	// 0x35b4c879
- (id)additionalHeaderValues;	// 0x35b4c995
// declared property getter: - (id)calendarHomePushKey;	// 0x35b4af95
// declared property getter: - (id)calendarHomeURL;	// 0x35b4a8c1
- (id)calendarOfType:(int)type atURL:(id)url withOptions:(id)options;	// 0x35b4bbc9
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)url;	// 0x35b4c5e5
// declared property getter: - (id)calendarUserAddresses;	// 0x35b4a795
- (id)calendarUserAddressesForCalendar:(id)calendar;	// 0x35b4bdbd
// declared property getter: - (id)calendars;	// 0x35b4b741
// declared property getter: - (BOOL)calendarsAreDirty;	// 0x35b4bf59
- (BOOL)clearCalendarChanges;	// 0x35b4bb75
- (id)configuration;	// 0x35b49ae9
- (void)dealloc;	// 0x35b48eb1
// declared property getter: - (id)defaultCalendarURL;	// 0x35b4aa11
- (id)defaultEventCalendarTitle;	// 0x35b4bd75
- (id)defaultTodoCalendarTitle;	// 0x35b4bd81
// declared property getter: - (id)deletedCalendarURLs;	// 0x35b4b761
// declared property getter: - (id)dropBoxURL;	// 0x35b4adb9
// declared property getter: - (id)eventFilterEndDate;	// 0x35b4b57d
// declared property getter: - (id)eventFilterStartDate;	// 0x35b4b521
// declared property getter: - (id)fullName;	// 0x35b4a83d
- (BOOL)handleCertificateError:(id)error;	// 0x35b4cad5
- (BOOL)handleTrustChallenge:(id)challenge;	// 0x35b4caad
- (BOOL)hasCalendarUserAddress:(id)address;	// 0x35b4c4d5
- (id)host;	// 0x35b4c709
- (id)identityPersist;	// 0x35b4c859
// declared property getter: - (id)inboxCTag;	// 0x35b4ac8d
// declared property getter: - (id)inboxURL;	// 0x35b4abe5
// declared property getter: - (BOOL)isDelegate;	// 0x35b4b10d
// declared property getter: - (BOOL)isDirty;	// 0x35b4ccb9
// declared property getter: - (BOOL)isEnabled;	// 0x35b4b19d
// declared property getter: - (BOOL)isEnabledForEvents;	// 0x35b4b209
// declared property getter: - (BOOL)isEnabledForTodos;	// 0x35b4b265
// declared property getter: - (BOOL)isExpandPropertyReportSupported;	// 0x35b4b691
// declared property getter: - (BOOL)isMergeSync;	// 0x35b4b1e5
// declared property getter: - (BOOL)isWritable;	// 0x35b4b155
- (void)noteFailedNetworkRequest;	// 0x35b4cbd9
- (void)noteFailedProtocolRequest;	// 0x35b4cc11
- (void)noteHomeSetOnDifferentHost:(id)host;	// 0x35b4c749
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)numDownloadedElements;	// 0x35b4cb9d
- (void)noteTimeSpentInNetworking:(double)networking;	// 0x35b4cc49
// declared property getter: - (id)notificationCollectionCTag;	// 0x35b4ab61
// declared property getter: - (id)notificationCollectionURL;	// 0x35b4aab9
// declared property getter: - (id)notificationURLString;	// 0x35b4ae61
// declared property getter: - (id)outboxURL;	// 0x35b4ad11
- (id)password;	// 0x35b4c839
- (int)port;	// 0x35b4c729
// declared property getter: - (id)preferredCalendarUserAddress;	// 0x35b4c459
- (void)prepareCalendarsForSyncWithCompletionBlock:(id)completionBlock;	// 0x35b4b879
// declared property getter: - (id)principalURL;	// 0x35b4a969
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id)completionBlock;	// 0x35b4ca0d
// declared property getter: - (id)pushKeys;	// 0x35b4c1dd
// declared property getter: - (id)pushTransports;	// 0x35b4aef5
// declared property getter: - (id)quotaFreeBytes;	// 0x35b4b09d
// declared property getter: - (id)refreshContext;	// 0x35b4b721
- (void)removeCalendar:(id)calendar;	// 0x35b4bd8d
- (id)scheme;	// 0x35b4c6e9
- (id)serverComplianceClasses;	// 0x35b4c899
- (id)serverRoot;	// 0x35b4c815
- (void)setAccount:(id)account;	// 0x35b4a49d
// declared property setter: - (void)setCalendarHomePushKey:(id)key;	// 0x35b4afa5
// declared property setter: - (void)setCalendarHomeURL:(id)url;	// 0x35b4a8e1
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x35b4a7a5
- (void)setCalendarUserAddresses:(id)addresses forCalendar:(id)calendar;	// 0x35b4bdf9
// declared property setter: - (void)setCalendarsAreDirty:(BOOL)dirty;	// 0x35b4be9d
// declared property setter: - (void)setDefaultCalendarURL:(id)url;	// 0x35b4aa31
// declared property setter: - (void)setDropBoxURL:(id)url;	// 0x35b4add9
// declared property setter: - (void)setFullName:(id)name;	// 0x35b4a84d
// declared property setter: - (void)setInboxCTag:(id)tag;	// 0x35b4ac9d
// declared property setter: - (void)setInboxURL:(id)url;	// 0x35b4ac05
// declared property setter: - (void)setIsDelegate:(BOOL)delegate;	// 0x35b4b11d
// declared property setter: - (void)setIsDirty:(BOOL)dirty;	// 0x35b4ccc9
// declared property setter: - (void)setIsEnabled:(BOOL)enabled;	// 0x35b4b1ad
// declared property setter: - (void)setIsExpandPropertyReportSupported:(BOOL)supported;	// 0x35b4b6a1
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x35b4b165
// declared property setter: - (void)setNotificationCollectionCTag:(id)tag;	// 0x35b4ab71
// declared property setter: - (void)setNotificationCollectionURL:(id)url;	// 0x35b4aad9
// declared property setter: - (void)setNotificationURLString:(id)string;	// 0x35b4ae71
// declared property setter: - (void)setOutboxURL:(id)url;	// 0x35b4ad31
// declared property setter: - (void)setPrincipalURL:(id)url;	// 0x35b4a989
// declared property setter: - (void)setPushTransports:(id)transports;	// 0x35b4af05
// declared property setter: - (void)setQuotaFreeBytes:(id)bytes;	// 0x35b4b0ad
// declared property setter: - (void)setShouldUpdatePushDelegate:(BOOL)updatePushDelegate;	// 0x35b4cca9
// declared property setter: - (void)setSupportsFreebusy:(BOOL)freebusy;	// 0x35b4b6e9
// declared property setter: - (void)setXMPPServer:(id)server;	// 0x35b4b029
- (BOOL)shouldCompressRequests;	// 0x35b4cb45
- (BOOL)shouldFailAllTasks;	// 0x35b4cad9
- (BOOL)shouldHandleHTTPCookiesForURL:(id)url;	// 0x35b4cadd
- (BOOL)shouldSendClientInfoHeaderForURL:(id)url;	// 0x35b4cae1
// declared property getter: - (BOOL)shouldUpdatePushDelegate;	// 0x35b4cc99
- (BOOL)shouldUseOpportunisticSockets;	// 0x35b4cb79
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x35b4b2c1
// declared property getter: - (BOOL)supportsFreebusy;	// 0x35b4b6d9
// declared property getter: - (id)taskManager;	// 0x35b4c6c9
// declared property getter: - (id)todoFilterEndDate;	// 0x35b4b64d
// declared property getter: - (id)todoFilterStartDate;	// 0x35b4b5f1
// declared property getter: - (id)uid;	// 0x35b4cc89
- (id)user;	// 0x35b4c819
- (id)userAgentHeader;	// 0x35b4c89d
@end

