/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CdnRanker : NSObject {
@private
	shared_ptr<netflix::EDSClient::CdnSelection> cdnSelection;	// 4 = 0x4
	NSMutableArray *rankedCdnList_;	// 12 = 0xc
	double cdnSelectionStartTime_;	// 16 = 0x10
	double cdnSelectionTimeElapsed_;	// 24 = 0x18
	unsigned maxDownloadables_;	// 32 = 0x20
	unsigned fastSelectionThreshold_;	// 36 = 0x24
}
@property(readonly, assign) shared_ptr<netflix::EDSClient::CdnSelection> cdnSelection;	// G=0x360edac8; converted property
@property(assign) double cdnSelectionStartTime;	// G=0x360ed9c4; S=0x360ed97c; @synthesize=cdnSelectionStartTime_
@property(assign) double cdnSelectionTimeElapsed;	// G=0x360eda54; S=0x360eda0c; @synthesize=cdnSelectionTimeElapsed_
@property(assign) unsigned fastSelectionThreshold;	// G=0x360ed71c; S=0x360ed730; @synthesize=fastSelectionThreshold_
@property(assign) unsigned maxDownloadables;	// G=0x360ed744; S=0x360ed758; @synthesize=maxDownloadables_
@property(retain) NSMutableArray *rankedCdnList;	// G=0x360ed95c; S=0x360ed928; @synthesize=rankedCdnList_
+ (id)sharedInstance;	// 0x360ed7d8
- (id)init;	// 0x360eee3c
- (id).cxx_construct;	// 0x360ed76c
- (void).cxx_destruct;	// 0x360eda9c
- (void)abort;	// 0x360edbac
- (BOOL)buildRankedCdnList:(const shared_ptr<const netflix::ase::Manifest> *)list cdnDataList:(shared_ptr<const std::vector<netflix::nccp::CdnEntity, std::allocator<netflix::nccp::CdnEntity> > > *)list2 rankingMethod:(int)method measurementMethod:(int)method4 defaultTrackCombinations:(id)combinations;	// 0x360edbc0
// converted property getter: - (shared_ptr<netflix::EDSClient::CdnSelection>)cdnSelection;	// 0x360edac8
// declared property getter: - (double)cdnSelectionStartTime;	// 0x360ed9c4
// declared property getter: - (double)cdnSelectionTimeElapsed;	// 0x360eda54
- (void)dealloc;	// 0x360ed798
// declared property getter: - (unsigned)fastSelectionThreshold;	// 0x360ed71c
// declared property getter: - (unsigned)maxDownloadables;	// 0x360ed744
// declared property getter: - (id)rankedCdnList;	// 0x360ed95c
- (void)selectCdnByCdnId:(unsigned)anId;	// 0x360edb14
// declared property setter: - (void)setCdnSelectionStartTime:(double)time;	// 0x360ed97c
// declared property setter: - (void)setCdnSelectionTimeElapsed:(double)elapsed;	// 0x360eda0c
// declared property setter: - (void)setFastSelectionThreshold:(unsigned)threshold;	// 0x360ed730
// declared property setter: - (void)setMaxDownloadables:(unsigned)downloadables;	// 0x360ed758
// declared property setter: - (void)setRankedCdnList:(id)list;	// 0x360ed928
@end

