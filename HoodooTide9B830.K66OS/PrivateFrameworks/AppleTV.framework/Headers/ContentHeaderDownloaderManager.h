/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ContentHeaderDownloaderProtocol.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMutableArray, CDNDownloadData, NSCondition;

__attribute__((visibility("hidden")))
@interface ContentHeaderDownloaderManager : NSObject <ContentHeaderDownloaderProtocol> {
@private
	NSCondition *downloadsDone_;	// 4 = 0x4
	NSLock *downloadCompletedLock_;	// 8 = 0x8
	NSMutableArray *contentHeaderDownloadables_;	// 12 = 0xc
	NSMutableArray *downloadedContentHeaderDownloadableData_;	// 16 = 0x10
	int numActualDownloadables_;	// 20 = 0x14
	CDNDownloadData *selectedCdn_;	// 24 = 0x18
	BOOL aborting_;	// 28 = 0x1c
	int audioEncodingType_;	// 32 = 0x20
}
@property(assign) BOOL aborting;	// G=0x32c91cc9; S=0x32c91cd9; @synthesize=aborting_
@property(assign) int audioEncodingType;	// G=0x32c91ce9; S=0x32c91cf9; @synthesize=audioEncodingType_
@property(retain) NSMutableArray *contentHeaderDownloadables;	// G=0x32c91c01; S=0x32c91c15; @synthesize=contentHeaderDownloadables_
@property(retain) NSLock *downloadCompletedLock;	// G=0x32c91bc9; S=0x32c91bdd; @synthesize=downloadCompletedLock_
@property(retain) NSMutableArray *downloadedContentHeaderDownloadableData;	// G=0x32c91c39; S=0x32c91c4d; @synthesize=downloadedContentHeaderDownloadableData_
@property(retain) NSCondition *downloadsDone;	// G=0x32c91b91; S=0x32c91ba5; @synthesize=downloadsDone_
@property(assign) int numActualDownloadables;	// G=0x32c91c71; S=0x32c91c81; @synthesize=numActualDownloadables_
@property(retain) CDNDownloadData *selectedCdn;	// G=0x32c91c91; S=0x32c91ca5; @synthesize=selectedCdn_
+ (id)sharedInstance;	// 0x32c90825
- (id)init;	// 0x32c90905
- (void)abort;	// 0x32c91ae9
// declared property getter: - (BOOL)aborting;	// 0x32c91cc9
// declared property getter: - (int)audioEncodingType;	// 0x32c91ce9
- (void)contentDownloadableFinished:(BOOL)finished bitRate:(unsigned)rate contentProfile:(int)profile cdnId:(unsigned)anId bcp47:(id)a47;	// 0x32c914fd
- (void)contentDownloadableForPreferredBitrateFinished:(BOOL)preferredBitrateFinished contentData:(id)data;	// 0x32c91a01
// declared property getter: - (id)contentHeaderDownloadables;	// 0x32c91c01
- (void)dealloc;	// 0x32c90a05
// declared property getter: - (id)downloadCompletedLock;	// 0x32c91bc9
- (int)downloadContentHeaders:(int)headers;	// 0x32c90acd
// declared property getter: - (id)downloadedContentHeaderDownloadableData;	// 0x32c91c39
// declared property getter: - (id)downloadsDone;	// 0x32c91b91
// declared property getter: - (int)numActualDownloadables;	// 0x32c91c71
- (void)reset;	// 0x32c91afd
// declared property getter: - (id)selectedCdn;	// 0x32c91c91
// declared property setter: - (void)setAborting:(BOOL)aborting;	// 0x32c91cd9
// declared property setter: - (void)setAudioEncodingType:(int)type;	// 0x32c91cf9
// declared property setter: - (void)setContentHeaderDownloadables:(id)downloadables;	// 0x32c91c15
// declared property setter: - (void)setDownloadCompletedLock:(id)lock;	// 0x32c91bdd
// declared property setter: - (void)setDownloadedContentHeaderDownloadableData:(id)data;	// 0x32c91c4d
// declared property setter: - (void)setDownloadsDone:(id)done;	// 0x32c91ba5
// declared property setter: - (void)setNumActualDownloadables:(int)downloadables;	// 0x32c91c81
// declared property setter: - (void)setSelectedCdn:(id)cdn;	// 0x32c91ca5
@end

