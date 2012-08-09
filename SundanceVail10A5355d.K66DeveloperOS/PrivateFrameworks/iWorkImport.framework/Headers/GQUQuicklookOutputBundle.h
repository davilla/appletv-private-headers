/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQUOutputBundle.h"
#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQUQuicklookOutputBundle : NSObject <GQUOutputBundle> {
	CFDictionaryRef mQuicklookProperties;	// 4 = 0x4
	CFDictionaryRef mAttachments;	// 8 = 0x8
	CFDataRef mMainHtmlData;	// 12 = 0xc
	CFStringRef mUriScheme;	// 16 = 0x10
	CFStringRef mUuidStr;	// 20 = 0x14
}
- (id)init;	// 0x34c20605
- (id)initWithUriScheme:(CFStringRef)uriScheme;	// 0x34c20621
- (CFStringRef)createUriForResource:(CFStringRef)resource;	// 0x34c20811
- (void)dealloc;	// 0x34c2073d
- (BOOL)giveOutputToPreviewRequest:(QLPreviewRequestRef)previewRequest;	// 0x34c207f9
- (CFDataRef)mainHtmlData;	// 0x34c207d9
- (CFDictionaryRef)quicklookDictionary;	// 0x34c207e9
- (BOOL)setData:(CFDataRef)data mimeType:(CFStringRef)type forNamedResource:(CFStringRef)namedResource;	// 0x34c2086d
- (BOOL)setDataForMainHtmlResource:(CFDataRef)mainHtmlResource;	// 0x34c20851
- (void)setDocumentSize:(CGSize)size;	// 0x34c20941
- (void)setPageElementXPath:(CFStringRef)path withThumbnailsOnLeft:(BOOL)thumbnailsOnLeft;	// 0x34c209bd
@end
