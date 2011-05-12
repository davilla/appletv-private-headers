/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import "CalDAVCollectionRefreshOperation.h"


@interface CalDAVInboxRefreshOperation : CalDAVCollectionRefreshOperation {
	BOOL _useScheduleChanges;	// 80 = 0x50
}
@property(assign) BOOL useScheduleChanges;	// G=0x340b5651; S=0x340b563d; converted property
- (id)cachedEtagForFilename:(id)filename;	// 0x340b56c9
- (BOOL)getScheduleTags;	// 0x340b5661
// converted property setter: - (void)setUseScheduleChanges:(BOOL)changes;	// 0x340b563d
- (id)timeRangeFilterStartDate;	// 0x340b5665
- (BOOL)useMultiGet;	// 0x340b564d
// converted property getter: - (BOOL)useScheduleChanges;	// 0x340b5651
- (BOOL)validate:(id)validate error:(id *)error;	// 0x340b56f1
@end

