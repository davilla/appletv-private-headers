/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library
#import "BRTitleProvider.h"

@class NSURL, BRMediaType, NSMutableArray, NSDictionary, NSString;

@interface ATVMusicStorePresentsProvider : NSObject <BRTitleProvider> {
@private
	NSString *_requestID;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSURL *_url;	// 12 = 0xc
	NSURL *_fallbackURL;	// 16 = 0x10
	NSMutableArray *_items;	// 20 = 0x14
	NSDictionary *_catalogCollection;	// 24 = 0x18
	BOOL _storeLoadInProgress;	// 28 = 0x1c
	double _lastStoreLoadTime;	// 32 = 0x20
	BOOL _networkIsOK;	// 40 = 0x28
	BOOL _storeRestricted;	// 41 = 0x29
	NSString *_title;	// 44 = 0x2c
	unsigned _collectionNumber;	// 48 = 0x30
	unsigned _fallbackCollectionNumber;	// 52 = 0x34
	BOOL _usingFallback;	// 56 = 0x38
	NSString *_URLKey;	// 60 = 0x3c
	BOOL _fallBackEnabled;	// 64 = 0x40
	ATVMediaTypeRef _redownloadMediaType;	// 68 = 0x44
	BOOL _requiresStoreAccount;	// 72 = 0x48
}
@property(assign) ATVMediaTypeRef redownloadMediaType;	// G=0x3290b511; S=0x3290b521; @synthesize=_redownloadMediaType
@property(assign, nonatomic) BOOL requiresStoreAccount;	// G=0x3290b531; S=0x3290b1ed; @synthesize=_requiresStoreAccount
@property(readonly, retain) NSString *title;	// G=0x3290b085; converted property
+ (id)providerWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x3290ae11
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back;	// 0x3290ae5d
- (id)initWithMediaType:(id)mediaType URLKey:(id)key forID:(id)anId fallBack:(BOOL)back requiresStoreAccount:(BOOL)account;	// 0x3290ae89
- (void)_accountAuthenticationSucceeded:(id)succeeded;	// 0x3290c289
- (void)_clearStoreData;	// 0x3290b5bd
- (void)_loadStoreDataFromURL:(id)url;	// 0x3290babd
- (void)_networkChanged:(id)changed;	// 0x3290bfc5
- (BOOL)_okToFetchNewData;	// 0x3290b9b5
- (void)_parentalControlAccessChanged:(id)changed;	// 0x3290c0cd
- (void)_parseCatalogCollection:(id)collection;	// 0x3290bd79
- (void)_preferredAccountRemoved:(id)removed;	// 0x3290c205
- (void)_redownloadAcquired:(id)acquired;	// 0x3290c19d
- (void)_resetStoreData;	// 0x3290b6ad
- (void)_setTitle:(id)title;	// 0x3290b541
- (void)_supplementalResponseReceived:(id)received;	// 0x3290bc45
- (id)controlFactory;	// 0x3290b2e5
- (id)dataAtIndex:(long)index;	// 0x3290b33d
- (long)dataCount;	// 0x3290b301
- (void)dealloc;	// 0x3290b095
- (id)hashForDataAtIndex:(long)index;	// 0x3290b491
- (BOOL)isLoading;	// 0x3290b1dd
// declared property getter: - (ATVMediaTypeRef)redownloadMediaType;	// 0x3290b511
- (void)reloadStoreData;	// 0x3290b189
// declared property getter: - (BOOL)requiresStoreAccount;	// 0x3290b531
// declared property setter: - (void)setRedownloadMediaType:(ATVMediaTypeRef)type;	// 0x3290b521
// declared property setter: - (void)setRequiresStoreAccount:(BOOL)account;	// 0x3290b1ed
// converted property getter: - (id)title;	// 0x3290b085
@end

