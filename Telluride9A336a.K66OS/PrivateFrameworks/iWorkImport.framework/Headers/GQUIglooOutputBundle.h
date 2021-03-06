/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQUOutputBundle.h"


__attribute__((visibility("hidden")))
@interface GQUIglooOutputBundle : NSObject <GQUOutputBundle> {
@private
	CFDictionaryRef mAttachments;	// 4 = 0x4
	CFDataRef mMainHtmlData;	// 8 = 0x8
	CFStringRef mUriPrefix;	// 12 = 0xc
	CFStringRef mUuidStr;	// 16 = 0x10
}
- (id)init;	// 0x304c3da9
- (CFDictionaryRef)attachments;	// 0x304c33b5
- (CFDictionaryRef)createOutputDictionary;	// 0x304c3bbd
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x304c3ca5
- (void)dealloc;	// 0x304c3d21
- (CFDataRef)mainHtmlData;	// 0x304c33a5
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x304c3c31
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x304c3c85
- (void)setDocumentSize:(CGSize)size;	// 0x304c33c5
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x304c33c9
- (void)setUriPrefix:(CFStringRef)prefix;	// 0x304c3cf9
@end

