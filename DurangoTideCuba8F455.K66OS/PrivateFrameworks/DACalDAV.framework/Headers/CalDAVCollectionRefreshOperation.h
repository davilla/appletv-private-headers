/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <AYOperation.h> // Unknown library

@class MobileCalDAVCalendar, MobileCalDAVAccount, CalDAVCacheManager;

@interface CalDAVCollectionRefreshOperation : AYOperation {
	MobileCalDAVAccount *_account;	// 64 = 0x40
	MobileCalDAVCalendar *_calendar;	// 68 = 0x44
	CalDAVCacheManager *_cache;	// 72 = 0x48
	id _delegate;	// 76 = 0x4c
}
@property(readonly, retain) MobileCalDAVAccount *account;	// G=0x3144d8a5; converted property
@property(readonly, retain) CalDAVCacheManager *cache;	// G=0x3144d8bd; converted property
+ (id)propertiesForCollection;	// 0x3144eda9
+ (id)propertiesForResources;	// 0x3144ee7d
- (id)initWithAccount:(id)account calendar:(id)calendar delegate:(id)delegate;	// 0x3144efd9
- (void)_delegateDeleteResourcesWithFilenames:(id)filenames;	// 0x3144dbf5
- (void)_delegateDidAbortRefresh;	// 0x3144dbb5
- (void)_delegateDidCompleteRefresh;	// 0x3144db75
- (void)_delegateProcessError:(id)error;	// 0x3144db19
- (void)_delegateProcessResources:(id)resources;	// 0x3144dacd
- (BOOL)_delegateShouldAcceptEntryModification:(id)_delegate isDeleted:(BOOL)deleted;	// 0x3144da1d
- (BOOL)_delegateShouldContinueProcessingResources;	// 0x3144da7d
- (BOOL)_gets:(id)gets error:(id *)error;	// 0x3144e09d
- (BOOL)_multiget:(id)multiget error:(id *)error;	// 0x3144e951
// converted property getter: - (id)account;	// 0x3144d8a5
// converted property getter: - (id)cache;	// 0x3144d8bd
- (id)cachedEtagForFilename:(id)filename;	// 0x3144d9f5
- (void)dealloc;	// 0x3144ef59
- (BOOL)download:(id)download error:(id *)error;	// 0x3144d9b1
- (BOOL)getScheduleTags;	// 0x3144d96d
- (id)listing:(id *)listing;	// 0x3144de71
- (id)path;	// 0x3144d991
- (id)reconcile:(id)reconcile;	// 0x3144e4e1
- (void)refresh;	// 0x3144dc41
- (id)timeRangeFilterEndDate;	// 0x3144d8cd
- (id)timeRangeFilterStartDate;	// 0x3144d91d
- (BOOL)useMultiGet;	// 0x3144d8b5
- (BOOL)useScheduleChanges;	// 0x3144d8b9
- (BOOL)validate:(id)validate error:(id *)error;	// 0x3144d8a1
@end
