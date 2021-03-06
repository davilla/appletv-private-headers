/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspectorLoader.h"

@class AVAssetCache, NSMutableArray, AVAssetInspector, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
	AVAssetInspector *_assetInspector;	// 8 = 0x8
	AVAssetCache *_assetCache;	// 12 = 0xc
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 16 = 0x10
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 17 = 0x11
	NSURL *_downloadDestinationURL;	// 20 = 0x14
@private
	OpaqueFigFormatReader *_formatReader;	// 24 = 0x18
	OpaqueFigSimpleMutex *_loadingMutex;	// 28 = 0x1c
	NSMutableArray *_keysAwaitingCompletion;	// 32 = 0x20
	int _status;	// 36 = 0x24
	long _basicInspectionFailureCode;	// 40 = 0x28
	NSURL *_URL;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x30b161e1; @synthesize=_URL
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x30b161f1; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x30b156d1; converted property
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x30b16221; @synthesize=_downloadDestinationURL
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x30b16201; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x30b16211; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
- (id)initWithURL:(id)url;	// 0x30b15525
// declared property getter: - (id)URL;	// 0x30b161e1
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x30b15781
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x30b157e5
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;	// 0x30b15d15
- (OpaqueFigFormatReader *)_formatReader;	// 0x30b15719
- (id)_getAndPruneCompletionsWhileMutexLocked;	// 0x30b1596d
- (BOOL)_inspectionRequiresAFormatReader;	// 0x30b157bd
- (BOOL)_isStreaming;	// 0x30b161c5
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x30b15ce1
- (id)_loadValuesWhileMutexLockedForKeys:(id)keys;	// 0x30b15d41
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x30b1576d
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x30b157c1
- (BOOL)_providesAccurateTiming;	// 0x30b1577d
- (void)_serverHasDied;	// 0x30b161c9
- (void)_setStatus:(int)status figErrorCode:(long)code;	// 0x30b15c09
- (int)_status;	// 0x30b15b25
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;	// 0x30b157c5
- (int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id *)error;	// 0x30b15819
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;	// 0x30b158c5
- (BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;	// 0x30b15b35
// declared property getter: - (id)assetCache;	// 0x30b161f1
// converted property getter: - (id)assetInspector;	// 0x30b156d1
- (void)cancelLoading;	// 0x30b15705
- (id)chapterGroupInfo;	// 0x30b161ad
- (id)copyWithZone:(NSZone *)zone;	// 0x30b156c1
- (void)dealloc;	// 0x30b1559d
// declared property getter: - (id)downloadDestinationURL;	// 0x30b16221
- (XXStruct_pwHToB)duration;	// 0x30b16145
- (void)finalize;	// 0x30b15665
- (BOOL)hasProtectedContent;	// 0x30b161c1
- (BOOL)isComposable;	// 0x30b161bd
- (BOOL)isExportable;	// 0x30b161b5
- (BOOL)isPlayable;	// 0x30b161b1
- (BOOL)isReadable;	// 0x30b161b9
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x30b15f55
- (id)lyrics;	// 0x30b16185
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x30b16201
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x30b16211
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x30b15ad9
@end

