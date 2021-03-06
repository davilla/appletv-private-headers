/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVContainerSyncTaskGroup.h> // Unknown library

@class NSDateComponents;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
	BOOL _getScheduleTags;	// 137 = 0x89
	BOOL _getScheduleChanges;	// 138 = 0x8a
	BOOL _syncEvents;	// 139 = 0x8b
	BOOL _syncTodos;	// 140 = 0x8c
	BOOL _supportsExtendedCalendarQuery;	// 141 = 0x8d
	int _fetchingEtagState;	// 144 = 0x90
	NSDateComponents *_eventFilterStartDate;	// 148 = 0x94
	NSDateComponents *_eventFilterEndDate;	// 152 = 0x98
	NSDateComponents *_todoFilterStartDate;	// 156 = 0x9c
	NSDateComponents *_todoFilterEndDate;	// 160 = 0xa0
}
@property(retain) NSDateComponents *eventFilterEndDate;	// G=0x302d2c4d; S=0x302d2c29; @synthesize=_eventFilterEndDate
@property(retain) NSDateComponents *eventFilterStartDate;	// G=0x302d2c11; S=0x302d2bed; @synthesize=_eventFilterStartDate
@property(assign) BOOL getScheduleChanges;	// G=0x302d2b15; S=0x302d2b25; @synthesize=_getScheduleChanges
@property(assign) BOOL getScheduleTags;	// G=0x302d2b35; S=0x302d2b45; @synthesize=_getScheduleTags
@property(assign) BOOL supportsExtendedCalendarQuery;	// G=0x302d2ab5; S=0x302d2ac5; @synthesize=_supportsExtendedCalendarQuery
@property(assign) BOOL syncEvents;	// G=0x302d2af5; S=0x302d2b05; @synthesize=_syncEvents
@property(assign) BOOL syncTodos;	// G=0x302d2ad5; S=0x302d2ae5; @synthesize=_syncTodos
@property(retain) NSDateComponents *todoFilterEndDate;	// G=0x302d2cc5; S=0x302d2ca1; @synthesize=_todoFilterEndDate
@property(retain) NSDateComponents *todoFilterStartDate;	// G=0x302d2c89; S=0x302d2c65; @synthesize=_todoFilterStartDate
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions accountInfoProvider:(id)provider taskManager:(id)manager appSpecificCalendarItemClass:(Class)aClass;	// 0x302d2b55
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token actions:(id)actions getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes accountInfoProvider:(id)provider taskManager:(id)manager appSpecificCalendarItemClass:(Class)aClass;	// 0x302d2d3d
- (id)initWithFolderURL:(id)folderURL previousCTag:(id)tag previousSyncToken:(id)token getScheduleTags:(BOOL)tags getScheduleChanges:(BOOL)changes accountInfoProvider:(id)provider taskManager:(id)manager;	// 0x302d2cdd
- (BOOL)_shouldFetchEventsForState:(int)state;	// 0x302d32f9
- (BOOL)_shouldFetchTodosForState:(int)state;	// 0x302d32cd
- (void)applyAdditionalPropertiesFromPostTask:(id)postTask;	// 0x302d335d
- (void)applyAdditionalPropertiesFromPutTask:(id)putTask;	// 0x302d3419
- (id)copyAdditionalResourcePropertiesToFetch;	// 0x302d2d9d
- (id)copyGetEtagTaskWithPropertiesToFind:(id)find;	// 0x302d2e95
- (id)copyGetTaskWithURL:(id)url;	// 0x302d35bd
- (id)copyMultiGetTaskWithURLs:(id)urls;	// 0x302d35f5
- (id)copyPutTaskWithPayloadItem:(id)payloadItem forAction:(id)action;	// 0x302d34d5
- (id)dataContentType;	// 0x302d2aa9
- (void)dealloc;	// 0x302d3695
// declared property getter: - (id)eventFilterEndDate;	// 0x302d2c4d
// declared property getter: - (id)eventFilterStartDate;	// 0x302d2c11
// declared property getter: - (BOOL)getScheduleChanges;	// 0x302d2b15
// declared property getter: - (BOOL)getScheduleTags;	// 0x302d2b35
// declared property setter: - (void)setEventFilterEndDate:(id)date;	// 0x302d2c29
// declared property setter: - (void)setEventFilterStartDate:(id)date;	// 0x302d2bed
// declared property setter: - (void)setGetScheduleChanges:(BOOL)changes;	// 0x302d2b25
// declared property setter: - (void)setGetScheduleTags:(BOOL)tags;	// 0x302d2b45
// declared property setter: - (void)setSupportsExtendedCalendarQuery:(BOOL)query;	// 0x302d2ac5
// declared property setter: - (void)setSyncEvents:(BOOL)events;	// 0x302d2b05
// declared property setter: - (void)setSyncTodos:(BOOL)todos;	// 0x302d2ae5
// declared property setter: - (void)setTodoFilterEndDate:(id)date;	// 0x302d2ca1
// declared property setter: - (void)setTodoFilterStartDate:(id)date;	// 0x302d2c65
- (BOOL)shouldFetchMoreETags;	// 0x302d3325
- (BOOL)shouldFetchResourceWithEtag:(id)etag propertiesToValues:(id)values;	// 0x302d2e15
// declared property getter: - (BOOL)supportsExtendedCalendarQuery;	// 0x302d2ab5
// declared property getter: - (BOOL)syncEvents;	// 0x302d2af5
// declared property getter: - (BOOL)syncTodos;	// 0x302d2ad5
// declared property getter: - (id)todoFilterEndDate;	// 0x302d2cc5
// declared property getter: - (id)todoFilterStartDate;	// 0x302d2c89
@end

