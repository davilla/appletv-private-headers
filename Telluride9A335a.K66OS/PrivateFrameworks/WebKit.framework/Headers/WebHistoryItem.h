/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "NSCopying.h"

@class WebHistoryItemPrivate;

@interface WebHistoryItem : NSObject <NSCopying> {
@private
	WebHistoryItemPrivate *_private;	// 4 = 0x4
}
@property(retain) id RSSFeedReferrer;	// G=0x347cd049; S=0x347cd075; converted property
@property(retain) id alternateTitle;	// G=0x347cc515; S=0x347cc541; converted property
@property(retain) id title;	// G=0x3479a509; S=0x3478b701; converted property
@property(assign) int visitCount;	// G=0x347ccf89; S=0x347ccf15; converted property
+ (void)initWindowWatcherIfNecessary;	// 0x34775bb9
+ (id)entryWithURL:(id)url;	// 0x347cc0a1
+ (void)initialize;	// 0x34771f05
- (id)init;	// 0x347cc135
- (id)initFromDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x3477f4d9
- (id)initWithURL:(id)url target:(id)target parent:(id)parent title:(id)title;	// 0x347ccbd1
- (id)initWithURL:(id)url title:(id)title;	// 0x347cc0e1
- (id)initWithURLString:(id)urlstring title:(id)title displayTitle:(id)title3 lastVisitedTimeInterval:(double)interval;	// 0x34780131
- (id)initWithURLString:(id)urlstring title:(id)title lastVisitedTimeInterval:(double)interval;	// 0x347cc83d
- (id)initWithWebCoreHistoryItem:(PassRefPtr<WebCore::HistoryItem>)webCoreHistoryItem;	// 0x347803f9
// converted property getter: - (id)RSSFeedReferrer;	// 0x347cd049
- (id)URL;	// 0x347cd169
- (id)URLString;	// 0x347808b9
- (unsigned long)_getDailyVisitCounts:(const int **)counts;	// 0x347cc071
- (unsigned long)_getWeeklyVisitCounts:(const int **)counts;	// 0x347cc089
- (BOOL)_lastVisitWasHTTPNonGet;	// 0x347cc05d
- (id)_lastVisitedDate;	// 0x347cca8d
- (void)_mergeAutoCompleteHints:(id)hints;	// 0x347ccf3d
- (void)_recordInitialVisit;	// 0x347ccf75
- (id)_redirectURLs;	// 0x347ccf9d
- (float)_scale;	// 0x3478b3c5
- (BOOL)_scaleIsInitial;	// 0x3479a059
- (CGPoint)_scrollPoint;	// 0x347a2005
- (void)_setLastVisitWasFailure:(BOOL)failure;	// 0x347cc03d
- (void)_setLastVisitedTimeInterval:(double)interval;	// 0x347cd281
- (void)_setScale:(float)scale isInitial:(BOOL)initial;	// 0x34794461
- (void)_setScrollPoint:(CGPoint)point;	// 0x34794425
- (void)_setTransientProperty:(id)property forKey:(id)key;	// 0x347cd2b9
- (void)_setViewportArguments:(id)arguments;	// 0x34799cf9
- (id)_transientPropertyForKey:(id)key;	// 0x34790b99
- (id)_viewportArguments;	// 0x3478b221
- (void)_visitedWithTitle:(id)title increaseVisitCount:(BOOL)count;	// 0x34789a25
// converted property getter: - (id)alternateTitle;	// 0x347cc515
- (id)children;	// 0x347ccb39
- (id)copyWithZone:(NSZone *)zone;	// 0x347cc661
- (void)dealloc;	// 0x3478bcc1
- (id)description;	// 0x347cc27d
- (id)dictionaryRepresentation;	// 0x347cc121
- (id)dictionaryRepresentationIncludingChildren:(BOOL)children;	// 0x34794721
- (void)finalize;	// 0x347cc7b5
- (unsigned)hash;	// 0x347cc4d5
- (BOOL)isEqual:(id)equal;	// 0x347cc469
- (BOOL)isTargetItem;	// 0x347ccb1d
- (BOOL)lastVisitWasFailure;	// 0x347cc029
- (double)lastVisitedTimeInterval;	// 0x347808e5
- (id)originalURLString;	// 0x347cc635
- (CGPoint)scrollPoint;	// 0x347ccf51
// converted property setter: - (void)setAlternateTitle:(id)title;	// 0x347cc541
- (void)setAlwaysAttemptToUsePageCache:(BOOL)usePageCache;	// 0x347cc025
// converted property setter: - (void)setRSSFeedReferrer:(id)referrer;	// 0x347cd075
// converted property setter: - (void)setTitle:(id)title;	// 0x3478b701
- (void)setViewState:(id)state;	// 0x347ccf29
// converted property setter: - (void)setVisitCount:(int)count;	// 0x347ccf15
- (id)target;	// 0x347ccaf1
- (id)targetItem;	// 0x347cd299
// converted property getter: - (id)title;	// 0x3479a509
// converted property getter: - (int)visitCount;	// 0x347ccf89
@end
