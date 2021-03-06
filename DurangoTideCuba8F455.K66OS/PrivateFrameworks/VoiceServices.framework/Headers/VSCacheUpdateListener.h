/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMutableArray, NSDictionary, NSTimer;

@interface VSCacheUpdateListener : NSObject {
	NSLock *_lock;	// 4 = 0x4
	NSMutableArray *_updateRequestQueue;	// 8 = 0x8
	NSDictionary *_dataProviders;	// 12 = 0xc
	NSTimer *_flushTimer;	// 16 = 0x10
	BOOL _isListening;	// 20 = 0x14
}
+ (id)sharedListener;	// 0x33f3a781
+ (id)sharedListenerIfExists;	// 0x33f39b39
- (id)init;	// 0x33f39b35
- (void)_enqueueRequest:(id)request;	// 0x33f3a369
- (void)_flush;	// 0x33f3a625
- (id)_initShared;	// 0x33f39f71
- (void)_spokenLanguageChanged:(id)changed;	// 0x33f39d45
- (void)dealloc;	// 0x33f39ef5
- (void)performUpdateForModelIdentifier:(id)modelIdentifier classIdentifier:(id)identifier;	// 0x33f39d5d
- (void)startListening;	// 0x33f3a005
- (void)stopListening;	// 0x33f39db9
@end

