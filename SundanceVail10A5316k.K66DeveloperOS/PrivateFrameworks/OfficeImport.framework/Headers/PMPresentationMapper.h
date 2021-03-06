/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class CMArchiveManager, NSMutableArray, PDPresentation, OIXMLDocument, OIXMLElement, NSString;

__attribute__((visibility("hidden")))
@interface PMPresentationMapper : CMMapper <CMMapperRoot> {
@private
	int mWidth;	// 8 = 0x8
	PDPresentation *mPresentation;	// 12 = 0xc
	NSMutableArray *mSlideNames;	// 16 = 0x10
	NSMutableArray *mSlideGuids;	// 20 = 0x14
	NSString *mResourceUrlPrefix;	// 24 = 0x18
	NSString *mResourceUrlProtocol;	// 28 = 0x1c
	CMArchiveManager *mArchiver;	// 32 = 0x20
	OIXMLDocument *mXhtmlDoc;	// 36 = 0x24
	OIXMLElement *mBodyElement;	// 40 = 0x28
	unsigned mNextCommit;	// 44 = 0x2c
	unsigned mCurrentSlide;	// 48 = 0x30
	BOOL mHasPushedFirstSlides;	// 52 = 0x34
	float mSlideOriginY;	// 56 = 0x38
}
- (id)initWithPDPresentation:(id)pdpresentation archiver:(id)archiver;	// 0x31076c21
- (void)_pushEmptySlideWithMessage:(id)message;	// 0x311eb5cd
- (id)archiver;	// 0x31077df1
- (id)blipAtIndex:(unsigned)index;	// 0x3107d2a5
- (void)dealloc;	// 0x3108eda5
- (id)documentTitle;	// 0x3107770d
- (void)finishMappingWithState:(id)state;	// 0x3108a5b5
- (void)mapDefaultCssStylesAt:(id)at;	// 0x31077a05
- (void)mapElement:(id)element atIndex:(unsigned)index withState:(id)state isLastElement:(BOOL)element4;	// 0x31079fc1
- (CGSize)pageSizeForDevice;	// 0x31077389
- (void)setHtmlDocumentSizeInArchiver;	// 0x310772f1
- (CGSize)slideSize;	// 0x31076f45
- (void)startMappingWithState:(id)state;	// 0x31076f75
@end

