/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSRecursiveLock, NSString, MRImage, NSDate, MRGIFMoviePlayer, NSMutableDictionary;

@interface MRImageInfo : NSObject {
	NSString *_imageBufferKey;	// 4 = 0x4
	NSRecursiveLock *_lock;	// 8 = 0x8
	unsigned _retainCount;	// 12 = 0xc
	NSDate *_modDate;	// 16 = 0x10
	MRImage *_image;	// 20 = 0x14
	NSMutableDictionary *_options;	// 24 = 0x18
	MRGIFMoviePlayer *_gifMoviePlayer;	// 28 = 0x1c
	NSMutableDictionary *_imagesForRemoteKeys;	// 32 = 0x20
	BOOL _isMovie;	// 36 = 0x24
}
@property(retain) MRGIFMoviePlayer *gifMoviePlayer;	// G=0x362a5bd1; S=0x362a5be5; @synthesize=_gifMoviePlayer
@property(retain) MRImage *image;	// G=0x362a5b59; S=0x362a5b6d; @synthesize=_image
@property(readonly, assign) NSString *imageBufferKey;	// G=0x362a5af5; @synthesize=_imageBufferKey
@property(retain) NSMutableDictionary *imagesForRemoteKeys;	// G=0x362a5bf5; S=0x362a5c09; @synthesize=_imagesForRemoteKeys
@property(assign) BOOL isMovie;	// G=0x362a5ba1; S=0x362a5bb9; @synthesize=_isMovie
@property(retain) NSDate *modDate;	// G=0x362a5b35; S=0x362a5b49; @synthesize=_modDate
@property(retain) NSMutableDictionary *options;	// G=0x362a5b7d; S=0x362a5b91; @synthesize=_options
@property(assign) unsigned retainCount;	// G=0x362a5b09; S=0x362a5b1d; @synthesize=_retainCount
- (id)initWithImageBufferKey:(id)imageBufferKey;	// 0x362a58c9
- (void)cleanup;	// 0x362a59e1
- (void)dealloc;	// 0x362a597d
// declared property getter: - (id)gifMoviePlayer;	// 0x362a5bd1
// declared property getter: - (id)image;	// 0x362a5b59
// declared property getter: - (id)imageBufferKey;	// 0x362a5af5
// declared property getter: - (id)imagesForRemoteKeys;	// 0x362a5bf5
// declared property getter: - (BOOL)isMovie;	// 0x362a5ba1
- (void)lock;	// 0x362a5ab5
// declared property getter: - (id)modDate;	// 0x362a5b35
// declared property getter: - (id)options;	// 0x362a5b7d
// declared property getter: - (unsigned)retainCount;	// 0x362a5b09
// declared property setter: - (void)setGifMoviePlayer:(id)player;	// 0x362a5be5
// declared property setter: - (void)setImage:(id)image;	// 0x362a5b6d
// declared property setter: - (void)setImagesForRemoteKeys:(id)remoteKeys;	// 0x362a5c09
// declared property setter: - (void)setIsMovie:(BOOL)movie;	// 0x362a5bb9
// declared property setter: - (void)setModDate:(id)date;	// 0x362a5b49
// declared property setter: - (void)setOptions:(id)options;	// 0x362a5b91
// declared property setter: - (void)setRetainCount:(unsigned)count;	// 0x362a5b1d
- (void)unlock;	// 0x362a5ad5
@end
