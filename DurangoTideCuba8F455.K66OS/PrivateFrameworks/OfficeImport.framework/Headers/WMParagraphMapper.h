/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapper.h"

@class OIXMLElement, WDParagraph;

__attribute__((visibility("hidden")))
@interface WMParagraphMapper : CMMapper {
@private
	WDParagraph *wdParagraph;	// 8 = 0x8
	WMParagraphMapper *mCurrentMapper;	// 12 = 0xc
	OIXMLElement *mActiveNode;	// 16 = 0x10
	BOOL mIsDeleted;	// 20 = 0x14
}
+ (void)mapPlaceholderAt:(id)at rect:(CGRect)rect withState:(id)state;	// 0x32cc21b5
- (id)initWithBlock:(id)block parent:(id)parent;	// 0x32bac541
- (id)activeNode;	// 0x32bb16dd
- (BOOL)containsOfficeArt;	// 0x32bad92d
- (void)dealloc;	// 0x32babf79
- (BOOL)isCollapsable:(id)collapsable;	// 0x32baf9cd
- (BOOL)isTextFrame;	// 0x32bac85d
- (void)mapAt:(id)at withState:(id)state;	// 0x32bac58d
- (void)mapFieldMarkerAt:(id)at marker:(id)marker withState:(id)state;	// 0x32c204fd
- (void)mapParagraphBodyWithState:(id)state;	// 0x32badf09
- (void)mapRunAt:(id)at run:(id)run withState:(id)state;	// 0x32bae0d1
- (id)runAtIndex:(int)index;	// 0x32c8857d
@end

