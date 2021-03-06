/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVLeafDataPayload.h"
#import "DADataElement.h"
#import "CalDAVCalendarItemProtocol.h"

@class NSArray, NSData, CalDAVCalendarServerScheduleChangesItem, NSString, NSURL, NSNumber;

@interface DACalDAViCalItem : NSObject <CoreDAVLeafDataPayload, DADataElement, CalDAVCalendarItemProtocol> {
	NSURL *_serverID;	// 4 = 0x4
	NSNumber *_clientID;	// 8 = 0x8
	NSString *_syncKey;	// 12 = 0xc
	NSString *_scheduleTag;	// 16 = 0x10
	void *_calItem;	// 20 = 0x14
	NSData *_dataPayload;	// 24 = 0x18
	CalDAVCalendarServerScheduleChangesItem *_scheduleChanges;	// 28 = 0x1c
	BOOL isMigrate;	// 32 = 0x20
@private
	BOOL _isMigrate;	// 33 = 0x21
}
@property(readonly, assign) void *calItem;	// G=0x33071205; @synthesize=_calItem
@property(readonly, assign) NSArray *childrenOrder;
@property(retain) NSNumber *clientID;	// G=0x330711bd; S=0x330711d1; @synthesize=_clientID
@property(readonly, assign) NSData *dataPayload;	// G=0x33070ed9; @synthesize=_dataPayload
@property(readonly, assign) NSString *filename;	// G=0x3306fb61; 
@property(assign) BOOL isMigrate;	// G=0x3307124d; S=0x3307125d; @synthesize=_isMigrate
@property(assign) void *localItem;	// G=0x33071019; S=0x33071029; converted property
@property(retain) CalDAVCalendarServerScheduleChangesItem *scheduleChanges;	// G=0x33071215; S=0x33071229; @synthesize=_scheduleChanges
@property(retain) NSString *scheduleTag;	// G=0x3306fbfd; S=0x3306fc51; 
@property(retain) NSURL *serverID;	// G=0x33071185; S=0x33071199; @synthesize=_serverID
@property(readonly, assign) BOOL statusChanged;	// G=0x33070ff9; 
@property(readonly, assign) NSString *syncKey;	// G=0x330711f5; @synthesize=_syncKey
@property(readonly, assign) NSString *uniqueIdentifier;	// G=0x3306fb1d; 
- (id)initWithCalRecord:(void *)calRecord;	// 0x3306f8a9
- (id)initWithURL:(id)url eTag:(id)tag dataPayload:(id)payload inContainerWithURL:(id)url4 withAccountInfoProvider:(id)accountInfoProvider;	// 0x3306f819
- (BOOL)_addOrModifyEvent:(id)event inICSCalendar:(id)icscalendar withContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge inMobileCalendar:(id)mobileCalendar;	// 0x3306fcc9
- (BOOL)_addOrModifyTask:(id)task inICSCalendar:(id)icscalendar withContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge inMobileCalendar:(id)mobileCalendar;	// 0x330704fd
- (void)_fixUpCalendarForServer:(id)server;	// 0x33070c01
// declared property getter: - (void *)calItem;	// 0x33071205
// declared property getter: - (id)clientID;	// 0x330711bd
// declared property getter: - (id)dataPayload;	// 0x33070ed9
- (void)dealloc;	// 0x3306fa51
- (BOOL)deleteFromContainer:(void *)container;	// 0x3307112d
- (id)description;	// 0x3306f995
// declared property getter: - (id)filename;	// 0x3306fb61
// declared property getter: - (BOOL)isMigrate;	// 0x3307124d
- (BOOL)loadLocalItemWithAccount:(id)account;	// 0x330710a5
// converted property getter: - (void *)localItem;	// 0x33071019
- (BOOL)saveAfterMapWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x33070bfd
- (BOOL)saveServerIDToExistingItem;	// 0x33071129
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account;	// 0x33070b7d
- (BOOL)saveWithLocalObject:(void *)localObject toContainer:(void *)container shouldMergeProperties:(BOOL)properties outMergeDidChooseLocalProperties:(BOOL *)outMerge account:(id)account calendar:(id)calendar;	// 0x3307074d
// declared property getter: - (id)scheduleChanges;	// 0x33071215
// declared property getter: - (id)scheduleTag;	// 0x3306fbfd
// declared property getter: - (id)serverID;	// 0x33071185
// declared property setter: - (void)setClientID:(id)anId;	// 0x330711d1
// declared property setter: - (void)setIsMigrate:(BOOL)migrate;	// 0x3307125d
// converted property setter: - (void)setLocalItem:(void *)item;	// 0x33071029
// declared property setter: - (void)setScheduleChanges:(id)changes;	// 0x33071229
// declared property setter: - (void)setScheduleTag:(id)tag;	// 0x3306fc51
// declared property setter: - (void)setServerID:(id)anId;	// 0x33071199
// declared property getter: - (BOOL)statusChanged;	// 0x33070ff9
// declared property getter: - (id)syncKey;	// 0x330711f5
// declared property getter: - (id)uniqueIdentifier;	// 0x3306fb1d
@end

