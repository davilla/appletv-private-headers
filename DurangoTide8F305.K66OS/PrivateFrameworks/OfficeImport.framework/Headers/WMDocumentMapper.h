/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMMapperRoot.h"
#import "CMMapper.h"

@class CMArchiveManager, NSString, WDDocument;

__attribute__((visibility("hidden")))
@interface WMDocumentMapper : CMMapper <CMMapperRoot> {
@private
	CMArchiveManager *mArchiver;	// 8 = 0x8
	WDDocument *wDom;	// 12 = 0xc
	NSString *mFileName;	// 16 = 0x10
}
@property(retain) id fileName;	// G=0x3455e095; S=0x34492811; converted property
- (id)initWithWDom:(id)wdom archiver:(id)archiver;	// 0x34492649
- (id)archiver;	// 0x34461ded
- (id)blipAtIndex:(unsigned)index;	// 0x344d7e95
- (float)bottomMargin;	// 0x34493a15
- (CGSize)contentSizeForDevice;	// 0x34493329
- (void)dealloc;	// 0x3446ca81
- (int)defaultTabWidth;	// 0x34466301
- (id)documentTitle;	// 0x34493b39
// converted property getter: - (id)fileName;	// 0x3455e095
- (BOOL)hasSessionBreakAtIndex:(unsigned)index;	// 0x3446b6b1
- (float)headerMargin;	// 0x34493941
- (float)leftMargin;	// 0x344935d5
- (void)mapDefaultCssStylesAt:(id)at;	// 0x34493c6d
- (void)mapWithState:(id)state;	// 0x3449284d
- (CGSize)pageSizeForDevice;	// 0x344930ad
- (float)rightMargin;	// 0x344936f9
// converted property setter: - (void)setFileName:(id)name;	// 0x34492811
- (id)styleMatrix;	// 0x34577e45
- (float)topMargin;	// 0x3449381d
@end

