/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DAAccount.h> // Unknown library
#import "DACalDAV-Structs.h"

@class NSSet, NSURL, NSDictionary, DACoreDAVTaskManager, NSTimeZone, NSMutableDictionary, NSMutableSet, CalDAVPrincipalSearchPropertySet, CoreDAVDiscoveryTaskGroup, DACoreDAVLogger, CalDAVServerVersion, NSDate, MobileCalDAVPrincipal, MobileCalDAVAccountRefreshActor, CalDAVRefreshContext, NSString;

@interface MobileCalDAVAccount : DAAccount {
	DACoreDAVTaskManager *_taskManager;	// 64 = 0x40
	NSMutableDictionary *_principals;	// 68 = 0x44
	MobileCalDAVPrincipal *_mainPrincipal;	// 72 = 0x48
	int _preferredEventDaysToSync;	// 76 = 0x4c
	int _preferredToDoDaysToSync;	// 80 = 0x50
	NSMutableSet *_calendars;	// 84 = 0x54
	BOOL _subscribedCalendarsChanged;	// 88 = 0x58
	NSString *_collectionSetName;	// 92 = 0x5c
	CalDAVPrincipalSearchPropertySet *_searchPropertySet;	// 96 = 0x60
	CoreDAVDiscoveryTaskGroup *_checkValidityTaskGroup;	// 100 = 0x64
	MobileCalDAVAccountRefreshActor *_actor;	// 104 = 0x68
	BOOL _isRefreshing;	// 108 = 0x6c
	BOOL _isSpinning;	// 109 = 0x6d
	BOOL _needsAccountPropertyRefresh;	// 110 = 0x6e
	CalDAVRefreshContext *_refreshContext;	// 112 = 0x70
	NSMutableSet *_searchTaskSet;	// 116 = 0x74
	DACoreDAVLogger *_curLogger;	// 120 = 0x78
	CalDAVServerVersion *_serverVersion;	// 124 = 0x7c
	NSMutableDictionary *_itemIDsToMoveActions;	// 128 = 0x80
	NSMutableSet *_movedItemURLStrings;	// 132 = 0x84
@private
	BOOL _searchQueriesShouldCancel;	// 136 = 0x88
}
@property(assign) int calDAVAccountVersion;	// G=0x34cdbe75; S=0x34cdbea9; 
@property(readonly, assign) NSSet *calendars;	// G=0x34cdc98d; 
@property(retain) NSURL *collectionSetURL;	// G=0x34cdc5c9; S=0x34cdc60d; 
@property(retain) id host;	// G=0x34cdc11d; S=0x34cdc159; converted property
@property(assign) BOOL isRefreshing;	// G=0x34ce0391; S=0x34ce03a1; @synthesize=_isRefreshing
@property(assign) BOOL isWritable;	// G=0x34cdc69d; S=0x34cdc709; 
@property(readonly, assign) NSMutableDictionary *itemIDsToMoveActions;	// G=0x34ce0409; @synthesize=_itemIDsToMoveActions
@property(retain) MobileCalDAVPrincipal *mainPrincipal;	// G=0x34ce0429; S=0x34ce043d; @synthesize=_mainPrincipal
@property(readonly, assign) NSSet *movedItemURLStrings;	// G=0x34ce0419; @synthesize=_movedItemURLStrings
@property(assign) BOOL needsAccountPropertyRefresh;	// G=0x34ce03e9; S=0x34ce03f9; @synthesize=_needsAccountPropertyRefresh
@property(readonly, assign) NSDate *ocurrenceCacheEndDate;	// G=0x34cdd371; 
@property(readonly, assign) NSDate *ocurrenceCacheStartDate;	// G=0x34cdd339; 
@property(assign) int overriddenPort;	// G=0x34cdc071; S=0x34cdc011; 
@property(retain) NSString *overriddenScheme;	// G=0x34cdc101; S=0x34cdc0a5; 
@property(retain) NSString *overriddenServer;	// G=0x34cdbff5; S=0x34cdbf99; 
@property(assign) int port;	// G=0x34cdc2e9; S=0x34cdc2a5; converted property
@property(assign) int preferredEventDaysToSync;	// G=0x34ce0471; S=0x34ce0481; @synthesize=_preferredEventDaysToSync
@property(assign) int preferredToDoDaysToSync;	// G=0x34ce0491; S=0x34ce04a1; @synthesize=_preferredToDoDaysToSync
@property(retain) id principalURL;	// G=0x34cdc399; S=0x34cdc3b9; converted property
@property(readonly, assign) NSDictionary *principals;	// G=0x34ce0461; @synthesize=_principals
@property(retain) CalDAVRefreshContext *refreshContext;	// G=0x34ce03b1; S=0x34ce03c5; @synthesize=_refreshContext
@property(retain) id scheme;	// G=0x34cdc1e1; S=0x34cdc21d; converted property
@property(retain) id searchPropertySet;	// G=0x34cdc649; S=0x34cdc659; 
@property(assign) BOOL searchQueriesShouldCancel;	// G=0x34ce04b1; S=0x34ce04c1; @synthesize=_searchQueriesShouldCancel
@property(assign) CalDAVServerVersion *serverVersion;	// G=0x34cdd169; S=0x34cdd1d9; 
@property(readonly, assign) BOOL shouldFilterEventSyncTimeRange;	// G=0x34cdd3a9; 
@property(readonly, assign) BOOL shouldFilterSyncTimeRangeForInbox;	// G=0x34cdd441; 
@property(readonly, assign) BOOL shouldFilterTodoSyncTimeRange;	// G=0x34cdd3f5; 
@property(retain, nonatomic) NSDictionary *subscribedCalendars;	// G=0x34cdbe55; S=0x34cdbdb9; 
@property(readonly, assign) BOOL supportsEvents;	// G=0x34cdd529; 
@property(readonly, assign) BOOL supportsReminders;	// G=0x34cdd4ad; 
@property(readonly, retain) DACoreDAVTaskManager *taskManager;	// G=0x34cdd531; converted property
@property(assign) BOOL useSSL;	// G=0x34cdc369; S=0x34cdc335; converted property
@property(retain) id username;	// G=0x34cdbeed; S=0x34cdbf0d; converted property
@property(readonly, assign) NSTimeZone *viewedTimeZone;	// G=0x34cdd31d; 
@property(assign) BOOL wasMigrated;	// G=0x34cdc74d; S=0x34cdc801; 
+ (Class)accountClass;	// 0x34cdb041
+ (Class)clientClass;	// 0x34cdb05d
+ (id)defaultProperties;	// 0x34cda791
+ (id)supportedDataclasses;	// 0x34cdb079
- (id)init;	// 0x34cda8d1
- (id)initWithProperties:(id)properties;	// 0x34cda289
- (id)_calendarConstraintsPath;	// 0x34cdd689
- (id)_calendarConstraintsResource;	// 0x34cdd585
- (id)_collectActionsFromMoveDictionary:(CFDictionaryRef)moveDictionary forDataclass:(id)dataclass outShouldSave:(BOOL *)anOut;	// 0x34cde47d
- (void)_collectMoveActions;	// 0x34cde929
- (BOOL)_needsNewAccountIDForOldVersion:(int)oldVersion;	// 0x34cdb875
- (id)_oldURLsForKeychain;	// 0x34cdb609
- (id)_powerAssertionContext;	// 0x34cdfde9
- (id)_powerAssertionGroupIdentifier;	// 0x34cdfded
- (void)_setSpinning:(BOOL)spinning;	// 0x34cddd45
- (void)_updateCalendarStore:(BOOL)store;	// 0x34cdda35
- (BOOL)_updateCalendarStoreProperties:(void *)properties;	// 0x34cdd755
- (void)_upgradeAccountToTelluride;	// 0x34cdb111
- (BOOL)_upgradeSelfFromVersion:(int)version superClassUpgraded:(BOOL)upgraded;	// 0x34cdb881
- (BOOL)accountNeedsUpgrade;	// 0x34cdbcc1
- (void)addCalendar:(id)calendar;	// 0x34cdc8c9
- (void)addPrincipal:(id)principal;	// 0x34cdd0d5
// declared property getter: - (int)calDAVAccountVersion;	// 0x34cdbe75
// declared property getter: - (id)calendars;	// 0x34cdc98d
- (void)cancelAllSearchQueries;	// 0x34cdf6bd
- (void)cancelRefresh;	// 0x34cddda9
- (void)cancelSearchQuery:(id)query;	// 0x34cdf575
- (void)checkValidityWithConsumer:(id)consumer;	// 0x34cdfba9
// declared property getter: - (id)collectionSetURL;	// 0x34cdc5c9
- (void *)copyCalStore;	// 0x34cdd701
- (void)coreDAVLogDiagnosticMessage:(id)message atLevel:(int)level;	// 0x34ce031d
- (int)coreDAVLogLevel;	// 0x34ce02fd
- (void)coreDAVLogTransmittedDataPartial:(id)partial;	// 0x34ce036d
- (int)coreDAVOutputLevel;	// 0x34ce0315
- (void)coreDAVTransmittedDataFinished;	// 0x34ce038d
- (void)dealloc;	// 0x34cda911
- (void)discoveryTask:(id)task gotAccountInfo:(id)info error:(id)error;	// 0x34cdf7fd
- (void)dropPowerAssertions;	// 0x34cdff01
// converted property getter: - (id)host;	// 0x34cdc11d
- (BOOL)isCalDAVAccount;	// 0x34cdffa1
- (BOOL)isEqualToAccount:(id)account;	// 0x34cdffa5
// declared property getter: - (BOOL)isRefreshing;	// 0x34ce0391
// declared property getter: - (BOOL)isWritable;	// 0x34cdc69d
// declared property getter: - (id)itemIDsToMoveActions;	// 0x34ce0409
- (id)localizedIdenticalAccountFailureMessage;	// 0x34ce01d5
- (id)localizedInvalidPasswordMessage;	// 0x34ce024d
// declared property getter: - (id)mainPrincipal;	// 0x34ce0429
// declared property getter: - (id)movedItemURLStrings;	// 0x34ce0419
// declared property getter: - (BOOL)needsAccountPropertyRefresh;	// 0x34ce03e9
// declared property getter: - (id)ocurrenceCacheEndDate;	// 0x34cdd371
// declared property getter: - (id)ocurrenceCacheStartDate;	// 0x34cdd339
// declared property getter: - (int)overriddenPort;	// 0x34cdc071
// declared property getter: - (id)overriddenScheme;	// 0x34cdc101
// declared property getter: - (id)overriddenServer;	// 0x34cdbff5
- (void)performSearchQuery:(id)query;	// 0x34cdf1e1
// converted property getter: - (int)port;	// 0x34cdc2e9
// declared property getter: - (int)preferredEventDaysToSync;	// 0x34ce0471
// declared property getter: - (int)preferredToDoDaysToSync;	// 0x34ce0491
// converted property getter: - (id)principalURL;	// 0x34cdc399
// declared property getter: - (id)principals;	// 0x34ce0461
- (id)properties;	// 0x34cdab91
- (void)reattainPowerAssertions;	// 0x34cdff51
- (void)refreshActor:(id)actor didCompleteWithError:(id)error;	// 0x34cdde81
// declared property getter: - (id)refreshContext;	// 0x34ce03b1
- (void)refreshWithContext:(id)context;	// 0x34cdec2d
- (void)releasePowerAssertion;	// 0x34cdfe61
- (void)reloadCalendars;	// 0x34cdd00d
- (void)removeCalendar:(id)calendar;	// 0x34cdc921
- (void)removePrincipal:(id)principal;	// 0x34cdd12d
- (void)retainPowerAssertion;	// 0x34cdfdfd
// converted property getter: - (id)scheme;	// 0x34cdc1e1
// declared property getter: - (id)searchPropertySet;	// 0x34cdc649
- (BOOL)searchQueriesRunning;	// 0x34cdf7c9
// declared property getter: - (BOOL)searchQueriesShouldCancel;	// 0x34ce04b1
- (id)serverBaseURL;	// 0x34cdc4e1
// declared property getter: - (id)serverVersion;	// 0x34cdd169
- (void)setAccountDescription:(id)description;	// 0x34cdc585
// declared property setter: - (void)setCalDAVAccountVersion:(int)version;	// 0x34cdbea9
// declared property setter: - (void)setCollectionSetURL:(id)url;	// 0x34cdc60d
// converted property setter: - (void)setHost:(id)host;	// 0x34cdc159
// declared property setter: - (void)setIsRefreshing:(BOOL)refreshing;	// 0x34ce03a1
// declared property setter: - (void)setIsWritable:(BOOL)writable;	// 0x34cdc709
// declared property setter: - (void)setMainPrincipal:(id)principal;	// 0x34ce043d
// declared property setter: - (void)setNeedsAccountPropertyRefresh:(BOOL)refresh;	// 0x34ce03f9
// declared property setter: - (void)setOverriddenPort:(int)port;	// 0x34cdc011
// declared property setter: - (void)setOverriddenScheme:(id)scheme;	// 0x34cdc0a5
// declared property setter: - (void)setOverriddenServer:(id)server;	// 0x34cdbf99
// converted property setter: - (void)setPort:(int)port;	// 0x34cdc2a5
// declared property setter: - (void)setPreferredEventDaysToSync:(int)sync;	// 0x34ce0481
// declared property setter: - (void)setPreferredToDoDaysToSync:(int)sync;	// 0x34ce04a1
// converted property setter: - (void)setPrincipalURL:(id)url;	// 0x34cdc3b9
// declared property setter: - (void)setRefreshContext:(id)context;	// 0x34ce03c5
// converted property setter: - (void)setScheme:(id)scheme;	// 0x34cdc21d
// declared property setter: - (void)setSearchPropertySet:(id)set;	// 0x34cdc659
// declared property setter: - (void)setSearchQueriesShouldCancel:(BOOL)cancel;	// 0x34ce04c1
// declared property setter: - (void)setServerVersion:(id)version;	// 0x34cdd1d9
// declared property setter: - (void)setSubscribedCalendars:(id)calendars;	// 0x34cdbdb9
// converted property setter: - (void)setUseSSL:(BOOL)ssl;	// 0x34cdc335
// converted property setter: - (void)setUsername:(id)username;	// 0x34cdbf0d
// declared property setter: - (void)setWasMigrated:(BOOL)migrated;	// 0x34cdc801
// declared property getter: - (BOOL)shouldFilterEventSyncTimeRange;	// 0x34cdd3a9
// declared property getter: - (BOOL)shouldFilterSyncTimeRangeForInbox;	// 0x34cdd441
// declared property getter: - (BOOL)shouldFilterTodoSyncTimeRange;	// 0x34cdd3f5
- (BOOL)shouldLogTransmittedData;	// 0x34ce0361
- (void)shutdown;	// 0x34cdf7f9
- (id)spinnerIdentifiers;	// 0x34cddce5
- (id)stateString;	// 0x34cdb0a9
// declared property getter: - (id)subscribedCalendars;	// 0x34cdbe55
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x34cdb099
// declared property getter: - (BOOL)supportsEvents;	// 0x34cdd529
// declared property getter: - (BOOL)supportsReminders;	// 0x34cdd4ad
- (void)task:(id)task didFinishWithError:(id)error;	// 0x34cdeec9
// converted property getter: - (id)taskManager;	// 0x34cdd531
- (BOOL)upgradeAccount;	// 0x34cdbc39
// converted property getter: - (BOOL)useSSL;	// 0x34cdc369
// converted property getter: - (id)username;	// 0x34cdbeed
- (BOOL)usesTokenAuth;	// 0x34cdd52d
// declared property getter: - (id)viewedTimeZone;	// 0x34cdd31d
// declared property getter: - (BOOL)wasMigrated;	// 0x34cdc74d
- (id)wellKnownPaths;	// 0x34cdfa11
@end

