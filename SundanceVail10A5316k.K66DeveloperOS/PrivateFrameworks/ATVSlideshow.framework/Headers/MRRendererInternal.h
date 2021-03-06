/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableSet, NSConditionLock, MRContext, CMMotionManager, MRRenderArguments, NSRecursiveLock, NSString, NSArray, MRImage, NSMutableDictionary, NSMutableArray, MRLayerEffect, NSThread, NSDictionary;
@protocol MRLiveSlideshowDelegate, MRAsynchronousOperationsDelegate;

@interface MRRendererInternal : NSObject {
	MRContext *mContext;	// 4 = 0x4
	double mMasterStartTime;	// 8 = 0x8
	double mMasterDuration;	// 16 = 0x10
	int mMasterMode;	// 24 = 0x18
	NSThread *mRenderThread;	// 28 = 0x1c
	NSRecursiveLock *mRenderLock;	// 32 = 0x20
	NSConditionLock *mFrameLock;	// 36 = 0x24
	double mTimeOffset;	// 40 = 0x28
	double mUnalteredTimeOffset;	// 48 = 0x30
	double mMasterClock;	// 56 = 0x38
	BOOL mIsStalled;	// 64 = 0x40
	BOOL mRenderingRequested;	// 65 = 0x41
	BOOL mHasToRebuildAudio;	// 66 = 0x42
	BOOL mDontShowDRMUI;	// 67 = 0x43
	BOOL mSlaveFrameMode;	// 68 = 0x44
	CGPoint mContextOffset;	// 72 = 0x48
	MRRenderArguments *mRenderArguments;	// 80 = 0x50
	CGImageRef mSnapshotAsCGImage;	// 84 = 0x54
	NSConditionLock *mSnapshotAsCGImageLock;	// 88 = 0x58
	int mPreviousMode;	// 92 = 0x5c
	double mModeChangeTime;	// 96 = 0x60
	NSMutableArray *mSelectedLayers;	// 104 = 0x68
	NSMutableDictionary *mLayerTrackings;	// 108 = 0x6c
	NSMutableSet *mLayersCurrentlyTrackedIn;	// 112 = 0x70
	NSMutableDictionary *mGestureRecognizers;	// 116 = 0x74
	MRLayerEffect *mLayerCurrentlyTextEditing;	// 120 = 0x78
	NSString *mCurrentlyEditedTextElement;	// 124 = 0x7c
	BOOL mShouldPauseWhenStill;	// 128 = 0x80
	BOOL mNeedsToResize;	// 129 = 0x81
	BOOL mNeedsToTemporaryResize;	// 130 = 0x82
	BOOL mNeedsToResumeOrPauseLayers;	// 131 = 0x83
	BOOL mNeedsToSynchronizeTimeInLayers;	// 132 = 0x84
	BOOL mNeedsToSynchronizeTimeInAudioMovies;	// 133 = 0x85
	CGSize mTemporarySize;	// 136 = 0x88
	double mMorphingStartTime;	// 144 = 0x90
	double mMorphingEndTime;	// 152 = 0x98
	float mMorphingRotationAngle;	// 160 = 0xa0
	BOOL mMorphingHandlesRotation;	// 164 = 0xa4
	MRImage *mSnapshotForMorphing;	// 168 = 0xa8
	NSMutableArray *mActions;	// 172 = 0xac
	NSMutableDictionary *mAudioPlayerBuckets;	// 176 = 0xb0
	NSArray *mAudioPlayerSortedBuckets;	// 180 = 0xb4
	id<MRLiveSlideshowDelegate> mLiveSlideshowDelegate;	// 184 = 0xb8
	id<MRAsynchronousOperationsDelegate> mAsynchronousOperationsDelegate;	// 188 = 0xbc
	BOOL mScreenBurnTest;	// 192 = 0xc0
	unsigned long long mScreenBurnTestCurrentPass;	// 196 = 0xc4
	MRImage *mScreenBurnTestAccumulationImage1;	// 204 = 0xcc
	MRImage *mScreenBurnTestAccumulationImage2;	// 208 = 0xd0
	NSMutableArray *mNavigatorHistoryBack;	// 212 = 0xd4
	NSMutableArray *mNavigatorHistoryForth;	// 216 = 0xd8
	NSDictionary *mForcedState;	// 220 = 0xdc
	CMMotionManager *mMotionManager;	// 224 = 0xe0
	BOOL mHideTextWhileEditing;	// 228 = 0xe4
	BOOL mUsesNewImageManager;	// 229 = 0xe5
	double mFrameTime[64];	// 232 = 0xe8
	unsigned long mFrameTimeIndex;	// 744 = 0x2e8
	FILE *mRenderingLogFile;	// 748 = 0x2ec
	double mPreviousStartTimeForLog;	// 752 = 0x2f0
	double mLastSaveTimeForLog;	// 760 = 0x2f8
	NSString *mCurrentIDs;	// 768 = 0x300
	MRImage *mCurrentIDsImage;	// 772 = 0x304
	NSString *mPreviousCurrentIDs;	// 776 = 0x308
	double mOuterTime;	// 780 = 0x30c
	BOOL mInnerTimeNeedsSync;	// 788 = 0x314
	BOOL mUseOuterTime;	// 789 = 0x315
	BOOL mOuterIsPlaying;	// 790 = 0x316
	BOOL mInnerIsPlayingNeedsSync;	// 791 = 0x317
	BOOL mUseOuterIsPlaying;	// 792 = 0x318
}
@end

