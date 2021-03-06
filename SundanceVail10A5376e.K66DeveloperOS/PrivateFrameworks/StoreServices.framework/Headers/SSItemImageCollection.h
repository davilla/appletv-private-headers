/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {
	NSArray *_itemImages;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *itemImages;	// G=0x32cd8845; @synthesize=_itemImages
- (id)initWithImageCollection:(id)imageCollection;	// 0x32cd78cd
- (id)initWithItemImages:(id)itemImages;	// 0x32cd7b49
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x32cd85c1
- (id)_imagesForSize:(CGSize)size scale:(float)scale;	// 0x32cd7fa1
- (id)_newImagesForDictionary:(id)dictionary;	// 0x32cd8371
- (id)bestImageForSize:(CGSize)size;	// 0x32cd7c45
- (id)copyWithZone:(NSZone *)zone;	// 0x32cd7be9
- (id)copyXPCEncoding;	// 0x32cd8739
- (void)dealloc;	// 0x32cd7b9d
- (id)imagesForKind:(id)kind;	// 0x32cd7de5
- (id)imagesForSize:(CGSize)size;	// 0x32cd7c8d
// declared property getter: - (id)itemImages;	// 0x32cd8845
@end

