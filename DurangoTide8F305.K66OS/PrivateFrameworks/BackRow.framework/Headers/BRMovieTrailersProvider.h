/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRNetworkMediaProvider.h"

@class NSMutableArray;

@interface BRMovieTrailersProvider : BRNetworkMediaProvider {
@private
	NSMutableArray *_mediaCollections;	// 12 = 0xc
	int _lastError;	// 16 = 0x10
}
@property(readonly, assign) int lastError;	// G=0x3295455d; converted property
+ (void)initialize;	// 0x3293576d
+ (BOOL)trailersAvailable;	// 0x32954559
- (id)init;	// 0x32935891
- (BOOL)_addMediaAsset:(id)asset;	// 0x329379dd
- (void)_loadTrailers;	// 0x3293692d
- (void)_loadTrailersWithResolution:(id)resolution forURL:(id)url;	// 0x32936a9d
- (void)_networkStatusChanged:(id)changed;	// 0x32935955
- (void)_postLoadedNotification:(id)notification;	// 0x3293838d
- (void)dealloc;	// 0x32954621
- (int)errorCodeForProvider;	// 0x329545a9
// converted property getter: - (int)lastError;	// 0x3295455d
- (int)load;	// 0x32935a79
- (id)machineID;	// 0x32935a49
- (id)mediaForEntityName:(id)entityName;	// 0x32937cd9
- (id)mediaTypes;	// 0x3295456d
- (id)providerID;	// 0x32935a6d
- (int)unload;	// 0x32954691
@end

