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
+ (id)sharedListener;	// 0x324f8781
+ (id)sharedListenerIfExists;	// 0x324f7b39
- (id)init;	// 0x324f7b35
- (void)_enqueueRequest:(id)request;	// 0x324f8369
- (void)_flush;	// 0x324f8625
- (id)_initShared;	// 0x324f7f71
- (void)_spokenLanguageChanged:(id)changed;	// 0x324f7d45
- (void)dealloc;	// 0x324f7ef5
- (void)performUpdateForModelIdentifier:(id)modelIdentifier classIdentifier:(id)identifier;	// 0x324f7d5d
- (void)startListening;	// 0x324f8005
- (void)stopListening;	// 0x324f7db9
@end

