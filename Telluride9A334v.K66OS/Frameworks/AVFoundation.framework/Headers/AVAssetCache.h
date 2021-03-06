/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSURL, AVAssetCacheInternal;

@interface AVAssetCache : NSObject {
@private
	AVAssetCacheInternal *_priv;	// 4 = 0x4
}
@property(readonly, copy, nonatomic) NSURL *URL;	// G=0x354aa0ad; 
@property(readonly, assign, nonatomic) long long currentSize;	// G=0x354aa205; 
@property(assign, nonatomic) long long maxEntrySize;	// G=0x354aa2c1; S=0x354aa261; 
@property(assign, nonatomic) long long maxSize;	// G=0x354aa385; S=0x354aa31d; 
+ (id)assetCacheWithURL:(id)url;	// 0x354aa0cd
- (id)initWithURL:(id)url;	// 0x354aa495
// declared property getter: - (id)URL;	// 0x354aa0ad
- (id)allKeys;	// 0x354aa115
// declared property getter: - (long long)currentSize;	// 0x354aa205
- (void)dealloc;	// 0x354aa425
- (void)finalize;	// 0x354aa3e1
// declared property getter: - (long long)maxEntrySize;	// 0x354aa2c1
// declared property getter: - (long long)maxSize;	// 0x354aa385
- (void)removeEntryForKey:(id)key;	// 0x354aa1c9
// declared property setter: - (void)setMaxEntrySize:(long long)size;	// 0x354aa261
// declared property setter: - (void)setMaxSize:(long long)size;	// 0x354aa31d
- (long long)sizeOfEntryForKey:(id)key;	// 0x354aa171
@end

