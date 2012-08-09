/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSOperation.h> // Unknown library

@class MPImageModifier, UIColor, UIImage, MPImageCache;
@protocol NSObject, MPImageRequestDelegate, NSCopying;

@interface MPImageCacheRequest : NSOperation {
	MPImageCache *_cache;	// 12 = 0xc
	id _completionHandler;	// 16 = 0x10
	int _contentMode;	// 20 = 0x14
	BOOL _decodeOnFetch;	// 24 = 0x18
	id<MPImageRequestDelegate> _delegate;	// 28 = 0x1c
	UIColor *_fillColor;	// 32 = 0x20
	CGSize _finalSize;	// 36 = 0x24
	MPImageModifier *_modifier;	// 44 = 0x2c
	id<NSObject, NSCopying> _uniqueKey;	// 48 = 0x30
	long long _tag;	// 52 = 0x34
}
@property(assign, nonatomic) MPImageCache *cache;	// G=0x36d33109; S=0x36d33119; @synthesize=_cache
@property(readonly, assign, nonatomic) BOOL canRequestSynchronously;	// G=0x36d32305; 
@property(copy, nonatomic) id completionHandler;	// G=0x36d33129; S=0x36d3313d; @synthesize=_completionHandler
@property(assign, nonatomic) int contentMode;	// G=0x36d331d9; S=0x36d331e9; @synthesize=_contentMode
@property(assign, nonatomic) BOOL decodeOnFetch;	// G=0x36d331f9; S=0x36d33209; @synthesize=_decodeOnFetch
@property(assign, nonatomic) id<MPImageRequestDelegate> delegate;	// G=0x36d3314d; S=0x36d3315d; @synthesize=_delegate
@property(retain, nonatomic) UIColor *fillColor;	// G=0x36d3316d; S=0x36d3317d; @synthesize=_fillColor
@property(assign, nonatomic) CGSize finalSize;	// G=0x36d3318d; S=0x36d331a5; @synthesize=_finalSize
@property(retain, nonatomic) MPImageModifier *modifier;	// G=0x36d331b9; S=0x36d331c9; @synthesize=_modifier
@property(readonly, assign, nonatomic) UIImage *placeholderImage;	// G=0x36d32309; 
@property(assign, nonatomic) long long tag;	// G=0x36d33219; S=0x36d33231; @synthesize=_tag
@property(retain, nonatomic) id<NSObject, NSCopying> uniqueKey;	// G=0x36d33245; S=0x36d33255; @synthesize=_uniqueKey
- (id)init;	// 0x36d31ed1
- (BOOL)_canUseInputImageAsFinalOutput:(id)output;	// 0x36d32029
- (void)_getGeometryForCreatingNewImage:(id)creatingNewImage finalSize:(CGSize)size contentSize:(CGSize *)size3 contentSubRect:(CGRect *)rect imageFrame:(CGRect *)frame;	// 0x36d32521
- (id)_newBitmapImageFromImage:(id)image finalSize:(CGSize)size;	// 0x36d32931
- (void)_sendErrorToDelegate:(id)delegate;	// 0x36d32bf1
- (void)_sendImageToDelegate:(id)delegate;	// 0x36d32e61
// declared property getter: - (id)cache;	// 0x36d33109
// declared property getter: - (BOOL)canRequestSynchronously;	// 0x36d32305
- (void)cancel;	// 0x36d323a5
// declared property getter: - (id)completionHandler;	// 0x36d33129
// declared property getter: - (int)contentMode;	// 0x36d331d9
- (id)copyImageFromImage:(id)image;	// 0x36d32241
- (id)copyRawImageReturningError:(id *)error;	// 0x36d322f9
- (void)dealloc;	// 0x36d31f99
// declared property getter: - (BOOL)decodeOnFetch;	// 0x36d331f9
// declared property getter: - (id)delegate;	// 0x36d3314d
- (id)description;	// 0x36d31f29
// declared property getter: - (id)fillColor;	// 0x36d3316d
// declared property getter: - (CGSize)finalSize;	// 0x36d3318d
- (unsigned)hash;	// 0x36d3230d
- (BOOL)isEqual:(id)equal;	// 0x36d3232d
- (void)main;	// 0x36d323e9
// declared property getter: - (id)modifier;	// 0x36d331b9
// declared property getter: - (id)placeholderImage;	// 0x36d32309
// declared property setter: - (void)setCache:(id)cache;	// 0x36d33119
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x36d3313d
// declared property setter: - (void)setContentMode:(int)mode;	// 0x36d331e9
// declared property setter: - (void)setDecodeOnFetch:(BOOL)fetch;	// 0x36d33209
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36d3315d
// declared property setter: - (void)setFillColor:(id)color;	// 0x36d3317d
// declared property setter: - (void)setFinalSize:(CGSize)size;	// 0x36d331a5
// declared property setter: - (void)setModifier:(id)modifier;	// 0x36d331c9
// declared property setter: - (void)setTag:(long long)tag;	// 0x36d33231
// declared property setter: - (void)setUniqueKey:(id)key;	// 0x36d33255
// declared property getter: - (long long)tag;	// 0x36d33219
// declared property getter: - (id)uniqueKey;	// 0x36d33245
@end
