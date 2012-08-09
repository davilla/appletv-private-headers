/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSError, AVPlayerInternal, NSArray;

@interface AVPlayer : NSObject {
	AVPlayerInternal *_player;	// 4 = 0x4
}
@property(copy, nonatomic, setter=_setDisplaysUsedForPlayback:) NSArray *_displaysUsedForPlayback;	// G=0x326616c5; S=0x32661709; 
@property(readonly, assign, nonatomic) int _externalProtectionStatus;	// G=0x326617e9; 
@property(assign) int actionAtItemEnd;	// G=0x3265c8a5; S=0x3265cbdd; converted property
@property(assign) BOOL allowsAirPlayVideo;	// G=0x3265d765; S=0x3265d77d; converted property
@property(assign) BOOL allowsExternalPlayback;	// G=0x3265cfb1; S=0x3265d08d; converted property
@property(readonly, assign, nonatomic, getter=isAudioPlaybackEnabledAtAllRates) BOOL audioPlaybackEnabledAtAllRates;	// G=0x32661a69; 
@property(assign, getter=isClosedCaptionDisplayEnabled) BOOL closedCaptionDisplayEnabled;	// G=0x3265cce9; S=0x3265cdc5; converted property
@property(assign, nonatomic) BOOL disallowsAMRAudio;	// G=0x3266303d; S=0x32663119; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x32659e05; 
@property(retain) id externalVideoGravity;	// G=0x3265e4a5; S=0x3265e4e9; converted property
@property(assign) OpaqueCMClock *masterClock;	// G=0x3265c42d; S=0x3265c44d; converted property
@property(assign, nonatomic) float maxRateForAudioPlayback;	// G=0x32661d7d; S=0x32661cdd; 
@property(assign, nonatomic) float minRateForAudioPlayback;	// G=0x32661c29; S=0x32661b89; 
@property(assign) float rate;	// G=0x3265ba15; S=0x3265baf1; converted property
@property(readonly, assign, nonatomic) int status;	// G=0x32659de5; 
@property(assign) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;	// G=0x3265d961; S=0x3265d979; converted property
@property(assign) BOOL usesExternalPlaybackWhileExternalScreenIsActive;	// G=0x3265d2d5; S=0x3265d3b1; converted property
+ (BOOL)automaticallyNotifiesObserversOfActionAtItemEnd;	// 0x3265cbf1
+ (BOOL)automaticallyNotifiesObserversOfAirPlayVideoActive;	// 0x3265d95d
+ (BOOL)automaticallyNotifiesObserversOfAllowsAirPlayVideo;	// 0x3265d7d1
+ (BOOL)automaticallyNotifiesObserversOfAllowsExternalPlayback;	// 0x3265d1a1
+ (BOOL)automaticallyNotifiesObserversOfClosedCaptionDisplayEnabled;	// 0x3265ced9
+ (BOOL)automaticallyNotifiesObserversOfCurrentItem;	// 0x3265a261
+ (BOOL)automaticallyNotifiesObserversOfDisallowsAMRAudio;	// 0x3266322d
+ (BOOL)automaticallyNotifiesObserversOfExternalPlaybackActive;	// 0x3265d721
+ (BOOL)automaticallyNotifiesObserversOfMasterClock;	// 0x3265c53d
+ (BOOL)automaticallyNotifiesObserversOfRate;	// 0x3265bc35
+ (BOOL)automaticallyNotifiesObserversOfUsesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x3265d9cd
+ (BOOL)automaticallyNotifiesObserversOfUsesExternalPlaybackWhileExternalScreenIsActive;	// 0x3265d511
+ (BOOL)automaticallyNotifiesObserversOfVolume;	// 0x3265c779
+ (void)initialize;	// 0x32658f01
+ (id)keyPathsForValuesAffectingActionAtItemEnd;	// 0x3265cbf5
+ (id)keyPathsForValuesAffectingClosedCaptionDisplayEnabled;	// 0x3265cedd
+ (id)keyPathsForValuesAffectingRate;	// 0x3265bc39
+ (id)playerWithPlayerItem:(id)playerItem;	// 0x32658f99
+ (id)playerWithURL:(id)url;	// 0x32658f51
- (id)init;	// 0x32659059
- (id)initWithDispatchQueue:(id)dispatchQueue;	// 0x326595a1
- (id)initWithPlayerItem:(id)playerItem;	// 0x32658fe1
- (id)initWithURL:(id)url;	// 0x3265901d
- (BOOL)_CALayerDestinationIsTVOut;	// 0x32662cf5
- (int)_actionAtItemEnd;	// 0x3265c781
- (void)_addFPListeners;	// 0x3265e7dd
- (void)_addLayer:(id)layer;	// 0x3265e269
- (void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem;	// 0x3265a265
- (BOOL)_airPlayVideoActive;	// 0x3265d7d5
- (BOOL)_allowsExternalPlayback;	// 0x3265cf05
- (BOOL)_applicationHasExternallyDisplayedAVPlayerLayerAndIsUnderDeviceLock;	// 0x32661e31
- (BOOL)_attachItem:(id)item andPerformOperation:(int)operation withObject:(id)object;	// 0x3265a899
- (void)_attachLayersToFigPlayer;	// 0x3265df01
- (id)_cachedValueForKey:(id)key;	// 0x32659ac1
- (int)_cancelPendingPrerollAndRegisterPrerollCompletionHandler:(id)handler;	// 0x3265c079
- (void)_changeStatusToFailedWithError:(id)error;	// 0x32659e49
- (void)_checkDefaultsWriteForPerformanceLogging;	// 0x3265eb41
- (id)_clientName;	// 0x32662af9
- (void)_coordinateWithRemovalOfItem:(id)item;	// 0x3265b661
- (int)_createPrerollID;	// 0x3265c01d
- (id)_currentItem;	// 0x32659f71
- (void)_currentItemStatusIsReadyToPlay;	// 0x3265a141
- (int)_defaultActionAtItemEnd;	// 0x3265c77d
- (void)_detachLayersFromFigPlayer;	// 0x3265dfe5
- (void)_didAccessKVOForKey:(id)key;	// 0x32659b4d
- (void)_didFinishSuspension:(id)suspension;	// 0x3266268d
- (BOOL)_disallowsAMRAudio;	// 0x32662f91
// declared property getter: - (id)_displaysUsedForPlayback;	// 0x326616c5
- (void)_enumerateItemsUsingBlock:(id)block;	// 0x3265b819
- (BOOL)_externalPlaybackActive;	// 0x3265d515
// declared property getter: - (int)_externalProtectionStatus;	// 0x326617e9
- (OpaqueFigPlayer *)_figPlayer;	// 0x32659a81
- (id)_fpNotificationNames;	// 0x3265e6d5
- (BOOL)_hasAssociatedOnscreenAVPlayerLayer;	// 0x32661fd9
- (BOOL)_iapdExtendedModeIsActive;	// 0x326620a9
- (BOOL)_insertItem:(id)item afterItem:(id)item2;	// 0x3265a879
- (BOOL)_insertPlaybackItemOfItem:(id)item inPlayerQueueAfterPlaybackItemOfItem:(id)item2;	// 0x3265a771
- (BOOL)_isClosedCaptionDisplayEnabled;	// 0x3265cc1d
- (int)_itemOkayToPlayWhileTransitioningToBackground:(id)background;	// 0x32662109
- (id)_items;	// 0x3265b879
- (void)_logPerformanceDataForCurrentItem;	// 0x3265ecc1
- (void)_logPerformanceDataForPreviousItem;	// 0x3265eba5
- (BOOL)_outputObscuredDueToInsufficientExternalProtection;	// 0x32661895
- (id)_pixelBufferAttributeMediator;	// 0x3265ddc5
- (id)_playbackDisplaysForFigPlayer;	// 0x326615dd
- (void)_playerDestinationPixelBufferAttributesDidChange:(id)_playerDestinationPixelBufferAttributes;	// 0x32659ecd
- (id)_playerLayers;	// 0x3265dde5
- (id)_propertyStorage;	// 0x32659aa1
- (float)_rate;	// 0x3265b995
- (void)_removeAllItems;	// 0x3265b945
- (void)_removeAllLayers;	// 0x3265dcd5
- (void)_removeFPListeners;	// 0x3265e9d5
- (BOOL)_removeItem:(id)item;	// 0x3265b749
- (void)_removeLayer:(id)layer;	// 0x3265e031
- (BOOL)_resumePlayback:(double)playback error:(id *)error;	// 0x32662e51
- (void)_setActionAtItemEnd:(int)itemEnd allowingAdvance:(BOOL)advance;	// 0x3265c991
- (void)_setCALayerDestinationIsTVOut:(BOOL)anOut;	// 0x32662c51
- (void)_setCachedValue:(id)value forKey:(id)key;	// 0x32659aed
- (void)_setClientName:(id)name;	// 0x32662bb1
- (void)_setCurrentItem:(id)item;	// 0x32659fc9
// declared property setter: - (void)_setDisplaysUsedForPlayback:(id)playback;	// 0x32661709
- (void)_setEQPreset:(int)preset;	// 0x326629c1
- (void)_setFigPlaybackItemToMakeCurrent:(OpaqueFigPlaybackItem *)makeCurrent;	// 0x3265eb21
- (void)_setNeroVideoGravityOnFigPlayer;	// 0x3265e585
- (void)_setPreferredLanguageList:(id)list;	// 0x32662db1
- (void)_setStoppingFadeOutDuration:(float)duration;	// 0x32662a59
- (void)_setVolume:(float)volume;	// 0x3265c6a1
- (void)_setWantsVolumeChangesWhenPausedOrInactive:(BOOL)inactive;	// 0x3266291d
- (BOOL)_shouldDetachContentLayersFromFigPlayer;	// 0x32662555
- (BOOL)_shouldLogPerformanceData;	// 0x3265eb85
- (id)_stateDispatchQueue;	// 0x32659a61
- (id)_unregisterAndReturnRetainedPrerollCompletionHandler;	// 0x3265c225
- (BOOL)_usesExternalPlaybackWhileExternalScreenIsActive;	// 0x3265d1a5
- (float)_volume;	// 0x3265c541
- (id)_weakReference;	// 0x32659a31
- (void)_willAccessKVOForKey:(id)key;	// 0x32659b21
- (void)_willEnterForeground:(id)foreground;	// 0x3266280d
// converted property getter: - (int)actionAtItemEnd;	// 0x3265c8a5
- (id)addBoundaryTimeObserverForTimes:(id)times queue:(id)queue usingBlock:(id)block;	// 0x3265db29
- (void)addObserver:(id)observer forKeyPath:(id)keyPath options:(unsigned)options context:(void *)context;	// 0x32659c39
- (id)addPeriodicTimeObserverForInterval:(XXStruct_pwHToB)interval queue:(id)queue usingBlock:(id)block;	// 0x3265da49
// converted property getter: - (BOOL)allowsAirPlayVideo;	// 0x3265d765
// converted property getter: - (BOOL)allowsExternalPlayback;	// 0x3265cfb1
- (void)cancelPendingPrerolls;	// 0x3265c329
- (id)currentItem;	// 0x32659f91
- (XXStruct_pwHToB)currentTime;	// 0x3265bc61
- (void)dealloc;	// 0x3265960d
- (void)didChangeValueForKey:(id)key;	// 0x32659bd9
// declared property getter: - (BOOL)disallowsAMRAudio;	// 0x3266303d
- (id)dispatchQueue;	// 0x32659a51
// declared property getter: - (id)error;	// 0x32659e05
- (int)externalPlaybackType;	// 0x3265d725
// converted property getter: - (id)externalVideoGravity;	// 0x3265e4a5
- (void)finalize;	// 0x32659909
- (BOOL)isAirPlayVideoActive;	// 0x3265d881
// declared property getter: - (BOOL)isAudioPlaybackEnabledAtAllRates;	// 0x32661a69
// converted property getter: - (BOOL)isClosedCaptionDisplayEnabled;	// 0x3265cce9
- (BOOL)isExternalPlaybackActive;	// 0x3265d645
// converted property getter: - (OpaqueCMClock *)masterClock;	// 0x3265c42d
// declared property getter: - (float)maxRateForAudioPlayback;	// 0x32661d7d
// declared property getter: - (float)minRateForAudioPlayback;	// 0x32661c29
- (BOOL)outputObscuredDueToInsufficientExternalProtection;	// 0x326618b1
- (void)pause;	// 0x3265d9e5
- (void)play;	// 0x3265d9d1
- (id)playerAVAudioSession;	// 0x32662f4d
- (void)prepareItem:(id)item withCompletionHandler:(id)completionHandler;	// 0x3265a819
- (void)prerollAtRate:(float)rate completionHandler:(id)handler;	// 0x3265c269
- (void)prerollOperationDidComplete:(BOOL)prerollOperation notificationPayload:(CFDictionaryRef)payload;	// 0x3265c33d
// converted property getter: - (float)rate;	// 0x3265ba15
- (void)removeAudioPlaybackRateLimits;	// 0x3266198d
- (void)removeTimeObserver:(id)observer;	// 0x3265dbf1
- (void)replaceCurrentItemWithPlayerItem:(id)playerItem;	// 0x3265d9f9
- (void)seekToDate:(id)date;	// 0x3265bcc1
- (void)seekToDate:(id)date completionHandler:(id)handler;	// 0x3265bcf1
- (void)seekToTime:(XXStruct_pwHToB)time;	// 0x3265bd25
- (void)seekToTime:(XXStruct_pwHToB)time completionHandler:(id)handler;	// 0x3265be11
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after;	// 0x3265bd71
- (void)seekToTime:(XXStruct_pwHToB)time toleranceBefore:(XXStruct_pwHToB)before toleranceAfter:(XXStruct_pwHToB)after completionHandler:(id)handler;	// 0x3265be9d
// converted property setter: - (void)setActionAtItemEnd:(int)itemEnd;	// 0x3265cbdd
// converted property setter: - (void)setAllowsAirPlayVideo:(BOOL)video;	// 0x3265d77d
// converted property setter: - (void)setAllowsExternalPlayback:(BOOL)playback;	// 0x3265d08d
// converted property setter: - (void)setClosedCaptionDisplayEnabled:(BOOL)enabled;	// 0x3265cdc5
// declared property setter: - (void)setDisallowsAMRAudio:(BOOL)audio;	// 0x32663119
// converted property setter: - (void)setExternalVideoGravity:(id)gravity;	// 0x3265e4e9
// converted property setter: - (void)setMasterClock:(OpaqueCMClock *)clock;	// 0x3265c44d
// declared property setter: - (void)setMaxRateForAudioPlayback:(float)audioPlayback;	// 0x32661cdd
// declared property setter: - (void)setMinRateForAudioPlayback:(float)audioPlayback;	// 0x32661b89
// converted property setter: - (void)setRate:(float)rate;	// 0x3265baf1
- (void)setRate:(float)rate time:(XXStruct_pwHToB)time atHostTime:(XXStruct_pwHToB)hostTime;	// 0x3265bf49
// converted property setter: - (void)setUsesAirPlayVideoWhileAirPlayScreenIsActive:(BOOL)active;	// 0x3265d979
// converted property setter: - (void)setUsesExternalPlaybackWhileExternalScreenIsActive:(BOOL)active;	// 0x3265d3b1
// declared property getter: - (int)status;	// 0x32659de5
// converted property getter: - (BOOL)usesAirPlayVideoWhileAirPlayScreenIsActive;	// 0x3265d961
// converted property getter: - (BOOL)usesExternalPlaybackWhileExternalScreenIsActive;	// 0x3265d2d5
- (void)willChangeValueForKey:(id)key;	// 0x32659b79
@end
