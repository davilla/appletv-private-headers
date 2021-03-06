/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRChapterGroupProvider.h"
#import "ATVInterstitialGroupProvider.h"
#import "BRMediaAssetDerivesMediaURL.h"
#import "BRXMLMediaAsset.h"

@class ATVInterstitialGroup, ATVFeedDocument, NSMutableArray, NSDictionary, ATVFeedVideoElement, ATVVideoAssetUpdater, NSNumber, ATVMerchant, NSDate;

__attribute__((visibility("hidden")))
@interface ATVVideoAsset : BRXMLMediaAsset <BRMediaAssetDerivesMediaURL, BRChapterGroupProvider, ATVInterstitialGroupProvider> {
	NSDictionary *_data;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
	NSDate *_eventStart;	// 20 = 0x14
	NSMutableArray *_chapterGroups;	// 24 = 0x18
	ATVVideoAssetUpdater *_updater;	// 28 = 0x1c
	ATVFeedDocument *_feedDocument;	// 32 = 0x20
	ATVInterstitialGroup *_interstitials;	// 36 = 0x24
	NSNumber *_bookmarkNetTime;	// 40 = 0x28
	BOOL _startFromStartDate;	// 44 = 0x2c
	ATVFeedVideoElement *_feedElement;	// 48 = 0x30
}
@property(retain, nonatomic) NSNumber *bookmarkNetTime;	// G=0x1f3bad; S=0x1f3bbd; @synthesize=_bookmarkNetTime
@property(readonly, retain) NSMutableArray *chapterGroups;	// G=0x1f3871; converted property
@property(retain, nonatomic) NSDate *eventStart;	// G=0x1f3b7d; S=0x1f3b8d; @synthesize=_eventStart
@property(retain, nonatomic) ATVFeedVideoElement *feedElement;	// G=0x1f3bed; S=0x1f3bfd; @synthesize=_feedElement
@property(readonly, assign, nonatomic) ATVInterstitialGroup *interstitials;	// G=0x1f3b9d; @synthesize=_interstitials
@property(retain, nonatomic) ATVMerchant *merchant;	// G=0x1f3b5d; S=0x1f3b6d; @synthesize=_merchant
@property(readonly, assign, nonatomic) NSDictionary *originalPlist;	// G=0x1f3049; 
@property(assign, nonatomic) BOOL startFromStartDate;	// G=0x1f3bcd; S=0x1f3bdd; @synthesize=_startFromStartDate
- (id)initWithDictionary:(id)dictionary;	// 0x1f2b31
- (id)initWithFeedElement:(id)feedElement;	// 0x1f2721
- (id)_currentlyPlayingChapter;	// 0x1f3c0d
- (void)_fetchEventGroups:(id)groups ignoreErrors:(BOOL)errors completionHandler:(id)handler;	// 0x1f3c85
- (id)_processLoadedEventGroupDocument:(id)document;	// 0x1f40b1
- (void)addOrReplaceChapterGroup:(id)group;	// 0x1f36a1
// declared property getter: - (id)bookmarkNetTime;	// 0x1f3bad
- (id)chapterGroupAtIndex:(unsigned)index;	// 0x1f3829
- (unsigned)chapterGroupCount;	// 0x1f37ed
// converted property getter: - (id)chapterGroups;	// 0x1f3871
- (void)dealloc;	// 0x1f3059
// declared property getter: - (id)eventStart;	// 0x1f3b7d
// declared property getter: - (id)feedElement;	// 0x1f3bed
- (BOOL)hasChapterGroupAtIndex:(unsigned)index;	// 0x1f380d
- (id)imageProxy;	// 0x1f38a9
- (id)infoOverlayDescriptionAttributes;	// 0x1f3b1d
// declared property getter: - (id)interstitials;	// 0x1f3b9d
- (id)mediaDescription;	// 0x1f3a05
// declared property getter: - (id)merchant;	// 0x1f3b5d
// declared property getter: - (id)originalPlist;	// 0x1f3049
- (id)rating;	// 0x1f3aa1
- (void)resolveMediaURL:(id)url;	// 0x1f3149
// declared property setter: - (void)setBookmarkNetTime:(id)time;	// 0x1f3bbd
// declared property setter: - (void)setEventStart:(id)start;	// 0x1f3b8d
// declared property setter: - (void)setFeedElement:(id)element;	// 0x1f3bfd
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x1f3b6d
// declared property setter: - (void)setStartFromStartDate:(BOOL)startDate;	// 0x1f3bdd
- (id)startDate;	// 0x1f3635
// declared property getter: - (BOOL)startFromStartDate;	// 0x1f3bcd
- (id)title;	// 0x1f3961
@end

