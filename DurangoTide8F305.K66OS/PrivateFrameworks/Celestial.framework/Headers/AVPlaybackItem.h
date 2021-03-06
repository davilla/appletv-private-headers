/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVItem;

@interface AVPlaybackItem : NSObject {
	id _delegate;	// 4 = 0x4
	AVItem *_avItem;	// 8 = 0x8
	OpaqueFigPlaybackItem *_fpItem;	// 12 = 0xc
	XXStruct_pwHToB _currentDuration;	// 16 = 0x10
	CGSize _currentSize;	// 40 = 0x28
	BOOL _currentSizeIsValid;	// 48 = 0x30
	BOOL _isPreparingForInspection;	// 49 = 0x31
	BOOL _isInPlayQueue;	// 50 = 0x32
	double _bookmarkTime;	// 52 = 0x34
	NSDictionary *_streamStateNotificationInfo;	// 60 = 0x3c
	NSDictionary *_lyricsNotificationInfo;	// 64 = 0x40
	NSDictionary *_inspectionNotificationInfo;	// 68 = 0x44
	NSDictionary *_playToEndNotificationInfo;	// 72 = 0x48
}
@property(readonly, retain) AVItem *avItem;	// G=0x3264f795; converted property
@property(readonly, assign) OpaqueFigPlaybackItem *fpItem;	// G=0x3264feb1; converted property
@property(retain) NSDictionary *inspectionNotificationInfo;	// G=0x326502e5; S=0x32653901; @synthesize=_inspectionNotificationInfo
@property(assign) BOOL isInPlayQueue;	// G=0x32653505; S=0x326534f5; @synthesize=_isInPlayQueue
@property(assign) BOOL isPreparingForInspection;	// G=0x32652539; S=0x32652549; @synthesize=_isPreparingForInspection
@property(retain) NSDictionary *lyricsNotificationInfo;	// G=0x3265411d; S=0x326538d5; @synthesize=_lyricsNotificationInfo
@property(retain) NSDictionary *playToEndNotificationInfo;	// G=0x32651195; S=0x32654dbd; @synthesize=_playToEndNotificationInfo
@property(retain) NSDictionary *streamStateNotificationInfo;	// G=0x32654135; S=0x3265414d; @synthesize=_streamStateNotificationInfo
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inArrayOfDictionaries:(id)dictionaries;	// 0x32665579
- (id)initWithDelegate:(id)delegate item:(id)item;	// 0x3264ef05
- (void)addFPListeners;	// 0x32651b51
- (BOOL)addToPlayQueue:(OpaqueFigPlayer *)playQueue afterItem:(OpaqueFigPlaybackItem *)item;	// 0x326533cd
- (void)applyAttributesFromAVItemToFPItem:(id)fpitem;	// 0x32651e15
- (void)applyBookmarkTime;	// 0x326521f5
- (id)attributeForKey:(id)key;	// 0x326539b9
// converted property getter: - (id)avItem;	// 0x3264f795
- (void)cacheCurrentDuration;	// 0x32653215
- (void)cacheCurrentSize;	// 0x326531b5
- (id)chapterImageForImageID:(int)imageID;	// 0x32664d99
- (void)dealloc;	// 0x32654b2d
- (void)ensureFPItem;	// 0x32651515
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)startTime toEndTime:(double)endTime maxCount:(int)count;	// 0x3265a701
- (id)formatDetailsForTracks;	// 0x32664ea9
// converted property getter: - (OpaqueFigPlaybackItem *)fpItem;	// 0x3264feb1
- (void)fpItemNotificationInfo:(id)info;	// 0x32652a1d
- (void)fpItemNotificationName:(id)name userInfo:(id)info;	// 0x32664c75
- (id)fpNotificationNames;	// 0x32651c1d
// declared property getter: - (id)inspectionNotificationInfo;	// 0x326502e5
// declared property getter: - (BOOL)isInPlayQueue;	// 0x32653505
// declared property getter: - (BOOL)isPreparingForInspection;	// 0x32652539
- (id)itemAttribute:(id)attribute forKey:(id)key;	// 0x3265398d
// declared property getter: - (id)lyricsNotificationInfo;	// 0x3265411d
- (void)makeReadyForInspection;	// 0x326523d9
- (id)nextThumbnailTimesStartingAt:(double)at minimumInterval:(double)interval forwards:(BOOL)forwards maxCount:(int)count;	// 0x32665339
// declared property getter: - (id)playToEndNotificationInfo;	// 0x32651195
- (id)propertiesNeededForInspection;	// 0x32652559
- (void)release;	// 0x32664cf9
- (void)removeFPListeners;	// 0x32654cf5
- (void)removeFromPlayQueue:(OpaqueFigPlayer *)playQueue;	// 0x326548fd
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x32664fd1
- (void)setBookmarkTime:(double)time;	// 0x3264f869
// declared property setter: - (void)setInspectionNotificationInfo:(id)info;	// 0x32653901
// declared property setter: - (void)setIsInPlayQueue:(BOOL)playQueue;	// 0x326534f5
// declared property setter: - (void)setIsPreparingForInspection:(BOOL)inspection;	// 0x32652549
- (void)setItemAttribute:(id)attribute value:(id)value forKey:(id)key error:(id *)error;	// 0x32664cd1
// declared property setter: - (void)setLyricsNotificationInfo:(id)info;	// 0x326538d5
// declared property setter: - (void)setPlayToEndNotificationInfo:(id)endNotificationInfo;	// 0x32654dbd
// declared property setter: - (void)setStreamStateNotificationInfo:(id)info;	// 0x3265414d
- (void)stealControlOfAVItem;	// 0x3264fec1
// declared property getter: - (id)streamStateNotificationInfo;	// 0x32654135
@end

