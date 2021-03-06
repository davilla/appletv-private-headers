/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import "CalDAVOperation.h"

@class NSString, NSError;
@protocol CalDAVCalendar, CalDAVCalendarSyncDelegate;

@interface CalDAVCalendarSyncOperation : CalDAVOperation {
	BOOL _getScheduleTags;	// 56 = 0x38
	BOOL _getScheduleChanges;	// 57 = 0x39
	NSError *_savedError;	// 60 = 0x3c
	NSString *_nextCtag;	// 64 = 0x40
	id<CalDAVCalendar> _calendar;	// 68 = 0x44
}
@property(assign, nonatomic) id<CalDAVCalendarSyncDelegate> delegate;	// @dynamic
@property(assign) BOOL getScheduleChanges;	// G=0x35aa0245; S=0x35aa0255; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x35aa0265; S=0x35aa0275; @synthesize=_getScheduleTags
- (id)initWithPrincipal:(id)principal calendar:(id)calendar nextCtag:(id)ctag;	// 0x35aa0285
- (id)_distantFutureEndDate;	// 0x35aa111d
- (void)_finishWithError:(id)error;	// 0x35aa1149
- (void)_processAddedOrModified:(id)modified removed:(id)removed;	// 0x35aa0ab5
- (void)_reallySyncCalendar;	// 0x35aa0bb9
- (void)_syncEventsForMerge;	// 0x35aa098d
- (void)containerSyncTask:(id)task completedWithNewCTag:(id)newCTag newSyncToken:(id)token addedOrModified:(id)modified removed:(id)removed error:(id)error;	// 0x35aa0305
- (void)containerSyncTask:(id)task retrievedAddedOrModifiedActions:(id)actions removed:(id)removed;	// 0x35aa0521
- (id)copyAllLocalURLsInFolderWithURL:(id)url;	// 0x35aa0751
- (id)copyLocalETagsForURLs:(id)urls inFolderWithURL:(id)url;	// 0x35aa086d
- (void)dealloc;	// 0x35aa11dd
// declared property getter: - (BOOL)getScheduleChanges;	// 0x35aa0245
// declared property getter: - (BOOL)getScheduleTags;	// 0x35aa0265
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x35aa0255
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x35aa0275
- (BOOL)setLocalETag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;	// 0x35aa0645
- (BOOL)setLocalScheduleTag:(id)tag forItemWithURL:(id)url inFolderWithURL:(id)url3;	// 0x35aa0539
- (void)syncCalendar;	// 0x35aa0af5
@end

