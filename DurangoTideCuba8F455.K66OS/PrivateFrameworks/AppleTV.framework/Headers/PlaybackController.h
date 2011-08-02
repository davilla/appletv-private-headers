/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, CDNDownloadData, NSLock, NSMutableString, NSConditionLock, NSMutableArray, NSCondition, AppNccpHandlerDelegate;

__attribute__((visibility("hidden")))
@interface PlaybackController : NSObject {
@private
	AppNccpHandlerDelegate *nccpDelegate;	// 4 = 0x4
	BOOL playListGenError;	// 8 = 0x8
	int playbackState;	// 12 = 0xc
	double playbackPosition;	// 16 = 0x10
	int playingBitrate;	// 24 = 0x18
	int playListGenTimeElapsed;	// 28 = 0x1c
	long movieID;	// 32 = 0x20
	long episodeID;	// 36 = 0x24
	BOOL isNetworkReachable;	// 40 = 0x28
	BOOL isUsing3G;	// 41 = 0x29
	unsigned initialBitrateMaskWifi;	// 44 = 0x2c
	unsigned initialBitrateMask3G;	// 48 = 0x30
	int downloadableContentProfile;	// 52 = 0x34
	unsigned contentProfileSet;	// 56 = 0x38
	BOOL keyUseCustom;	// 60 = 0x3c
	BOOL playListUseCustom;	// 61 = 0x3d
	BOOL firstNccpCall;	// 62 = 0x3e
	double lastPingTime;	// 64 = 0x40
	int m3u8BandwidthSetting;	// 72 = 0x48
	BOOL licenseIssued;	// 76 = 0x4c
	NSString *playListGenerationError;	// 80 = 0x50
	NSCondition *playListDownloadsDone;	// 84 = 0x54
	int numActualDownloadables;	// 88 = 0x58
	CDNDownloadData *selectedCDN;	// 92 = 0x5c
	NSMutableArray *downloadedContentDownloadableData;	// 96 = 0x60
	NSMutableString *masterM3U8;	// 100 = 0x64
	NSMutableArray *playListGenerators;	// 104 = 0x68
	NSConditionLock *licenseLock;	// 108 = 0x6c
	NSLock *downloadCompleteLock;	// 112 = 0x70
}
@property(readonly, assign, nonatomic) NSCondition *playListDownloadsDone;	// G=0x30721ee8; @synthesize
+ (void)cleanUp;	// 0x307249d4
+ (void)enterShutdown;	// 0x30721d0c
+ (id)instance;	// 0x30724a08
- (id)init;	// 0x30724bac
- (BOOL)allContentDownloadableDataDone;	// 0x30725384
- (BOOL)buildPlayList:(id)list;	// 0x30725a44
- (void)changeState:(int)state;	// 0x30721ed4
- (int)chooseInitialBitrateFromMask:(unsigned)mask;	// 0x307226e0
- (void)closeActiveSession;	// 0x30724840
- (void)contentDownloadableFinished:(BOOL)finished withBitRate:(unsigned)bitRate withContentProfile:(int)contentProfile withCdn:(unsigned)cdn;	// 0x30724cc4
- (void)dealloc;	// 0x30724a5c
- (BOOL)generateLicenseRequestIfNeeded:(id)needed;	// 0x30722518
- (id)getCurrentBitrate;	// 0x307248a0
- (float)getM3u8ChunkRatio;	// 0x307248e4
- (int)getMovieDuration;	// 0x3072495c
- (int)getPlayListGenTE;	// 0x30721d38
- (id)getPlayListGenerationError;	// 0x3072245c
- (void)initializeForPlayback;	// 0x307245a0
- (void)loadState:(double)state playing:(BOOL)playing;	// 0x30722914
- (void)logNCCPTransactions;	// 0x307254b8
- (void)logout;	// 0x30724824
- (void)playBackEnd:(double)end reason:(id)reason;	// 0x30722b14
- (void)playBackPause:(double)pause;	// 0x30722f5c
- (void)playBackResume:(double)resume;	// 0x30722c2c
- (void)playBackSeek:(double)seek;	// 0x30722e70
- (void)playBackStartFailed:(double)failed withNccpErr:(int)nccpErr withHttpErr:(long long)httpErr withNWErr:(id)nwerr withErrorCode:(int)errorCode withErrorMsg:(id)errorMsg;	// 0x307230d8
- (void)playBackStartSucceeded:(double)succeeded;	// 0x30723270
- (void)playBackUpdate:(double)update;	// 0x3072301c
// declared property getter: - (id)playListDownloadsDone;	// 0x30721ee8
- (id)playListSendData:(id)data;	// 0x3072572c
- (int)preparePlayList:(id)list withAudioEncoding:(int *)audioEncoding;	// 0x3072692c
- (void)setDownloadableContentProfile:(int)profile;	// 0x30721db0
- (void)setInitialBitrate3G:(unsigned)g;	// 0x30721d60
- (void)setInitialBitrateWifi:(unsigned)wifi;	// 0x30721d4c
- (void)setIntm3u8:(BOOL)a8;	// 0x30721d24
- (void)setKeyUseCustom:(BOOL)custom;	// 0x30721d88
- (void)setPlayListUseCustom:(BOOL)custom;	// 0x30721d74
- (void)setPosition:(int)position;	// 0x30721df8
- (void)setUsing3g:(BOOL)g;	// 0x30721d9c
- (void)setm3u8bandwithSource:(int)source;	// 0x30721de4
- (id)stringWithState:(int)state;	// 0x30721e18
- (BOOL)triggerPlay:(int *)play idkey:(id)idkey idvalue:(id)idvalue secretkey:(id)secretkey secretvalue:(id)secretvalue movieid:(long)movieid trackid:(long)trackid episodeid:(long)episodeid;	// 0x30723480
- (void)updateNetworkStatus:(id)status netspec:(id)netspec mcc:(id)mcc mnc:(id)mnc carrier:(id)carrier;	// 0x307227c4
@end
