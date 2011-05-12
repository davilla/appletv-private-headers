/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSError, AVVideoComposition, NSURL, AVPlayerItemInternal, AVAudioMix, NSDate, AVAsset;

@interface AVPlayerItem : NSObject <NSCopying> {
@private
	AVPlayerItemInternal *_playerItem;	// 4 = 0x4
}
@property(assign, nonatomic, getter=_isExternalProtectionRequiredForPlayback, setter=_setExternalProtectionRequiredForPlayback:) BOOL _externalProtectionRequiredForPlayback;	// G=0x34744f31; S=0x34745a69; 
@property(copy, nonatomic, setter=_setProtectedContentPlaybackSupportStorageURL:) NSURL *_protectedContentPlaybackSupportStorageURL;	// G=0x3473e765; S=0x34741a15; 
@property(readonly, assign, nonatomic, getter=_isRental) BOOL _rental;	// G=0x347431e9; 
@property(readonly, assign, nonatomic) NSDate *_rentalExpirationDate;	// G=0x34744a65; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackExpirationDate;	// G=0x347448fd; 
@property(readonly, assign, nonatomic, getter=_isRentalPlaybackStarted) BOOL _rentalPlaybackStarted;	// G=0x34744a0d; 
@property(readonly, assign, nonatomic) NSDate *_rentalPlaybackStartedDate;	// G=0x34744985; 
@property(readonly, assign, nonatomic) NSDate *_rentalStartDate;	// G=0x34744ae1; 
@property(assign) BOOL alwaysMonitorsPlayability;	// G=0x3473f525; S=0x3473f461; converted property
@property(readonly, assign, nonatomic, getter=isApplicationAuthorizedForPlayback) BOOL applicationAuthorizedForPlayback;	// G=0x34740fc5; 
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x3473fa8d; 
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x3473f13d; S=0x34740501; 
@property(readonly, assign, nonatomic, getter=isAuthorizationRequiredForPlayback) BOOL authorizationRequiredForPlayback;	// G=0x3473e86d; 
@property(readonly, assign, nonatomic, getter=isContentAuthorizedForPlayback) BOOL contentAuthorizedForPlayback;	// G=0x34740f71; 
@property(assign) BOOL continuesPlayingDuringPrerollForRateChange;	// G=0x3473f23d; S=0x3473f179; converted property
@property(assign) BOOL continuesPlayingDuringPrerollForSeek;	// G=0x3473f3b1; S=0x3473f2ed; converted property
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x34740b2d; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3473fbe1; @dynamic
@property(assign, nonatomic) XXStruct_pwHToB forwardPlaybackEndTime;	// G=0x34741ca5; S=0x34742555; 
@property(retain) id gaplessInfo;	// G=0x3473ed81; S=0x3473ebed; converted property
@property(retain) id initialDate;	// G=0x3473f82d; S=0x3473f7d9; converted property
@property(retain) id initialEstimatedDate;	// G=0x3473f79d; S=0x3473f749; converted property
@property(assign) BOOL limitReadAhead;	// G=0x3473f699; S=0x3473f5d5; converted property
@property(readonly, assign, nonatomic) NSArray *loadedTimeRanges;	// G=0x3473edbd; 
@property(assign, getter=isNonForcedSubtitleDisplayEnabled) BOOL nonForcedSubtitleDisplayEnabled;	// G=0x3473e601; S=0x3473ea71; converted property
@property(readonly, assign, nonatomic, getter=isPlaybackBufferEmpty) BOOL playbackBufferEmpty;	// G=0x3473eead; 
@property(readonly, assign, nonatomic, getter=isPlaybackBufferFull) BOOL playbackBufferFull;	// G=0x3473ef71; 
@property(readonly, assign, nonatomic, getter=isPlaybackLikelyToKeepUp) BOOL playbackLikelyToKeepUp;	// G=0x3473f039; 
@property(readonly, assign, nonatomic) CGSize presentationSize;	// G=0x34740aa5; 
@property(assign, nonatomic) XXStruct_pwHToB reversePlaybackEndTime;	// G=0x34741c2d; S=0x3474245d; 
@property(readonly, assign, nonatomic) NSArray *seekableTimeRanges;	// G=0x3473ee35; 
@property(assign) float soundCheckVolumeNormalization;	// G=0x3473e5c1; S=0x3473eb55; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x3473e581; @dynamic
@property(readonly, assign, nonatomic) NSArray *timedMetadata;	// G=0x3473e9c5; 
@property(readonly, assign, nonatomic) NSArray *tracks;	// G=0x3473f9f9; 
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x3473f101; S=0x34742f65; 
@property(assign) float volumeAdjustment;	// G=0x3473e5e1; S=0x3473eabd; converted property
+ (BOOL)_forNonStreamingURLsFireKVOForAssetWhenReadyForInspection;	// 0x3473e3b9
+ (BOOL)_forStreamingItemsVendAssetWithFigPlaybackItem;	// 0x3473e3a9
+ (id)_initializeProtectedContentPlaybackSupportSessionAsynchronouslyForProvider:(id)provider withOptions:(id)options;	// 0x3474476d
+ (void)_uninitializeProtectedContentPlaybackSupportSession:(id)session;	// 0x34743241
+ (BOOL)automaticallyNotifiesObserversOfAlwaysMonitorsPlayability;	// 0x3473e5a9
+ (BOOL)automaticallyNotifiesObserversOfAsset;	// 0x3473e625
+ (BOOL)automaticallyNotifiesObserversOfAudioMix;	// 0x3473e5b5
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForRateChange;	// 0x3473e5b1
+ (BOOL)automaticallyNotifiesObserversOfContinuesPlayingDuringPrerollForSeek;	// 0x3473e5ad
+ (BOOL)automaticallyNotifiesObserversOfForwardPlaybackEndTime;	// 0x3473e59d
+ (BOOL)automaticallyNotifiesObserversOfGaplessInfo;	// 0x3473e5bd
+ (BOOL)automaticallyNotifiesObserversOfLimitReadAhead;	// 0x3473e5a5
+ (BOOL)automaticallyNotifiesObserversOfLoadedTimeRanges;	// 0x3473e639
+ (BOOL)automaticallyNotifiesObserversOfNonForcedSubtitleDisplayEnabled;	// 0x3473e61d
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferEmpty;	// 0x3473e62d
+ (BOOL)automaticallyNotifiesObserversOfPlaybackBufferFull;	// 0x3473e631
+ (BOOL)automaticallyNotifiesObserversOfPlaybackLikelyToKeepUp;	// 0x3473e629
+ (BOOL)automaticallyNotifiesObserversOfPresentationSize;	// 0x3473e63d
+ (BOOL)automaticallyNotifiesObserversOfReversePlaybackEndTime;	// 0x3473e5a1
+ (BOOL)automaticallyNotifiesObserversOfSeekableTimeRanges;	// 0x3473e635
+ (BOOL)automaticallyNotifiesObserversOfSoundCheckVolumeNormalization;	// 0x3473e5dd
+ (BOOL)automaticallyNotifiesObserversOfStatus;	// 0x3473e621
+ (BOOL)automaticallyNotifiesObserversOfTracks;	// 0x3473e641
+ (BOOL)automaticallyNotifiesObserversOfVideoComposition;	// 0x3473e5b9
+ (BOOL)automaticallyNotifiesObserversOfVolumeAdjustment;	// 0x3473e5fd
+ (void)initialize;	// 0x347431c1
+ (id)playerItemWithAsset:(id)asset;	// 0x34740481
+ (id)playerItemWithURL:(id)url;	// 0x347404c1
- (id)init;	// 0x34743299
- (id)initWithAsset:(id)asset;	// 0x3474034d
- (id)initWithURL:(id)url;	// 0x347403f5
- (id)_URL;	// 0x3473e565
- (void)_addFPListeners;	// 0x34741e59
- (void)_addSyncLayer:(id)layer;	// 0x3473e889
- (BOOL)_alwaysMonitorsPlayability;	// 0x34745549
- (void)_attachToPlayer:(id)player forImmediateEnqueueing:(BOOL)immediateEnqueueing shouldAppendItem:(BOOL)item;	// 0x34746981
- (id)_cachedValueForKey:(id)key;	// 0x347401d9
- (void)_changeStatusToFailedWithError:(id)error;	// 0x3473fac9
- (id)_chapterArrayWithType:(CFStringRef)type;	// 0x34744511
- (void)_configurePlaybackItem;	// 0x34745b05
- (void)_configureProtectedContent;	// 0x34744b59
- (BOOL)_continuesPlayingDuringPrerollForRateChange;	// 0x34745431
- (BOOL)_continuesPlayingDuringPrerollForSeek;	// 0x347454bd
- (void)_createPlayerConnection:(id)connection shouldAppendItem:(BOOL)item;	// 0x3473feb1
- (void)_detachFromPlayer;	// 0x3473fe99
- (void)_didAccessKVOForKey:(id)key;	// 0x34740181
- (XXStruct_pwHToB)_duration;	// 0x34740de1
- (OpaqueFigCPEProtector *)_figCPEProtector;	// 0x3473ea41
- (OpaqueFigPlaybackItem *)_figPlaybackItem;	// 0x3473e401
- (XXStruct_pwHToB)_forwardPlaybackEndTime;	// 0x34745705
- (id)_fpNotificationNames;	// 0x3473f869
- (void)_informObserversAboutAvailabilityOfTracks;	// 0x3473fc1d
- (void)_insertAfterItem:(id)item;	// 0x3473e4a9
- (void)_invokeReadyForEnqueueingHandlers;	// 0x347406e5
- (BOOL)_isCurrentPlayerItem;	// 0x3473e439
// declared property getter: - (BOOL)_isExternalProtectionRequiredForPlayback;	// 0x34744f31
// declared property getter: - (BOOL)_isRental;	// 0x347431e9
// declared property getter: - (BOOL)_isRentalPlaybackStarted;	// 0x34744a0d
- (void)_kickAssetObserversIfAppropriate;	// 0x3473fcbd
- (BOOL)_limitReadAhead;	// 0x347455d5
- (id)_loadedTimeRanges;	// 0x34744fc5
- (void)_makeReadyForEnqueueingWithCompletionHandler:(id)completionHandler;	// 0x34741ab1
- (id)_nextItem;	// 0x3473e471
- (id)_playbackItemNotificationPayloadToError:(CFDictionaryRef)error;	// 0x3474200d
- (id)_player;	// 0x34740001
- (void)_playerChangeStatusToFailedWithError:(id)error;	// 0x3473fe85
- (id)_playerConnection;	// 0x3473e455
- (CGSize)_presentationSize;	// 0x34740e89
- (id)_previousItem;	// 0x3473e48d
- (id)_propertyStorage;	// 0x3473e41d
// declared property getter: - (id)_protectedContentPlaybackSupportStorageURL;	// 0x3473e765
- (void)_quietlySetAlwaysMonitorsPlayability:(BOOL)playability;	// 0x347466b1
- (void)_quietlySetContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x34746559
- (void)_quietlySetContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x34746605
- (void)_quietlySetForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x347468c5
- (void)_quietlySetGaplessInfo:(id)info;	// 0x34746199
- (void)_quietlySetLimitReadAhead:(BOOL)ahead;	// 0x3474675d
- (void)_quietlySetReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x34746809
- (void)_quietlySetSoundCheckVolumeNormalization:(float)normalization;	// 0x34746135
- (void)_quietlySetVolumeAdjustment:(float)adjustment;	// 0x347460d1
- (void)_removeFPListeners;	// 0x34741d1d
- (void)_removeFromItems;	// 0x3473e509
- (void)_removeSyncLayer:(id)layer;	// 0x3473e91d
// declared property getter: - (id)_rentalExpirationDate;	// 0x34744a65
// declared property getter: - (id)_rentalPlaybackExpirationDate;	// 0x347448fd
// declared property getter: - (id)_rentalPlaybackStartedDate;	// 0x34744985
// declared property getter: - (id)_rentalStartDate;	// 0x34744ae1
- (void)_respondToBecomingReadyForBasicInspection;	// 0x34742119
- (XXStruct_pwHToB)_reversePlaybackEndTime;	// 0x34745661
- (id)_seekableTimeRanges;	// 0x3474518d
- (void)_setAsset:(id)asset;	// 0x3473fdfd
- (void)_setAssetToAssetWithFigPlaybackItemIfAppropriate;	// 0x3473fd51
- (void)_setContentAuthorizationInfo:(id)info;	// 0x34744c4d
- (void)_setContentProtectionInfo:(id)info;	// 0x347418e9
// declared property setter: - (void)_setExternalProtectionRequiredForPlayback:(BOOL)playback;	// 0x34745a69
- (void)_setIsCurrentPlayerItem:(BOOL)item;	// 0x3473ff95
- (void)_setPlayerConnection:(id)connection;	// 0x3473ff41
// declared property setter: - (void)_setProtectedContentPlaybackSupportStorageURL:(id)url;	// 0x34741a15
- (void)_setSyncLayersOnFigPlaybackItem;	// 0x34746045
- (void)_setTimedMetadata:(id)metadata;	// 0x3473e95d
- (void)_setURL:(id)url;	// 0x3473fe51
- (void)_setUpFigContentProtection:(BOOL)protection;	// 0x3474002d
- (void)_setVideoCompositionFrameDuration:(XXStruct_pwHToB)duration;	// 0x347464d1
- (void)_setVideoCompositionInstructions:(id)instructions;	// 0x347463c1
- (void)_setVideoCompositionRenderScale:(float)scale;	// 0x347463fd
- (void)_setVideoCompositionRenderSize:(CGSize)size;	// 0x3474646d
- (void)_setVideoCompositor:(id)compositor;	// 0x34746319
- (dispatch_queue_s *)_stateDispatchQueue;	// 0x3473e3e5
- (id)_trackWithTrackID:(int)trackID;	// 0x347407d5
- (id)_tracks;	// 0x34745891
- (id)_weakReference;	// 0x3473e3c9
- (void)_willAccessKVOForKey:(id)key;	// 0x347401ad
- (id)accessLog;	// 0x34744e89
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x3474148d
// converted property getter: - (BOOL)alwaysMonitorsPlayability;	// 0x3473f525
// declared property getter: - (id)asset;	// 0x3473fa8d
// declared property getter: - (id)audioMix;	// 0x3473f13d
- (id)chapterHREFs;	// 0x3473ea01
- (id)chapterImageDataForTime:(XXStruct_pwHToB)time;	// 0x3474435d
- (id)chapterNames;	// 0x3473ea21
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForRateChange;	// 0x3473f23d
// converted property getter: - (BOOL)continuesPlayingDuringPrerollForSeek;	// 0x3473f3b1
- (id)copyWithZone:(NSZone *)zone;	// 0x34740205
- (id)currentDate;	// 0x3474581d
- (id)currentEstimatedDate;	// 0x347457a9
- (XXStruct_pwHToB)currentTime;	// 0x34740c69
- (void)dealloc;	// 0x3474109d
- (id)description;	// 0x347413c9
- (void)didChangeValueForKey:(id)key;	// 0x347400d1
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x34740b2d
// declared property getter: - (id)error;	// 0x3473fbe1
- (id)errorLog;	// 0x34744de1
- (void)finalize;	// 0x34744d15
// declared property getter: - (XXStruct_pwHToB)forwardPlaybackEndTime;	// 0x34741ca5
// converted property getter: - (id)gaplessInfo;	// 0x3473ed81
// converted property getter: - (id)initialDate;	// 0x3473f82d
// converted property getter: - (id)initialEstimatedDate;	// 0x3473f79d
// declared property getter: - (BOOL)isApplicationAuthorizedForPlayback;	// 0x34740fc5
// declared property getter: - (BOOL)isAuthorizationRequiredForPlayback;	// 0x3473e86d
// declared property getter: - (BOOL)isContentAuthorizedForPlayback;	// 0x34740f71
// converted property getter: - (BOOL)isNonForcedSubtitleDisplayEnabled;	// 0x3473e601
// declared property getter: - (BOOL)isPlaybackBufferEmpty;	// 0x3473eead
// declared property getter: - (BOOL)isPlaybackBufferFull;	// 0x3473ef71
// declared property getter: - (BOOL)isPlaybackLikelyToKeepUp;	// 0x3473f039
// converted property getter: - (BOOL)limitReadAhead;	// 0x3473f699
// declared property getter: - (id)loadedTimeRanges;	// 0x3473edbd
- (id)playabilityMetrics;	// 0x34745355
// declared property getter: - (CGSize)presentationSize;	// 0x34740aa5
- (float)progressTowardsPlaybackLikelyToKeepUp;	// 0x347453c1
- (void)release;	// 0x3474029d
- (id)retain;	// 0x347402f5
// declared property getter: - (XXStruct_pwHToB)reversePlaybackEndTime;	// 0x34741c2d
- (BOOL)seekToDate:(id)date;	// 0x34740c1d
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x34740d01
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x34742185
// declared property getter: - (id)seekableTimeRanges;	// 0x3473ee35
- (void)selectTrackWithID:(int)anId inTrackGroup:(id)trackGroup;	// 0x34742c91
- (int)selectedTrackIDInTrackGroup:(id)trackGroup;	// 0x34742e25
// converted property setter: - (void)setAlwaysMonitorsPlayability:(BOOL)playability;	// 0x3473f461
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x34740501
// converted property setter: - (void)setContinuesPlayingDuringPrerollForRateChange:(BOOL)rateChange;	// 0x3473f179
// converted property setter: - (void)setContinuesPlayingDuringPrerollForSeek:(BOOL)seek;	// 0x3473f2ed
// declared property setter: - (void)setForwardPlaybackEndTime:(XXStruct_pwHToB)time;	// 0x34742555
// converted property setter: - (void)setGaplessInfo:(id)info;	// 0x3473ebed
// converted property setter: - (void)setInitialDate:(id)date;	// 0x3473f7d9
// converted property setter: - (void)setInitialEstimatedDate:(id)date;	// 0x3473f749
// converted property setter: - (void)setLimitReadAhead:(BOOL)ahead;	// 0x3473f5d5
// converted property setter: - (void)setNonForcedSubtitleDisplayEnabled:(BOOL)enabled;	// 0x3473ea71
// declared property setter: - (void)setReversePlaybackEndTime:(XXStruct_pwHToB)time;	// 0x3474245d
// converted property setter: - (void)setSoundCheckVolumeNormalization:(float)normalization;	// 0x3473eb55
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x34742f65
// converted property setter: - (void)setVolumeAdjustment:(float)adjustment;	// 0x3473eabd
// converted property getter: - (float)soundCheckVolumeNormalization;	// 0x3473e5c1
// declared property getter: - (int)status;	// 0x3473e581
- (void)stepByCount:(int)count;	// 0x34740efd
// declared property getter: - (id)timedMetadata;	// 0x3473e9c5
- (id)timesForChapterType:(id)chapterType;	// 0x347408a5
// declared property getter: - (id)tracks;	// 0x3473f9f9
// declared property getter: - (id)videoComposition;	// 0x3473f101
// converted property getter: - (float)volumeAdjustment;	// 0x3473e5e1
- (void)willChangeValueForKey:(id)key;	// 0x34740129
@end

