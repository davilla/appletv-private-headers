/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBaseParserDelegate.h"

@class NSMutableArray, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVFlickrParserDelegate : BRBaseParserDelegate {
	NSMutableDictionary *_errInfo;	// 12 = 0xc
	NSString *_userNSID;	// 16 = 0x10
	NSString *_userRealName;	// 20 = 0x14
	NSString *_userIconServer;	// 24 = 0x18
	NSString *_userIconFarm;	// 28 = 0x1c
	NSMutableArray *_photoInfos;	// 32 = 0x20
	NSMutableArray *_photosetInfos;	// 36 = 0x24
	BOOL _photosetInfoCreated;	// 40 = 0x28
	int _curPhotosetInfoIndex;	// 44 = 0x2c
	NSMutableArray *_contactInfos;	// 48 = 0x30
	NSMutableDictionary *_photoSizeInfo;	// 52 = 0x34
	long _photoCount;	// 56 = 0x38
}
@property(readonly, retain) NSMutableArray *contactInfos;	// G=0x1a3e09; converted property
@property(readonly, retain) NSMutableDictionary *errInfo;	// G=0x1a3ce5; converted property
@property(readonly, assign) long photoCount;	// G=0x1a3d35; converted property
@property(readonly, retain) NSMutableArray *photoInfos;	// G=0x1a3d45; converted property
@property(readonly, retain) NSMutableArray *photosetInfos;	// G=0x1a3d55; converted property
@property(readonly, retain) NSString *userIconFarm;	// G=0x1a3d25; converted property
@property(readonly, retain) NSString *userIconServer;	// G=0x1a3d15; converted property
@property(readonly, retain) NSString *userNSID;	// G=0x1a3cf5; converted property
@property(readonly, retain) NSString *userRealName;	// G=0x1a3d05; converted property
+ (id)parserDelegate;	// 0x1a326d
- (BOOL)_originalImageSizeExceedsMaxSize;	// 0x1a3ed5
// converted property getter: - (id)contactInfos;	// 0x1a3e09
- (void)dealloc;	// 0x1a32b1
- (void)endCount;	// 0x1a3589
- (void)endPhotoset;	// 0x1a3b15
- (void)endRealname;	// 0x1a3549
- (void)endTitle;	// 0x1a3b39
// converted property getter: - (id)errInfo;	// 0x1a3ce5
- (id)largeImagePath;	// 0x1a3e19
// converted property getter: - (long)photoCount;	// 0x1a3d35
// converted property getter: - (id)photoInfos;	// 0x1a3d45
// converted property getter: - (id)photosetInfos;	// 0x1a3d55
- (id)photosetInfosAlphabetically;	// 0x1a3d65
- (void)startContactWithAttributes:(id)attributes;	// 0x1a3bc9
- (void)startErrWithAttributes:(id)attributes;	// 0x1a33a1
- (void)startPersonWithAttributes:(id)attributes;	// 0x1a34bd
- (void)startPhotoWithAttributes:(id)attributes;	// 0x1a360d
- (void)startPhotosWithAttributes:(id)attributes;	// 0x1a35c1
- (void)startPhotosetWithAttributes:(id)attributes;	// 0x1a3929
- (void)startSizeWithAttributes:(id)attributes;	// 0x1a37f9
- (void)startUserWithAttributes:(id)attributes;	// 0x1a3471
// converted property getter: - (id)userIconFarm;	// 0x1a3d25
// converted property getter: - (id)userIconServer;	// 0x1a3d15
// converted property getter: - (id)userNSID;	// 0x1a3cf5
// converted property getter: - (id)userRealName;	// 0x1a3d05
@end
