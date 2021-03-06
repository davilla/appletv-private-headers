/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedVideoElement.h"

@class NSDate, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedHTTPLiveStreamingVideoElement : ATVFeedVideoElement {
@private
	BOOL _indefiniteDuration;	// 52 = 0x34
	NSString *_trickPlayConfigURL;	// 56 = 0x38
	NSArray *_eventGroups;	// 60 = 0x3c
	NSArray *_requiredEventGroups;	// 64 = 0x40
	float _bookmarkNetTimeSec;	// 68 = 0x44
	NSDate *_startDate;	// 72 = 0x48
	BOOL _beginPlaybackAtStartDate;	// 76 = 0x4c
}
@property(assign, nonatomic) BOOL beginPlaybackAtStartDate;	// G=0x3332ab09; S=0x3332ab19; @synthesize=_beginPlaybackAtStartDate
@property(assign, nonatomic) float bookmarkNetTimeSec;	// G=0x3332aab5; S=0x3332aac5; @synthesize=_bookmarkNetTimeSec
@property(retain, nonatomic) NSArray *eventGroups;	// G=0x3332aa4d; S=0x3332aa5d; @synthesize=_eventGroups
@property(assign, nonatomic) BOOL indefiniteDuration;	// G=0x3332a9f9; S=0x3332aa09; @synthesize=_indefiniteDuration
@property(retain, nonatomic) NSArray *requiredEventGroups;	// G=0x3332aa81; S=0x3332aa91; @synthesize=_requiredEventGroups
@property(retain, nonatomic) NSDate *startDate;	// G=0x3332aad5; S=0x3332aae5; @synthesize=_startDate
@property(copy, nonatomic) NSString *trickPlayConfigURL;	// G=0x3332aa19; S=0x3332aa29; @synthesize=_trickPlayConfigURL
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3332a649
// declared property getter: - (BOOL)beginPlaybackAtStartDate;	// 0x3332ab09
// declared property getter: - (float)bookmarkNetTimeSec;	// 0x3332aab5
- (void)dealloc;	// 0x3332a971
// declared property getter: - (id)eventGroups;	// 0x3332aa4d
// declared property getter: - (BOOL)indefiniteDuration;	// 0x3332a9f9
// declared property getter: - (id)requiredEventGroups;	// 0x3332aa81
// declared property setter: - (void)setBeginPlaybackAtStartDate:(BOOL)startDate;	// 0x3332ab19
// declared property setter: - (void)setBookmarkNetTimeSec:(float)sec;	// 0x3332aac5
// declared property setter: - (void)setEventGroups:(id)groups;	// 0x3332aa5d
// declared property setter: - (void)setIndefiniteDuration:(BOOL)duration;	// 0x3332aa09
// declared property setter: - (void)setRequiredEventGroups:(id)groups;	// 0x3332aa91
// declared property setter: - (void)setStartDate:(id)date;	// 0x3332aae5
// declared property setter: - (void)setTrickPlayConfigURL:(id)url;	// 0x3332aa29
// declared property getter: - (id)startDate;	// 0x3332aad5
// declared property getter: - (id)trickPlayConfigURL;	// 0x3332aa19
@end

