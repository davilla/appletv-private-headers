/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <NSObject.h> // Unknown library


@interface CalDAVRefreshContext : NSObject {
	BOOL _isForced;	// 4 = 0x4
	BOOL _isCalendarsOnly;	// 5 = 0x5
	BOOL _didDownloadEvents;	// 6 = 0x6
	BOOL _didSaveDatabase;	// 7 = 0x7
	int _numDownloadedElements;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL didDownloadEvents;	// G=0x340b524d; S=0x340b525d; @synthesize=_didDownloadEvents
@property(assign, nonatomic) BOOL didSaveDatabase;	// G=0x340b522d; S=0x340b523d; @synthesize=_didSaveDatabase
@property(assign, nonatomic) BOOL isCalendarsOnly;	// G=0x340b526d; S=0x340b527d; @synthesize=_isCalendarsOnly
@property(assign, nonatomic) BOOL isForced;	// G=0x340b528d; S=0x340b529d; @synthesize=_isForced
@property(assign, nonatomic) int numDownloadedElements;	// G=0x340b520d; S=0x340b521d; @synthesize=_numDownloadedElements
+ (id)defaultContext;	// 0x340b52ad
// declared property getter: - (BOOL)didDownloadEvents;	// 0x340b524d
// declared property getter: - (BOOL)didSaveDatabase;	// 0x340b522d
// declared property getter: - (BOOL)isCalendarsOnly;	// 0x340b526d
// declared property getter: - (BOOL)isForced;	// 0x340b528d
// declared property getter: - (int)numDownloadedElements;	// 0x340b520d
// declared property setter: - (void)setDidDownloadEvents:(BOOL)downloadEvents;	// 0x340b525d
// declared property setter: - (void)setDidSaveDatabase:(BOOL)saveDatabase;	// 0x340b523d
// declared property setter: - (void)setIsCalendarsOnly:(BOOL)only;	// 0x340b527d
// declared property setter: - (void)setIsForced:(BOOL)forced;	// 0x340b529d
// declared property setter: - (void)setNumDownloadedElements:(int)elements;	// 0x340b521d
@end
