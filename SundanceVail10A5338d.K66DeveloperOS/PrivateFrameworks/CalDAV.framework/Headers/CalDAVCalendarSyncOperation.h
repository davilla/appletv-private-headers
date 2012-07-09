/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@class NSError, NSString;
@protocol CalDAVCalendar, CalDAVCalendarSyncDelegate;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {
	BOOL _getScheduleTags;	// 56 = 0x38
	BOOL _getScheduleChanges;	// 57 = 0x39
	NSError *_savedError;	// 60 = 0x3c
	NSString *_nextCtag;	// 64 = 0x40
	id<CalDAVCalendar> _calendar;	// 68 = 0x44
}
@property(assign, nonatomic) id<CalDAVCalendarSyncDelegate> delegate;	// @dynamic
@property(assign) BOOL getScheduleChanges;	// G=0x338f961d; S=0x338f9635; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x338f95ed; S=0x338f9605; @synthesize=_getScheduleTags
- (id)initWithPrincipal:(id)principal calendar:(id)calendar nextCtag:(id)ctag;	// 0x338f823d
- (id)_distantFutureEndDate;	// 0x338f83a5
- (void)_finishWithError:(id)error;	// 0x338f8319
- (void)_processAddedOrModified:(id)modified removed:(id)removed;	// 0x338f8b21
- (void)_reallySyncCalendar;	// 0x338f84b1
- (void)_syncEventsForMerge;	// 0x338f8b61
- (void)containerSyncTask:(id)task completedWithNewCTag:(id)newCTag newSyncToken:(id)token addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x338f9205
- (void)containerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x338f91ed
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x338f8e25
- (id)copyLocalETagsForURLs:(id)urls inFolderWithURL:(id)url;	// 0x338f8d25
- (void)dealloc;	// 0x338f82b5
// declared property getter: - (BOOL)getScheduleChanges;	// 0x338f961d
// declared property getter: - (BOOL)getScheduleTags;	// 0x338f95ed
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x338f9635
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x338f9605
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;	// 0x338f8f21
- (BOOL)setLocalScheduleTag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;	// 0x338f9015
- (void)syncCalendar;	// 0x338f88dd
- (BOOL)syncDeleteTask:(id)task error:(id)error;	// 0x338f917d
- (BOOL)syncPutTask:(id)task completedWithNewETag:(id)newETag error:(id)error;	// 0x338f9109
@end
