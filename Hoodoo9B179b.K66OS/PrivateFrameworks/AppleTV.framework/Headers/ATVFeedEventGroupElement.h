/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSString, BRXMLElement, NSDate, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedEventGroupElement : ATVFeedRootElement {
@private
	NSString *_title;	// 52 = 0x34
	int _refreshIntervalSec;	// 56 = 0x38
	NSDate *_startDate;	// 60 = 0x3c
	BOOL _beginPlaybackAtStartDate;	// 64 = 0x40
	NSArray *_events;	// 68 = 0x44
	BOOL _showChapterMarkers;	// 72 = 0x48
	BOOL _showDescriptionOnChapterSkip;	// 73 = 0x49
	BRXMLElement *_xml;	// 76 = 0x4c
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x303c6a35; S=0x303c6a45; @synthesize=_beginPlaybackAtStartDate
@property(retain, nonatomic) NSArray *events;	// G=0x303c6a55; S=0x303c6a65; @synthesize=_events
@property(assign, nonatomic) int refreshIntervalSec;	// G=0x303c69e1; S=0x303c69f1; @synthesize=_refreshIntervalSec
@property(assign, nonatomic) BOOL showChapterMarkers;	// G=0x303c6a89; S=0x303c6a99; @synthesize=_showChapterMarkers
@property(assign, nonatomic) BOOL showDescriptionOnChapterSkip;	// G=0x303c6aa9; S=0x303c6ab9; @synthesize=_showDescriptionOnChapterSkip
@property(retain, nonatomic) NSDate *startDate;	// G=0x303c6a01; S=0x303c6a11; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x303c69ad; S=0x303c69bd; @synthesize=_title
@property(readonly, assign, nonatomic) BRXMLElement *xml;	// G=0x303c6ac9; @synthesize=_xml
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x303c65d5
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x303c6a35
- (void)dealloc;	// 0x303c6925
// declared property getter: - (id)events;	// 0x303c6a55
// declared property getter: - (int)refreshIntervalSec;	// 0x303c69e1
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x303c6a45
// declared property setter: - (void)setEvents:(id)events;	// 0x303c6a65
// declared property setter: - (void)setRefreshIntervalSec:(int)sec;	// 0x303c69f1
// declared property setter: - (void)setShowChapterMarkers:(BOOL)markers;	// 0x303c6a99
// declared property setter: - (void)setShowDescriptionOnChapterSkip:(BOOL)skip;	// 0x303c6ab9
// declared property setter: - (void)setStartDate:(id)date;	// 0x303c6a11
// declared property setter: - (void)setTitle:(id)title;	// 0x303c69bd
// declared property getter: - (BOOL)showChapterMarkers;	// 0x303c6a89
// declared property getter: - (BOOL)showDescriptionOnChapterSkip;	// 0x303c6aa9
// declared property getter: - (id)startDate;	// 0x303c6a01
// declared property getter: - (id)title;	// 0x303c69ad
// declared property getter: - (id)xml;	// 0x303c6ac9
@end

