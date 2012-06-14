/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSDictionary, NSRecursiveLock, MCPlug, NSString;

@interface MCMontage : NSObject {
@private
	NSDictionary *mImprintWhileLoading;	// 4 = 0x4
	NSMutableDictionary *mVideoAssetsForFilePaths;	// 8 = 0x8
	NSMutableDictionary *mVideoAssetsForObjectIDs;	// 12 = 0xc
	NSMutableDictionary *mAudioAssetsForFilePaths;	// 16 = 0x10
	NSMutableDictionary *mAudioAssetsForObjectIDs;	// 20 = 0x14
	NSMutableDictionary *mContainersForObjectIDs;	// 24 = 0x18
	NSRecursiveLock *mLock;	// 28 = 0x1c
	MCPlug *mRootPlug;	// 32 = 0x20
	double mAudioFadeOutDuration;	// 36 = 0x24
	NSString *mBasePath;	// 44 = 0x2c
	unsigned long long mUUIDSeed;	// 48 = 0x30
}
@property(assign, nonatomic) double audioFadeOutDuration;	// G=0x30ae8b41; S=0x30ae8b59; @synthesize=mAudioFadeOutDuration
@property(copy) NSString *basePath;	// G=0x30ae8b6d; S=0x30ae8b81; @synthesize=mBasePath
@property(readonly, assign, nonatomic) MCPlug *rootPlug;	// G=0x30ae8b31; @synthesize=mRootPlug
@property(readonly, assign, nonatomic) unsigned long long uuidSeed;	// G=0x30ae7a85; @synthesize=mUUIDSeed
- (id)init;	// 0x30ae6989
- (id)initFromScratch;	// 0x30ae6ab9
- (id)initWithData:(id)data error:(id *)error;	// 0x30ae6b39
- (id)assetForObjectID:(id)objectID;	// 0x30ae827d
- (id)assets;	// 0x30ae82f5
- (id)audioAssetForFileAtPath:(id)path;	// 0x30ae80d5
- (id)audioAssetForObjectID:(id)objectID;	// 0x30ae82d5
- (id)audioAssets;	// 0x30ae8631
// declared property getter: - (double)audioFadeOutDuration;	// 0x30ae8b41
// declared property getter: - (id)basePath;	// 0x30ae8b6d
- (id)containerForObjectID:(id)objectID;	// 0x30ae8755
- (id)createEffectContainer;	// 0x30ae7ced
- (id)createNavigatorContainer;	// 0x30ae7e0d
- (id)createParallelizerContainer;	// 0x30ae7bcd
- (id)createSerializerContainer;	// 0x30ae7aad
- (id)data;	// 0x30ae79ed
- (void)dealloc;	// 0x30ae7029
- (void)demolish;	// 0x30ae7079
- (void)forgetAboutContainer:(id)container;	// 0x30ae8a19
- (id)imprint;	// 0x30ae749d
- (void)lock;	// 0x30ae7a45
- (void)registerContainer:(id)container;	// 0x30ae88fd
// declared property getter: - (id)rootPlug;	// 0x30ae8b31
// declared property setter: - (void)setAudioFadeOutDuration:(double)duration;	// 0x30ae8b59
// declared property setter: - (void)setBasePath:(id)path;	// 0x30ae8b81
- (void)unlock;	// 0x30ae7a65
// declared property getter: - (unsigned long long)uuidSeed;	// 0x30ae7a85
- (id)videoAssetForFileAtPath:(id)path;	// 0x30ae7f2d
- (id)videoAssetForObjectID:(id)objectID;	// 0x30ae82b5
- (id)videoAssets;	// 0x30ae850d
@end
