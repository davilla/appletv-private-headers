/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "BRSecureResource.h"
#import "BRViewController.h"

@class RUIYTDocumentLoader, RUIYTMediaAsset;

__attribute__((visibility("hidden")))
@interface RUIYTOptionsMenuController : BRViewController <RUIYTDocumentLoaderDelegate, BRSecureResource> {
	RUIYTDocumentLoader *_documentLoader;	// 100 = 0x64
	RUIYTMediaAsset *_origAsset;	// 104 = 0x68
	BOOL _rated;	// 108 = 0x6c
	BOOL _flagged;	// 109 = 0x6d
	BOOL _faving;	// 110 = 0x6e
}
- (id)initWithOriginalAsset:(id)originalAsset blurImage:(id)image;	// 0x2446bd
- (void).cxx_destruct;	// 0x244eb9
- (void)_favingDoneBySaving:(BOOL)saving error:(id)error;	// 0x245281
- (void)_flag;	// 0x24545d
- (void)_handleRated;	// 0x244fe1
- (void)_playNoopSound;	// 0x244eed
- (void)_rate;	// 0x244f0d
- (void)_removeFromFavorites;	// 0x245165
- (void)_saveToFavorites;	// 0x245049
- (void)dealloc;	// 0x244951
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x244d55
- (BOOL)isNetworkDependent;	// 0x244aed
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x244ca5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x244af1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x244ca1
- (id)secureResourceAuthenticator;	// 0x244e35
- (void)wasExhumed;	// 0x2449dd
- (void)wasPopped;	// 0x244a5d
@end

