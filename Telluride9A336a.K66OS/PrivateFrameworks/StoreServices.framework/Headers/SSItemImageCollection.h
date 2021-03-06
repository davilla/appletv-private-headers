/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {
@private
	NSArray *_itemImages;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *itemImages;	// G=0x3420642d; @synthesize=_itemImages
- (id)initWithImageCollection:(id)imageCollection;	// 0x342052a1
- (id)initWithItemImages:(id)itemImages;	// 0x342054e1
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x34205f2d
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x342060b5
- (id)_imagesForSize:(CGSize)size scale:(float)scale;	// 0x3420590d
- (id)_newImagesForDictionary:(id)dictionary;	// 0x34205ce1
- (id)bestImageForSize:(CGSize)size;	// 0x342055e5
- (id)copyPropertyListEncoding;	// 0x342061f1
- (id)copyWithZone:(NSZone *)zone;	// 0x34205581
- (void *)copyXPCEncoding;	// 0x34206341
- (void)dealloc;	// 0x34205535
- (id)imagesForKind:(id)kind;	// 0x3420579d
- (id)imagesForSize:(CGSize)size;	// 0x3420562d
// declared property getter: - (id)itemImages;	// 0x3420642d
@end

