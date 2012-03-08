/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"
#import "MSStorageProtocol.h"

@class NSString, NSMutableDictionary;

@interface MSMMCSProtocol : NSObject <MSStorageProtocol> {
@private
	NSString *_personID;	// 4 = 0x4
	NSString *_MMCSDirPath;	// 8 = 0x8
	MMCSEngineRef _engine;	// 12 = 0xc
	NSString *_engineDirPath;	// 16 = 0x10
	NSString *_manifestPath;	// 20 = 0x14
	NSMutableDictionary *_manifest;	// 24 = 0x18
}
@property(readonly, assign) MMCSEngineRef engine;	// G=0x3389606d; @synthesize=_engine
@property(readonly, assign) NSString *personID;	// G=0x3389605d; @synthesize=_personID
+ (id)computeItemIDForAsset:(id)asset;	// 0x33895e29
- (id)initWithPersonID:(id)personID path:(id)path;	// 0x338957a1
- (int)_getFileDescriptorFromItem:(unsigned long long)item;	// 0x33895d85
- (void)_getItemDone:(unsigned long long)done path:(id)path error:(id)error;	// 0x33895db1
- (id)_getUTIFromItem:(unsigned long long)item;	// 0x33895dad
- (void)_putItemDone:(unsigned long long)done error:(id)error;	// 0x33895dd9
- (void)_requestCompleted;	// 0x33895e01
- (void)abort;	// 0x33895c89
- (void)deactivate;	// 0x33895b49
- (void)deactivateRemoveAllFiles:(BOOL)files;	// 0x33895b5d
- (void)dealloc;	// 0x33895c49
- (void)didFinishUsingAssets:(id)assets;	// 0x33895c9d
// declared property getter: - (MMCSEngineRef)engine;	// 0x3389606d
// declared property getter: - (id)personID;	// 0x3389605d
@end
