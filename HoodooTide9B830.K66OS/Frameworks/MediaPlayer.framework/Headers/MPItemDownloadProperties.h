/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class NSArray, NSString, NSURL, SSNetworkConstraints;

@interface MPItemDownloadProperties : NSObject <NSCopying> {
@private
	long long _assetFileSize;	// 4 = 0x4
	NSURL *_destinationURL;	// 12 = 0xc
	BOOL _downloadExists;	// 16 = 0x10
	NSString *_downloadIdentifier;	// 20 = 0x14
	SSNetworkConstraints *_networkConstraints;	// 24 = 0x18
	NSArray *_sinfs;	// 28 = 0x1c
	NSURL *_sourceURL;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) long long assetFileSize;	// G=0x346f5f6d; @synthesize=_assetFileSize
@property(readonly, assign, nonatomic) NSURL *destinationURL;	// G=0x346f5f85; @synthesize=_destinationURL
@property(readonly, assign, nonatomic) BOOL downloadExists;	// G=0x346f5f95; @synthesize=_downloadExists
@property(readonly, assign, nonatomic) NSString *downloadIdentifier;	// G=0x346f5fa5; @synthesize=_downloadIdentifier
@property(readonly, assign, nonatomic) SSNetworkConstraints *networkConstraints;	// G=0x346f5fb5; @synthesize=_networkConstraints
@property(readonly, assign, nonatomic) NSURL *sourceURL;	// G=0x346f5fc5; @synthesize=_sourceURL
- (id)initWithDownload:(id)download;	// 0x346f55a9
- (id)initWithDownloadIdentifier:(id)downloadIdentifier;	// 0x346f5889
- (id)initWithMediaItem:(id)mediaItem;	// 0x346f590d
- (void)_reloadNetworkConstraints;	// 0x346f5eb5
// declared property getter: - (long long)assetFileSize;	// 0x346f5f6d
- (id)copyWithZone:(NSZone *)zone;	// 0x346f5d99
- (void)dealloc;	// 0x346f5979
- (id)description;	// 0x346f5b25
// declared property getter: - (id)destinationURL;	// 0x346f5f85
// declared property getter: - (BOOL)downloadExists;	// 0x346f5f95
// declared property getter: - (id)downloadIdentifier;	// 0x346f5fa5
- (unsigned)hash;	// 0x346f5b8d
- (BOOL)isEqual:(id)equal;	// 0x346f5bad
// declared property getter: - (id)networkConstraints;	// 0x346f5fb5
- (id)newAVAssetOptionsWithDownloadStyle:(int)downloadStyle;	// 0x346f5a15
// declared property getter: - (id)sourceURL;	// 0x346f5fc5
@end
