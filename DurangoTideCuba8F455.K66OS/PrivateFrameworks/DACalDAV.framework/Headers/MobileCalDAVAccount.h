/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DAAccount.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSMutableSet, CalDAVPrincipalSearchPropertySet, NSDictionary, CalDAVAccount, NSString, CalDAVPrincipal, CalDAVServerVersion, NSDate, NSLock, NSSet, DAVSession, NSTimeZone;
@protocol DAValidityCheckConsumer;

@interface MobileCalDAVAccount : DAAccount {
	CalDAVAccount *_account;	// 64 = 0x40
	CalDAVPrincipal *_principal;	// 68 = 0x44
	int _preferredDaysToSync;	// 72 = 0x48
	NSMutableSet *_calendarUserAddresses;	// 76 = 0x4c
	NSMutableSet *_calendars;	// 80 = 0x50
	NSDictionary *_subscribedCalendars;	// 84 = 0x54
	BOOL _subscribedCalendarsChanged;	// 88 = 0x58
	NSString *_collectionSetName;	// 92 = 0x5c
	CalDAVPrincipalSearchPropertySet *_searchPropertySet;	// 96 = 0x60
	NSDate *_refreshStartDate;	// 100 = 0x64
	BOOL _isSpinning;	// 104 = 0x68
	id<DAValidityCheckConsumer> _validityConsumer;	// 108 = 0x6c
	NSString *_XMPPServer;	// 112 = 0x70
	NSString *_notificationURLString;	// 116 = 0x74
	NSString *_notificationNodeName;	// 120 = 0x78
	NSString *_notificationServiceName;	// 124 = 0x7c
	BOOL _shouldUpdatePushDelegate;	// 128 = 0x80
	dispatch_queue_s *_searchQueue;	// 132 = 0x84
	NSMutableSet *_runningSearchQueries;	// 136 = 0x88
	NSLock *_searchQuerySetLock;	// 140 = 0x8c
	BOOL _searchQueriesShouldCancel;	// 144 = 0x90
}
@property(retain) NSSet *APSCollectionIDs;	// G=0x31447e4d; S=0x31447db9; 
@property(retain) NSString *APSEnv;	// G=0x31447ff1; S=0x31447f05; 
@property(retain) NSString *APSRegistrationURL;	// G=0x31447ee9; S=0x31447e89; 
@property(retain) NSString *APSTopic;	// G=0x3144806d; S=0x3144800d; 
@property(retain) NSString *XMPPServer;	// G=0x3144b9ad; S=0x3144ba35; @synthesize=_XMPPServer
@property(retain) CalDAVAccount *account;	// G=0x31447a35; S=0x314479a1; 
@property(assign) int calDAVAccountVersion;	// G=0x31448781; S=0x31448745; 
@property(retain) NSString *calendarHomePath;	// G=0x314481a1; S=0x3144a4c1; 
@property(retain) NSSet *calendarUserAddresses;	// G=0x3144b9f5; S=0x3144bab9; @synthesize=_calendarUserAddresses
@property(readonly, assign) NSSet *calendars;	// G=0x3144a9fd; 
@property(retain) NSString *collectionSetName;	// G=0x31447d65; S=0x31447d49; 
@property(retain) NSString *dropBoxPath;	// G=0x31448115; S=0x314480f9; 
@property(retain) NSString *fullName;	// G=0x31447d9d; S=0x31447d81; 
@property(retain) id host;	// G=0x31448515; S=0x31448529; converted property
@property(retain) NSString *inboxPath;	// G=0x31448185; S=0x31448169; 
@property(readonly, assign) BOOL isAutoScheduleSupported;	// G=0x31447851; 
@property(assign) BOOL isWritable;	// G=0x31447bf1; S=0x31447bb1; 
@property(assign) BOOL keepOffline;	// G=0x31447c91; S=0x31447c51; 
@property(retain) NSString *notificationCollectionPath;	// G=0x314480a5; S=0x31448089; 
@property(retain) NSString *notificationNodeName;	// G=0x3144b9c5; S=0x3144ba61; @synthesize=_notificationNodeName
@property(retain) NSString *notificationServiceName;	// G=0x3144b9dd; S=0x3144ba8d; @synthesize=_notificationServiceName
@property(retain) NSString *notificationURLString;	// G=0x31446eed; S=0x3144b7c5; 
@property(retain) NSString *notificationsPath;	// G=0x314480dd; S=0x314480c1; 
@property(readonly, assign) NSDate *ocurrenceCacheEndDate;	// G=0x3144ad1d; 
@property(readonly, assign) NSDate *ocurrenceCacheStartDate;	// G=0x3144ad55; 
@property(retain) NSString *outboxPath;	// G=0x3144814d; S=0x31448131; 
@property(assign) int overriddenPort;	// G=0x31448429; S=0x31448455; 
@property(retain) NSString *overriddenScheme;	// G=0x314483bd; S=0x314483d9; 
@property(retain) NSString *overriddenServer;	// G=0x314484a9; S=0x314484c5; 
@property(assign) int port;	// G=0x3144834d; S=0x31448381; converted property
@property(assign) int preferredDaysToSync;	// G=0x31446eb9; S=0x31446ec9; 
@property(retain) CalDAVPrincipal *principal;	// G=0x31447971; S=0x314478f1; 
@property(retain) id principalURL;	// G=0x3144823d; S=0x314481bd; converted property
@property(retain) id scheme;	// G=0x314482dd; S=0x31448311; converted property
@property(retain) CalDAVPrincipalSearchPropertySet *searchPropertySet;	// G=0x31447d0d; S=0x31447cbd; 
@property(assign) BOOL searchQueriesShouldCancel;	// G=0x31446f05; S=0x31446f15; @synthesize=_searchQueriesShouldCancel
@property(retain) NSString *server;	// G=0x3144853d; S=0x31448571; 
@property(assign) CalDAVServerVersion *serverVersion;	// G=0x31447875; S=0x3144a3d9; 
@property(readonly, assign) DAVSession *session;	// G=0x314478b1; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRange;	// G=0x3144780d; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRangeForInbox;	// G=0x314477c9; 
@property(retain, nonatomic) NSDictionary *subscribedCalendars;	// G=0x31446f25; S=0x3144ba0d; @synthesize=_subscribedCalendars
@property(assign) BOOL useSSL;	// G=0x3144825d; S=0x31448289; converted property
@property(retain) id username;	// G=0x314486a5; S=0x314486c5; converted property
@property(readonly, assign) NSTimeZone *viewedTimeZone;	// G=0x3144ad05; 
@property(assign) BOOL wasMigrated;	// G=0x31447b81; S=0x31447b3d; 
+ (Class)accountClass;	// 0x314487ed
+ (Class)clientClass;	// 0x314487cd
+ (id)defaultProperties;	// 0x31448845
+ (id)supportedDataclasses;	// 0x314487ad
- (id)init;	// 0x3144880d
- (id)initWithProperties:(id)properties;	// 0x31448e51
// declared property getter: - (id)APSCollectionIDs;	// 0x31447e4d
// declared property getter: - (id)APSEnv;	// 0x31447ff1
// declared property getter: - (id)APSRegistrationURL;	// 0x31447ee9
// declared property getter: - (id)APSTopic;	// 0x3144806d
- (id)DAVAuthStore;	// 0x31446ee1
// declared property getter: - (id)XMPPServer;	// 0x3144b9ad
- (void)_markRefreshEnd:(id)end withError:(id)error;	// 0x3144a20d
- (void)_markRefreshStart;	// 0x31447521
- (id)_powerAssertionContext;	// 0x31446efd
- (id)_powerAssertionGroupIdentifier;	// 0x314473a5
- (void)_setSpinning:(BOOL)spinning;	// 0x3144b1a5
- (void)_updateCalendarStore:(BOOL)store;	// 0x3144af2d
- (BOOL)_updateCalendarStoreProperties:(void *)properties;	// 0x3144ad8d
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x3144a7c5
// declared property getter: - (id)account;	// 0x31447a35
- (BOOL)accountNeedsUpgrade;	// 0x3144a6e9
- (void)addCalendar:(id)calendar;	// 0x31447a8d
- (void)addCalendarUserAddress:(id)address;	// 0x31447add
// declared property getter: - (int)calDAVAccountVersion;	// 0x31448781
// declared property getter: - (id)calendarHomePath;	// 0x314481a1
- (BOOL)calendarUserAddressIsEquivalentToURL:(id)url;	// 0x31448c35
// declared property getter: - (id)calendarUserAddresses;	// 0x3144b9f5
// declared property getter: - (id)calendars;	// 0x3144a9fd
- (void)cancelAllSearchQueries;	// 0x3144b711
- (void)cancelRefresh;	// 0x3144a361
- (void)cancelSearchQuery:(id)query;	// 0x314474cd
- (void)checkValidityWithConsumer:(id)consumer;	// 0x314473b9
// declared property getter: - (id)collectionSetName;	// 0x31447d65
- (id)cookieHeader;	// 0x31446ed9
- (id)dateToSyncFrom;	// 0x3144761d
- (id)dateToSyncTo;	// 0x314475b5
- (void)davSessionShouldAllowTrustInfo:(id)davSession;	// 0x31446f35
- (void)dealloc;	// 0x3144946d
// declared property getter: - (id)dropBoxPath;	// 0x31448115
- (void)dropPowerAssertions;	// 0x314472f9
// declared property getter: - (id)fullName;	// 0x31447d9d
- (BOOL)hasCalendarUserAddress:(id)address;	// 0x31448d31
// converted property getter: - (id)host;	// 0x31448515
// declared property getter: - (id)inboxPath;	// 0x31448185
// declared property getter: - (BOOL)isAutoScheduleSupported;	// 0x31447851
- (BOOL)isCalDAVAccount;	// 0x31446f01
- (BOOL)isEqualToAccount:(id)account;	// 0x314470d1
- (BOOL)isPendingRefresh;	// 0x31447591
- (BOOL)isRefreshing;	// 0x3144756d
// declared property getter: - (BOOL)isWritable;	// 0x31447bf1
// declared property getter: - (BOOL)keepOffline;	// 0x31447c91
- (int)keychainAccessibilityType;	// 0x3144a9d9
- (id)localizedIdenticalAccountFailureMessage;	// 0x31447061
- (id)localizedInvalidPasswordMessage;	// 0x31446fb5
// declared property getter: - (id)notificationCollectionPath;	// 0x314480a5
// declared property getter: - (id)notificationNodeName;	// 0x3144b9c5
// declared property getter: - (id)notificationServiceName;	// 0x3144b9dd
// declared property getter: - (id)notificationURLString;	// 0x31446eed
// declared property getter: - (id)notificationsPath;	// 0x314480dd
// declared property getter: - (id)ocurrenceCacheEndDate;	// 0x3144ad1d
// declared property getter: - (id)ocurrenceCacheStartDate;	// 0x3144ad55
// declared property getter: - (id)outboxPath;	// 0x3144814d
// declared property getter: - (int)overriddenPort;	// 0x31448429
// declared property getter: - (id)overriddenScheme;	// 0x314483bd
// declared property getter: - (id)overriddenServer;	// 0x314484a9
- (void)performSearchQuery:(id)query consumer:(id)consumer;	// 0x3144b36d
// converted property getter: - (int)port;	// 0x3144834d
// declared property getter: - (int)preferredDaysToSync;	// 0x31446eb9
// declared property getter: - (id)principal;	// 0x31447971
// converted property getter: - (id)principalURL;	// 0x3144823d
- (id)properties;	// 0x31448bad
- (void)reattainPowerAssertions;	// 0x314472b1
- (void)refreshOperation:(id)operation didCompleteWithError:(id)error;	// 0x31449fb9
- (void)refreshWithContext:(id)context;	// 0x31449dfd
- (void)releasePowerAssertion;	// 0x31449571
- (void)removeCalendar:(id)calendar;	// 0x31447a65
- (void)removeCalendarUserAddress:(id)address;	// 0x31447ab5
- (void)retainPowerAssertion;	// 0x31447341
- (void)saveConfiguration;	// 0x31446ea9
// converted property getter: - (id)scheme;	// 0x314482dd
// declared property getter: - (id)searchPropertySet;	// 0x31447d0d
- (BOOL)searchQueriesRunning;	// 0x31447479
// declared property getter: - (BOOL)searchQueriesShouldCancel;	// 0x31446f05
// declared property getter: - (id)server;	// 0x3144853d
- (id)serverBaseURL;	// 0x31448609
// declared property getter: - (id)serverVersion;	// 0x31447875
// declared property getter: - (id)session;	// 0x314478b1
- (id)sessionWithURL:(id)url;	// 0x314478d1
// declared property setter: - (void)setAPSCollectionIDs:(id)ids;	// 0x31447db9
// declared property setter: - (void)setAPSEnv:(id)env;	// 0x31447f05
// declared property setter: - (void)setAPSRegistrationURL:(id)url;	// 0x31447e89
// declared property setter: - (void)setAPSTopic:(id)topic;	// 0x3144800d
// declared property setter: - (void)setAccount:(id)account;	// 0x314479a1
- (void)setAccountDescription:(id)description;	// 0x31448aa9
// declared property setter: - (void)setCalDAVAccountVersion:(int)version;	// 0x31448745
// declared property setter: - (void)setCalendarHomePath:(id)path;	// 0x3144a4c1
// declared property setter: - (void)setCalendarUserAddresses:(id)addresses;	// 0x3144bab9
// declared property setter: - (void)setCollectionSetName:(id)name;	// 0x31447d49
// declared property setter: - (void)setDropBoxPath:(id)path;	// 0x314480f9
// declared property setter: - (void)setFullName:(id)name;	// 0x31447d81
// converted property setter: - (void)setHost:(id)host;	// 0x31448529
// declared property setter: - (void)setInboxPath:(id)path;	// 0x31448169
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x31447bb1
// declared property setter: - (void)setKeepOffline:(BOOL)offline;	// 0x31447c51
// declared property setter: - (void)setNotificationCollectionPath:(id)path;	// 0x31448089
// declared property setter: - (void)setNotificationNodeName:(id)name;	// 0x3144ba61
// declared property setter: - (void)setNotificationServiceName:(id)name;	// 0x3144ba8d
// declared property setter: - (void)setNotificationURLString:(id)string;	// 0x3144b7c5
// declared property setter: - (void)setNotificationsPath:(id)path;	// 0x314480c1
// declared property setter: - (void)setOutboxPath:(id)path;	// 0x31448131
// declared property setter: - (void)setOverriddenPort:(int)port;	// 0x31448455
// declared property setter: - (void)setOverriddenScheme:(id)scheme;	// 0x314483d9
// declared property setter: - (void)setOverriddenServer:(id)server;	// 0x314484c5
- (void)setPassword:(id)password;	// 0x31448ae9
// converted property setter: - (void)setPort:(int)port;	// 0x31448381
// declared property setter: - (void)setPreferredDaysToSync:(int)sync;	// 0x31446ec9
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x314478f1
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x314481bd
// converted property setter: - (void)setScheme:(id)scheme;	// 0x31448311
// declared property setter: - (void)setSearchPropertySet:(id)set;	// 0x31447cbd
// declared property setter: - (void)setSearchQueriesShouldCancel:(BOOL)cancel;	// 0x31446f15
// declared property setter: - (void)setServer:(id)server;	// 0x31448571
// declared property setter: - (void)setServerVersion:(id)version;	// 0x3144a3d9
// declared property setter: - (void)setSubscribedCalendars:(id)calendars;	// 0x3144ba0d
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x31448289
// converted property setter: - (void)setUsername:(id)username;	// 0x314486c5
// declared property setter: - (void)setWasMigrated:(BOOL)migrated;	// 0x31447b3d
// declared property setter: - (void)setXMPPServer:(id)server;	// 0x3144ba35
// declared property getter: - (BOOL)shouldFilterSyncTimeRange;	// 0x3144780d
// declared property getter: - (BOOL)shouldFilterSyncTimeRangeForInbox;	// 0x314477c9
- (BOOL)shouldUseCookieStorage;	// 0x31446ee5
- (void)shutdown;	// 0x31446ee9
// declared property getter: - (id)subscribedCalendars;	// 0x31446f25
- (BOOL)supportsDataclass:(int)dataclass;	// 0x31446ead
- (BOOL)upgradeAccount;	// 0x31448b31
- (id)urlForKeychain;	// 0x31449ce5
// converted property getter: - (BOOL)useSSL;	// 0x3144825d
// converted property getter: - (id)username;	// 0x314486a5
- (BOOL)usesTokenAuth;	// 0x31446edd
- (void)verifyOperationSucceeded:(BOOL)succeeded error:(id)error;	// 0x31449601
// declared property getter: - (id)viewedTimeZone;	// 0x3144ad05
// declared property getter: - (BOOL)wasMigrated;	// 0x31447b81
@end

