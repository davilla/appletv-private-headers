/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library

@class MobileCalDAVCalendar, NSMutableSet, NSMutableDictionary;

@interface CalDAVCacheManager : NSObject {
	MobileCalDAVCalendar *_calendar;	// 4 = 0x4
	NSMutableDictionary *_filenameToModifiedLocallyMap;	// 8 = 0x8
	NSMutableSet *_locallyDeletedFilenames;	// 12 = 0xc
	NSMutableDictionary *_uniqueIdentifierToLocalUIDMap;	// 16 = 0x10
	NSMutableDictionary *_notificationToEtagMap;	// 20 = 0x14
}
+ (id)cacheControllerForCalendar:(id)calendar;	// 0x3144bcc5
+ (void)clearAllCacheControllers;	// 0x3144bca5
- (id)init;	// 0x3144be6d
- (void *)_copyCalEventWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3144bfd9
- (void *)_copyCalEventWithUniqueIdentifierInStore:(id)store;	// 0x3144c079
- (void *)_copyEventActionWithFilename:(id)filename;	// 0x3144d1e5
- (void *)_copyEventActionWithFilename:(id)filename forEventWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3144d0e9
- (id)_initWithCalendar:(id)calendar;	// 0x3144bee9
- (id)_notificationEtagPath;	// 0x3144d581
- (id)_notificationToEtagMap;	// 0x3144ca69
- (id)allFilenames;	// 0x3144cf11
- (void)dealloc;	// 0x3144bddd
- (void)endChanges;	// 0x3144bb75
- (id)etagForFilename:(id)filename;	// 0x3144c551
- (id)etagForInvitationWithFilename:(id)filename;	// 0x3144d491
- (id)etagForNotificationWithFilename:(id)filename;	// 0x3144bb0d
- (id)filenameForUID:(id)uid;	// 0x3144c765
- (id)filenamesForInvitationsWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3144cff1
- (void)flushNotificationEtagCache;	// 0x3144c9b1
- (BOOL)isFileLocallyModified:(id)modified;	// 0x3144cbc9
- (int)localUIDForUniqueIdentifier:(id)uniqueIdentifier;	// 0x3144bbc5
- (void)removeInvitationWithFilename:(id)filename;	// 0x3144d4d1
- (void)removeNotificationEtagForFilename:(id)filename;	// 0x3144bae5
- (id)scheduleTagForFilename:(id)filename;	// 0x3144c665
- (void)setETag:(id)tag forEventWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3144c151
- (void)setETag:(id)tag forFilename:(id)filename;	// 0x3144c209
- (void)setETag:(id)tag forInvitationWithFilename:(id)filename uniqueIdentifier:(id)identifier;	// 0x3144d289
- (void)setEventModified:(id)modified;	// 0x3144bc79
- (void)setFilename:(id)filename forUID:(id)uid;	// 0x3144c7fd
- (void)setFilenameLocallyDeleted:(id)deleted;	// 0x3144cc99
- (void)setLocallyModified:(BOOL)modified forFilename:(id)filename;	// 0x3144cd85
- (void)setNotificationEtag:(id)etag forFilename:(id)filename;	// 0x3144bb39
- (void)setScheduleTag:(id)tag forEventWithUniqueIdentifier:(id)uniqueIdentifier;	// 0x3144c309
- (void)setScheduleTag:(id)tag forFilename:(id)filename;	// 0x3144c3c1
- (void)setUIDModified:(id)modified;	// 0x3144cec5
- (void)setUniqueIdentifier:(id)identifier forLocalUID:(int)localUID;	// 0x3144bbf9
- (id)uidForFilename:(id)filename;	// 0x3144c8d9
@end

